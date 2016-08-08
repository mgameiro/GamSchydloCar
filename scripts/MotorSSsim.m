function [ v_sim, T_sim, I_sim ] = MotorSSsim(u,u_nominal,w_no_load,torque_stall)
%% Simulation parameters

u_start = u(1);
u_end   = u(3);
u_step  = u(2);

%% Model parameters

g  = 9.81;

% Torques resistentes
cw = 0.002; % Wheel friction
cd = 0.18;  % Air drag
teta = 0;   % Ground slope

% Parâmetros fisicos do carro
r = 4 * 10^-2; % Wheel radius

wc = 0.025;   % Chasi weight
wm = 2*0.128; % Motor weight
wa = 0.025;   % Arduino weight
wb = 6*0.030; % 6 AA Battery's weight

w = (wc + wm + wa + wb);  % Total weight
 
%%  Motor parameters

c1 = w_no_load/u_nominal;          % Parameters of torque curve 
c2 = (c1*u_nominal)/torque_stall;

kt = 1/c1;
Ra = c2*kt^2;

fprintf('Kt: %f \nRa: %f\n\n', kt, Ra);

%% Symbolic variables

syms v T u % Velocity, torque, voltage

%% Forces

Fd = -cd*v^2;   % Drag force
Fa = -cw*(w*g); % wheel friction force
Fg = -w*g*sin(teta);

%% Equations

F(1) = (Fd + Fa + Fg)/2 + T*r;  % Force equilibrium, a = 0
F(2) = -v/r + c1*u - c2*T;      % Motor equation in steady state

%% Solve equations

f = solve(F(1),F(2),v,T);  % Solve equations as a function of the voltage

fv = f.v(1);               % Velocity as function of voltage
ft = f.T(1);               % Torque as function of voltage

%% Compute return values

u_range = u_start:u_step:u_end;

v_sim = zeros(length(u_range), 1);
T_sim = zeros(length(u_range), 1);

for u_value = u_range
    index = int16((u_value-u_start)/u_step + 1);
   
    v_value = double(subs(fv, u, u_value)); % Substitute the voltage in the function
    t_value = double(subs(ft, u, u_value));
    
    if ( v_value < 0); v_value = 0; t_value = 0; end; % Negative velocities are not covered in this model 
    
    v_sim(index) = v_value;
    T_sim(index) = t_value;
end

I_sim = T_sim/kt;

% Resposta da velocidade

end

