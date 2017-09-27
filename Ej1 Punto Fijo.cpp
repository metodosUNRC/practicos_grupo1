//----------------------------------------------------------------------------
// Este programa encuentra las raices de la funcion partir del metodo de
// Punto Fijo, llevando la funcion de la forma f(x)=0 a la forma x=g(x) y
// evaluando x hasta que se cumpla la igualdad.
//----------------------------------------------------------------------------

#include <iostream>
#include <math.h>

using namespace std;

int main() 
{
	float x,a,e;

	cout << "Metodo de Punto Fijo" <<endl;
	cout << endl;
	
	cout << "Ingrese el valor de x= ";
	cin  >> x;
	cout << endl;
	
	// Funcion x^2-2x-3
	
	e=abs(x);
	
	while(e>0.000001)
	{
		a=x;
		x=3/(x-2);
		e=abs(x-a);
	}
	cout<<"la raiz es= "<< x;
}
