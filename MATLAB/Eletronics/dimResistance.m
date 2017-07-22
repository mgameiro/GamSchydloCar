
%Parameters
Vcc = 9;
Vbe = 0.7;
Vce = 0.2;

%I vector
I = 0.1:0.001:1;
C = 100e-9:1e-9:10e-6;

%%Vcc = 2RI + Vce
R = (Vcc-Vce)./(2*I);
%fc = 1/RC
fc = 1e-6./(10e3*C*1e6);

figure(3);
subplot(2,1,1);
plot(I*1e3,R);
xlabel('Current [mA]');
ylabel('Resistance [ohm]');
subplot(2,1,2);
plot(C*1e6,fc);
xlabel('Capactior [muC]');
ylabel('Cut-off Frequency [MHz]');