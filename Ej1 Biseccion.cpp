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
	
	cout << "Método de la bisección" <<endl;
	cout << endl;
	
	cout << "primer valor del intervalo= ";
	cin  >> a;
	cout << endl;
	
	cout << "segundo valor del intervalo= ";
	cin  >> b;
	cout << endl;
	
	e=0.00001;  //Precicion de las raices 
	
	//funcion a calcular : x^2-2
	
	
	fa =a*a-2;
	
	fb =b*b-2;
	
	if  ((fa * fb) < 0)
	{
	
		while(abs(b-a)>e)
		{
				fa =a*a-2;
				
				fb =b*b-2;
				
				c=(a+b)/2;
				
				fc=c*c-2;
				
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
