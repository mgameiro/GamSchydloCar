function [Ia, Nr, Pi, Po, rend] = modelss(Ua, Tc, PRINT)


%% Calculate main motor's constants
k = 0.2602;
B = 0.0025;
Ra = 2.75;


%% Calculate current and speed in steady-state
%   Ua = Ra Ia + K w
%   k Ia = Tc + B w


A = [Ra k; k -B]\[Ua; Tc];
Ia = A(1); w = A(2);

Nr = 60*w/(2*pi);

%% Calculate Power, Energy and Efficiencies

Pi = Ua.*Ia;
Po = w.*Tc;
rend = Po/Pi;
PJ = Ra*Ia*Ia;
Pmec = B*w*w;

if (PRINT == true)
%% Print results

fprintf('Ponto de Funcionamento: Ua = %g [V], Tc = %g [Nm]\n', Ua, Tc);
fprintf('\tIa = %g [mA]\n', Ia*1000);
fprintf('\tNr = %g [rpm]\n', Nr);
fprintf('\tPi = %g [mW]\n', Pi*1000);
fprintf('\tPo = %g [mW]\n', Po*1000);
fprintf('\tRend = %g\n', rend);
fprintf('\tPJ = %g [mW]\n', PJ*1000);
fprintf('\tPmec = %g [mW]\n', Pmec*1000);

%% Search max load torque in which w = 0

fprintf('Torque máximo:\n');
fprintf('\tTcmax = %g [Nm]\n', (k/Ra)*Ua);

%% Speed for Rroda = 0.15

fprintf('Velocidade:\n');
fprintf('\tv = %g [m/s]\n', w*0.15);

end

end

