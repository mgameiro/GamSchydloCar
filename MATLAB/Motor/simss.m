
Ua = 0:0.1:5;
Ia = zeros(1, length(Ua));
Nr = zeros(1, length(Ua));
rend = zeros(1, length(Ua));

for k = 1:length(Ua)
    [Ia(k), Nr(k), rend(k)] = modelss(Ua(k), 0.5*(0.1540+0.0294), false);
end

%% Graphs plots
figure(1);
subplot(2,1,1);
plot(Ua, Ia*1000);
title('Current');
xlabel('Ua [V]');
ylabel('Ia [mA]');
subplot(2,1,2);
plot(Ua, Nr);
title('Rotor angular speed');
xlabel('Ua [V]');
ylabel('Nr [rpm]');

figure(2);
subplot(2,1,1);

subplot(2,1,2);
plot(Ua, rend);
title('Efficiency');
xlabel('Ua [V]');