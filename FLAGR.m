%Funci�n que eval�a el argumento de interpolaci�n x y mediante el 
% polinomio de interpolaci�n de Lagrange encuentra el valor de 
% interpolaci�n yi.

function [yi]=FLAGR(xs,ys,x)
n=length(xs);
yi=0;
for  i=1:n
     producto=ys(i);
     for  j=1:n
          if  i~=j
              producto=producto*(x-xs(j))/(xs(i)-xs(j));            
          end
     end
     yi=yi+producto;
end