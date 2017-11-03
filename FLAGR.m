%Función que evalúa el argumento de interpolación x y mediante el 
% polinomio de interpolación de Lagrange encuentra el valor de 
% interpolación yi.

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