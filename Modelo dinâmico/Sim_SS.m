%Simulação do modelo steady-state

%Definição de constantes
%(Dados do motor:http://mauser.pt/catalog/product_info.php?products_id=75505)
C1 = 0.9*9.81; %Constante de atrito
C2 = 0.5*1.225*(0.10)^2*1.05; %Constante de atrito 
R = 0.03; %Raio das rodas
M = 1.5; %Massa total do carro
NM = 2; %Número de motores
theta = 5*pi/180; %Inclinação do chão

%Definição de entrada
Ua = 6;

%Motor 1
Ra = 0.2259; %Resistência da armadura
Kf = 0.0045; %Constante do motor
Tc = 0:0.001:1;
figure(1);
plot(Tc,(60/(2*pi))*((1/Kf)*Ua-(Ra/Kf^2)*Tc));
xlabel('Tc [Nm]');
ylabel('v [m/s]');
title('Velocidade Angular (M1)');

for n=1:10
   Tc = R*(); 
end

fprintf('Motor 1:\n');
fprintf('Ia = %g [A]\n', Ia(1));
fprintf('Tc = %g [Nm]\n', Tc(1));
fprintf('v = %g [m/s]\n', v(1));
fprintf('v = %g [km/h]\n', v(1)*3.6);


%Definição de entrada
Ua = 4.5;

%Motor 2
Ra = 0.0712; %Resistência da armadura
Kf = 0.2625; %Constante do motor
Tc = 0:0.001:1;
figure(2);
plot(Tc,(60/(2*pi*180))*((1/Kf)*Ua-(Ra/Kf^2)*Tc));
xlabel('Tc [Nm]');
ylabel('v [m/s]');
title('Velocidade Angular (M2)');

sim('motor_model_ss.slx');

fprintf('Motor 2:\n');
fprintf('Ia = %g [A]\n', Ia(1));
fprintf('Tc = %g [Nm]\n', Tc(1));
fprintf('v = %g [m/s]\n', v(1)/180);
fprintf('v = %g [km/h]\n', v(1)*3.6/180);