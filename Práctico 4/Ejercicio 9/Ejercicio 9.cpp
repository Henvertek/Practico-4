// Ejercicio 9.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	long int number;
	do {
		cout << "Ingrese un numero positivo:\n>>> ";
		cin >> number;
		if(number >= 0) cout << number * number << endl;
	} while(number >= 0);
	cout << "Saliendo...";
  return 0;
}

