%Simula��o do modelo steady-state

%Defini��o de constantes
%(Dados do motor:http://mauser.pt/catalog/product_info.php?products_id=75505)
Ra = 0.0712; %Resist�ncia da armadura
Kf = 0.0045; %Constante do motor
C1 = 0.9*9.81; %Constante de atrito
C2 = 0.5*1.225*(0.10)^2*1.05; %Constante de atrito 
R = 0.03; %Raio das rodas
M = 1.5; %Massa total do carro
NM = 2; %N�mero de motores
%Defini��o de entrada
Ua = 5;
theta = 5*pi/180; %Inclina��o do ch�o

%Simula��o
sim('motor_model_ss.slx');

%Print
fprintf('v = %g [m/s]\n', v(1));
fprintf('v = %g [km/h]\n', v(1)*3.6);

%Plots
plot(Tc,v);
xlabel('Tc [Nm]');
ylabel('v [m/s]');
title('Velocidade');