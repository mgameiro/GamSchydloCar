u = [2,0.1,6.5];
u_range = u(1):u(2):u(3);

%Motor 1
Ra = 5.625;
kf = 0.5371;
kt = 0.2625;


%Simulação steady-state do motor
[v, T, I] = MotorSSsim(u, Ra, kf, kt);


%Gráficos
figure;
subplot(2,2,1);
plot(u_range, v);
title('Velocidade');
xlabel('ua [V]');
ylabel('v [m/s]');
subplot(2,2,2);
plot(u_range, I);
title('Current');
xlabel('ua [V]');
ylabel('ia [A]');
subplot(2,2,3);
plot(u_range, T);
title('Torque');
xlabel('ua [V]');
ylabel('T [Nm]');
subplot(2,2,4);
plot(u_range, u_range.*I');
title('Potência');
xlabel('ua [V]');
ylabel('P [W]');


%Motor 2
Ra = 7.5000;
kf = 0.6741;
kt = 0.6613;


%Simulação steady-state do motor
[v, T, I] = MotorSSsim(u, Ra, kf, kt);


%Gráficos
figure;
subplot(2,2,1);
plot(u_range, v);
title('Velocidade');
xlabel('ua [V]');
ylabel('v [m/s]');
subplot(2,2,2);
plot(u_range, I);
title('Current');
xlabel('ua [V]');
ylabel('ia [A]');
subplot(2,2,3);
plot(u_range, T);
title('Torque');
xlabel('ua [V]');
ylabel('T [Nm]');
subplot(2,2,4);
plot(u_range, u_range.*I');
title('Potência');
xlabel('ua [V]');
ylabel('P [W]');