clc
clear all

%% Load workplace

load('identifica.mat')

tp = SInfo.PeakTime;
ts = SInfo.SettlingTime;
Mp = SInfo.Overshoot/100;

omega = sqrt(( (pi^2)/tp^2) - 16/(ts^2))
zeta = 4/(omega * ts)

Gmf = tf(omega^2, [1, 2*omega*zeta, omega^2])

b = (omega^2)/420;
a = -2*omega*zeta;

G = tf(b, [1, -a, 0])

