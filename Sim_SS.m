%Simulação do modelo steady-state

%Definição de constantes
Ra = 1; %Resistência da armadura
Kf = 0.0014; %Constante do motor
C1 = 1; %Constante de atrito
C2 = 1; %Constante de atrito
R = 0.03; %Raio das rodas
%Definição de entrada


%Simulação
sim('motor_model_ss.slx');