//-----------------------------------------------------------------------------
// Este programa lee una matriz y comprueva si es simetrica o no.
// Devuelve 1 si es simetrica o 0 si no lo es.
//-----------------------------------------------------------------------------

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int numeros[100][100], filas, columnas, contador=0, elementos=0;
		
	cout << "numero de filas de la matriz= ";
	cin  >> filas;
	cout << endl;
	
	cout << "numero de columnas de la matriz= ";
	cin  >> columnas;
	cout << endl;
	
	//completar la matriz.
	for( int i=1; i<=filas; i++ ){
		for( int j=1; j<=columnas; j++){
			cout << "ingrece un numero ["<<i<<"] ["<<j<<"]= ";
			cin  >> numeros[i][j];
			cout << endl;
		}
	} 

	// verificar si es simtrica.
	if(filas == columnas){
		for( int i=1; i<=filas; i++ ){
			for( int j=1; j<=columnas; j++){
				if(numeros[i][j] == numeros[j][i]){
					contador++;
				}
			}
		}
	}
	elementos=filas*columnas;
	if((elementos==contador)){
		cout << "La matriz es simetrica: 1" <<endl;
	}
	else{
		cout << "La matriz NO es simetrica: 0" <<endl;
	}
}
