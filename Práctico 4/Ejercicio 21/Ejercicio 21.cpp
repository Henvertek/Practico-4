// Ejercicio 21.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main() {
	float total = 0;
	int amount = 0;
		float curr;
	do{
		cout << "Ingrese un numero para agregar al promedio, o un 0 para calcular:\n>>> ";
		cin >> curr;
		total += curr;
		amount++;
	} while(curr);
	cout << "El promedio final es de " << total / (float)amount << endl;
	system("pause");
	return 0;
}

