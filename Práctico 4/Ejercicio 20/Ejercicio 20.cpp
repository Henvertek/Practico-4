// Ejercicio 20.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	float total = 0;
	int amount = 0;
	cout << "Ingrese La cantidad de numeros que debe promediar:\n>>> ";
	cin >> amount;
	for(int i = 0; i < amount;) {
		float curr;
		cout << "Ingrese un numero, quedan " << amount - i << endl;
		cin >> curr;
		total += curr;
		i++;
		cout << "(El promedio actual es de " << total / (float)i << ")\n\n";
	}
	cout << "El promedio final es de " << total / (float)amount << endl;
	system("pause");
  return 0;
}

