clc
clear all
%%
load('identifica.mat')

steadyState = mean(first_x(end-400+1:end,2))

SInfo = stepinfo(first_x(:,2),first_x(:,1), steadyState);

save('identifica.mat')
