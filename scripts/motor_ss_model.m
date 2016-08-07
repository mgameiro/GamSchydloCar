
%% Constants

g  = 9.8;
cw = 0.002; % Wheel friction
cd = 0.18;  % Air drag

r = 0.1;    % Wheel radius
w = 10;  % Weight

% Motor curve coeficients

c1 = 1; 
c2 = 1;

% Simulation parameters

u_start = 0;
u_end   = 5;
u_step  = 0.1;


%% Symbolic variables

syms v t  % Velocity, torque, voltage

%% Forces

Fd(v) = -cd*v^2; % Drag force
Fa    = -cw*(w*g);   % wheel friction force

%% Equations
F(1) = Fd + Fa + t*r;       % Force equilibrium, a = 0
F(2) = -v/r + c1*u - c2*t;  % Motor equation in steady state


%% Simulation 

u_range = u_start:u_step:u_end;
v_res   = zeros(length(u_range), 1);

for u = u_range
    index = int16((u-u_start)/u_step + 1);
    
    F(2) = -v/r + c1*u - c2*t; % Update motor equation with new voltage
    
    res = solve(F(1),F(2));
    v_res(index) = double(res.v(2));
end

plot(u_range, v_res)

