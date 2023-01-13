clc
clear all

%% Load workplace

load('identifica.mat')

tp = SInfo.PeakTime;
ts = SInfo.SettlingTime;
Mp = SInfo.Overshoot/100;

wn = sqrt(( (pi^2)/tp^2) - 16/(ts^2))
zeta = 4/(omega * ts)

Gmf = tf(wn^2, [1, 2*wn*zeta, wn^2])
C = 420;

b = (wn^2)/C;
a = 2*wn*zeta;

G = tf(b, [1, a, 0])

%save('identifica.mat')

wd = wn/sqrt(1-zeta^2);
Td = 2*pi/wd;

T =Td/8

Gz = c2d(G, T)

hold on
step(feedback(G*C,1))
step(feedback(Gz*C,1))

T =Td/16

Gz = c2d(G, T)
step(feedback(Gz*C,1))
hold off