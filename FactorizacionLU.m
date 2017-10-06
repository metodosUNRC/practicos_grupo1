%Esta función calcula el L y el U de una función A.
%A es la variable de entrada.
%L y U son las variables de salida.
%L es una matriz triangular inferior, con unos en su diagonal.
%U es una matriz triangular superior.

function [L,U]=FactorizacionLU(A)
[m,n]=size(A);
for  i=1:m
     L(i,i)=1;
     for  j=i+1:m
          L(j,i)=A(j,i)/A(i,i);
          for  k=i+1:m
               A(j,k)=A(j,k)-L(j,i)*A(i,k);
          end
     end
     for  k=i:n
          U(i,k)=A(i,k);
     end
end