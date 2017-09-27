//-----------------------------------------------------------------------------
// Este programa encuentra las raices de una funcion a partir de un
// intervalo de la misma, es necesario que la funcion sea continua en ese
// intervalo.
//-----------------------------------------------------------------------------

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float a,b,c,e, fa, fb, fc;
	
	cout << "M�todo de la bisecci�n" <<endl;
	cout << endl;
	
	cout << "primer valor del intervalo= ";
	cin  >> a;
	cout << endl;
	
	cout << "segundo valor del intervalo= ";
	cin  >> b;
	cout << endl;
	
	e=0.000000000001;  //Precicion de las raices 
	
	//funcion a calcular : x*sin(x)
	
	
	fa =a*sin(a);
	
	fb =b*sin(b);
	
	if  ((fa * fb) < 0)
	{
	
		while(abs(b-a)>e)
		{
				fa =a*sin(a);
				
				fb =b*sin(b);
				
				c=(a+b)/2;
				
				fc=c*sin(c);
				
					if  ((fa * fc)<0)
					{
			   			b=c;
	    			}else{
		       			a=c;
			        }
    	}
    	cout << "la raiz de la funcion es=  " << c << endl;
	}else{
	    cout << "no se sabe si la funcion no tiene raices en ese intervalo" <<endl;		        
		       
	}
}
