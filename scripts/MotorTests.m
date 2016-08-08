figure;
title('Velocidade');
xlabel('Ua [V]');
ylabel('v [m/s]');
hold on;

u = [2,0.1,6.5];
u_range = u(1):u(2):u(3);

%Motor 1
% [v, T, I] = MotorSSsim(u ,6,rpm2rad(14500),340e-5);
% 
% plot(u_range, v);
% plot(u_range, T,'.');
% plot(u_range, I,'.');

%Motor 2

Ra = 7.5000;
kf = 0.6741;
kt = 0.6613;

[v, T, I] = MotorSSsim(u, Ra, kf, kt);

plot(u_range, v);
plot(u_range, T,'.');
plot(u_range, I,'.');
