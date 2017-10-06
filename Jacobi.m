%Función del método Jacobi.
% A*x = b
% A = D + R
%(D + R)*x = b
% D*x + R*x = b
% x(k+1)=inv(D)*(b-R*x(k))
% A: Matriz Cuadrada b:x0: Vector Columna  t:Tolerancia
% x:resultado k: número de interacciones E=vector de errores

function [x,k,E]=Jacobi(A,b,x0,t)
[m,n]=size(A);
D=zeros(m);
for  i=1:m
     D(i,i)=A(i,i);
end
R = A - D;
e=1;
k=0;
while e>t
      k=k+1;
      x1=inv(D)*(b-R*x0);
      e=sum(abs(x1-x0))/m;
      E(k)=e;
      x0=x1;
end
x=x0;