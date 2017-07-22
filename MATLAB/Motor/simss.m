close all; clear all;

Ua = 0:0.1:5;
Ia = zeros(1, length(Ua));
Nr = zeros(1, length(Ua));
Pi = zeros(1, length(Ua));
Po = zeros(1, length(Ua));
rend = zeros(1, length(Ua));
%https://en.wikipedia.org/wiki/Rolling_resistance
Cf = 0.0025;
Mass = 0.45;
Tc = Mass*sin(5*pi/180);

for k = 1:length(Ua)
    [Ia(k), Nr(k), Pi(k), Po(k), rend(k)] = modelss(Ua(k), Cf*Mass+Tc, false);
end

%% Graphs plots
figure(1);
subplot(2,1,1);
plot(Ua, Ia*1000);
title('Current');
xlabel('Ua [V]');
ylabel('Ia [mA]');
subplot(2,1,2);
plot(Ua, max(0,Nr));
title('Rotor angular speed');
xlabel('Ua [V]');
ylabel('Nr [rpm]');

figure(2);
subplot(2,1,1);
plot(Ua, Pi);
hold on;
plot(Ua, Po);
title('Input Power');
xlabel('Ua [V]');
ylabel('Pi [W]');
subplot(2,1,2);
plot(Ua, rend);
title('Efficiency');
xlabel('Ua [V]');