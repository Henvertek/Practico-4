// Ejercicio 7.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int N;
	cout << "Ingrese un numero para imprimir su tabla de multiplicacion:\n>>> ";
	cin >> N;
	for(int i = 0; i < 11; i++) {
		cout << N << " x " << i << " = " << N * i << endl;
	}
	system("pause");
  return 0;
}

