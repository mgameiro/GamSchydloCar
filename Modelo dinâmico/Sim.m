%% Defini��o de constantes
%Constantes do motor
%(Dados do motor:http://mauser.pt/catalog/product_info.php?products_id=75505)
NM = 2; %N�mero de motores
m = 19e-3; %Massa do motor
mr = 0.4*m; %massa do rotor
Rr = 3e-3; %Raio do rotor
Ra = 5.625; %Resist�ncia el�ctrica do motor
Kf = 0.26; %Constante el�ctrica de velocidade
Kt = 0.2625; %Coonstante mec�nica de Torque
J = 0.5*mr*Rr^2; %Momento de in�rcia
La = 0.05; %Indut�ncia da bobine

%Constantes fisicas do carro
Cf = 0.9*9.81; %Constante de atrito de fric��o
Cd = 0.5*1.225*(0.10)^2*1.05; %Constante de atrito aerodin�mico
R = 0.03; %Raio das rodas
M = 1; %Massa total do carro

%Entradas
ua = [0 4.5]; %Tens�o de entrada no motor
theta = 5*pi/180; %Inclina��o do ch�o

%Simula��o Modelo Din�mico
sim('motor_model.slx');

%Gr�ficos
plotyy(t,ua,t,ia);