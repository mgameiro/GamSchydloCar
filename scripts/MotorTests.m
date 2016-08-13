close all; clear all;
u = [2,0.1,6.5];
u_range = u(1):u(2):u(3);

%% Motor 1
Ra = 5.625;
kf = 0.5371;
kt = 0.2625;


%Simulação steady-state do motor
[v, T, I] = MotorSSsim(u, Ra, kf, kt);


%Gráficos
figure('name','Pololu 1594');
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
ylabel('Pin [W]');

%% Motor 2
Ra = 5.625;
kf = 0.3581;
kt = 0.1765;


%Simulação steady-state do motor
[v, T, I] = MotorSSsim(u, Ra, kf, kt);


%Gráficos
figure('name', 'Pololu 1124');
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
ylabel('Pin [W]');

%% Motor 3
Ra = 7.5000;
kf = 1.2732;
kt = 0.8827;


%Simulação steady-state do motor
[v, T, I] = MotorSSsim(u, Ra, kf, kt);


%Gráficos
figure('name', 'Pololu 1118');
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
ylabel('Pin [W]');

%% Motor 4
Ra = 7.5000;
kf = 1.1234;
kt = 0.8827;


%Simulação steady-state do motor
[v, T, I] = MotorSSsim(u, Ra, kf, kt);


%Gráficos
figure('name', 'Pololu 1120');
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
ylabel('Pin [W]');

%% Motor 5
Ra = 7.5000;
kf = 0.6741;
kt = 0.6620;


%Simulação steady-state do motor
[v, T, I] = MotorSSsim(u, Ra, kf, kt);


%Gráficos
figure('name', 'Pololu 1121');
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
ylabel('Pin [W]');

