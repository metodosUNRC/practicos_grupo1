%Este programa permite calcular la integral de una función.
%Se ingresan los limites del intervalo en donde se evaluda la integral
%Se selecciona el metodo a utilizar:
% M=1  Metodo del Trapecio.
% M=2  Metodo de Simpson 1/3.
% M=3  Metodo de Simpson 3/8.

a=input('Ingrese el limite inferior= ');
b=input('Ingrese el limite superior= ');
g=input('Funcion a evaluar= ','s');
f=inline(g);
M=input('Ingrese metodo= ');

if  M==1
    N=input('Ingrese el numero de intervalos= ');
    h=(b-a)/N;
    k=1;
    t=[];
    
    for  i=a+h:h:b-h
         t(k)=f(i);
         k=k+1;
    end
    I=h/2*(f(a)+f(b)+2*sum(t));
end
if  M==2
    k=input('Igrese la cantidad de veces que desea aplicar el metodo= ');
    N=2*k;
    I=0;
    h=(b-a)/N;
    
    for  i=1:k
         I=I+(h/3)*(f(a)+4*f(a+h)+f(a+2*h));
         a=a+2*h;
    end
end
if  M==3
    k=input('Igrese la cantidad de veces que desea aplicar el metodo= ');
    N=3*k;
    I=0;
    h=(b-a)/N;
    
    for  i=1:k
         I=I+(3*h/8)*(f(a)+3*f(a+h)+3*f(a+2*h)+f(a+3*h));
         a=a+3*h;
    end
end
fprintf('El valor aproximado de la integral en= %f', I);