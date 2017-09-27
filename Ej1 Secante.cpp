//----------------------------------------------------------------------------
// Este programa encuentra las raices de la funcion partir del metodo de
// Secante
//----------------------------------------------------------------------------

#include <iostream>
#include <math.h>

using namespace std;

int main() 
{
	float x, x1,a, fx,fx1, c;

	cout << "Metodo de Secante" <<endl;
	cout << endl;
	
	cout << "Ingrese el valor de x= ";
	cin  >> x;
	cout << endl;

   //funcion x*x-2
   
	fx = x*x-2;
	fx1= x1*x1-2;
	x1=0;
	c=99;
	
	while (c>0.0000001)
	{
		a=x;
		x=x-((x-x1)/(fx-fx1))*fx;
		x1=a;
		fx = x*x-2;
		fx1= x1*x1-2;	
		c=abs(x-x1);
	}
	
	cout << "la raiz es= " << x << endl;
}
