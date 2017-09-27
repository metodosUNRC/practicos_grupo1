//----------------------------------------------------------------------------
// Este programa encuentra las raices de la funcion partir del metodo de
// Newton-Raphson
//----------------------------------------------------------------------------

#include <iostream>
#include <math.h>

using namespace std;

int main() 
{
	float x, fx, dfx, c;

	cout << "Metodo de Newton-Raphson" <<endl;
	cout << endl;
	
	cout << "Ingrese el valor de x inicial: ";
	cin  >> x;
	cout << endl;

   //funcion x*x-2
   
	fx = x*x-2;
	
	dfx = 2*x;
	
	c = abs(fx);
	
	while (c>0.01)
	{
		x=x-(fx/dfx);
		
		fx = x*x-2;
	
	    dfx = 2*x;
				
		c = abs(fx);	
	}
	
	cout << "la raiz es= " << x << endl;
}	
