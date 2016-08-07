
%% Constants

g  = 9.8;
cw = 0.002; % Wheel friction
cd = 0.18;  % Air drag

r = 0.1; % Wheel radius
w = 10;  % Weight

% Motor curve coeficients

c1 = 1; 
c2 = 1;

% Simulation parameters

u_start = 0;
u_end   = 5;
u_step  = 0.1;

teta = 0;

%% Symbolic variables

syms v t u % Velocity, torque, voltage

%% Forces

Fd(v) = -cd*v^2;   % Drag force
Fa    = -cw*(w*g); % wheel friction force
Fg    = -w*g*sin(teta);

%% Equations
F(1) = (Fd + Fa + Fg)/2 + t*r;    % Force equilibrium, a = 0
F(2) = -v/r + c1*u - c2*t;   % Motor equation in steady state

f = solve(F(1),F(2), v, t);  % Solve equations as a function of the voltage

fv = f.v(1);                 % Velocity as function of voltage
ft = f.t(1);                 % Torque as function of voltage

%% Simulation 

u_range = u_start:u_step:u_end;
v_res   = zeros(length(u_range), 1);

for u_value = u_range
    index = int16((u_value-u_start)/u_step + 1);
   
    v_value = double(subs(fv, u, u_value)); % Substitute the voltage in the function
    if ( v_value < 0); v_value = 0; end;    % Negative velocities are not covered in this model 
    
    v_res(index) = v_value;
end

plot(u_range, v_res)