%Función del método Gauss-Saidel.
% A*x = b   
% A = D - L - U
% (D - L - U)*x = b
% (D - L)*x = b + U*x
% x(k+1)=inv(D-L)*(b + U*x(k))
% A: Matriz Cuadrada b:x0: Vector Columna  t:Tolerancia
% x: resultado k: número de interacciones E=vector de errores

function [x,k,E]=GaussSaidel(A,b,x0,t)
[m,n]=size(A);
D=zeros(m);
for  i=1:m
     D(i,i)=A(i,i);
end
U=zeros(m);
for  i=1:m-1
     for  j=i+1:m
          U(i,j)=-A(i,j);
     end
end
L=zeros(m);
for  j=1:m-1
     for  i=j+1:m
          L(i,j)=-A(i,j);
     end
end
e=1;
k=0;
while e>t
      k=k+1;
      x1=inv(D-L)*(b+U*x0);
      e=sum(abs(x1-x0))/m;
      E(k)=e;
      x0=x1;
end
x=x0;