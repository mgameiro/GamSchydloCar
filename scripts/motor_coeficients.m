torque_stall = 340 * (10^(-3) * 10^-2);
w_no_load    = 14500 * (2*pi/60);
u_nominal    = 6;

c1 = w_no_load/u_nominal;
c2 = (c1*u_nominal)/torque_stall;

c1
c2