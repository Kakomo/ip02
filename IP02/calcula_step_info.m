clc
clear all
%%
load('identifica.mat')

steadyState = mean(x(end-400+1:end,2))

SInfo = stepinfo(x(:,2),x(:,1), steadyState);

save('identifica.mat')
