%% Definição de constantes
%Constantes do motor
%(Dados do motor:http://mauser.pt/catalog/product_info.php?products_id=75505)
NM = 2; %Número de motores
m = 19e-3; %Massa do motor
mr = 0.4*m; %massa do rotor
Rr = 3e-3; %Raio do rotor
Ra = 5.625; %Resistência eléctrica do motor
Kf = 0.26; %Constante eléctrica de velocidade
Kt = 0.2625; %Coonstante mecânica de Torque
J = 0.5*mr*Rr^2; %Momento de inércia
La = 0.05; %Indutância da bobine

%Constantes fisicas do carro
Cf = 0.9*9.81; %Constante de atrito de fricção
Cd = 0.5*1.225*(0.10)^2*1.05; %Constante de atrito aerodinâmico
R = 0.03; %Raio das rodas
M = 1; %Massa total do carro

%Entradas
ua = [0 4.5]; %Tensão de entrada no motor
theta = 5*pi/180; %Inclinação do chão

%Simulação Modelo Dinâmico
sim('motor_model.slx');

%Gráficos
plotyy(t,ua,t,ia);