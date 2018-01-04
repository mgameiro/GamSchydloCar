
%% Open file and read data
addpath('tests');
[U,I] = textread('test2.txt','%f %f');

%% Make calculations
P = U.*I;

%% Plot the variables
figure(1);
plot(U);
figure(2);
plot(I*1e3);
figure(3);
plot(P);