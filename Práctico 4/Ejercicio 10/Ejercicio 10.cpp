// Ejercicio 10.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	float avg = 0, input = 0;
	int count = 0;
	do {
		cout << "Ingrese un numero positivo para agregar al promedio o uno negativo para calcularlo:\n>>> ";
		cin >> input;
		if(input >= 0) {
			avg += input;
			count++;
		}
	} while(input >= 0);
	if(count > 0) cout << "El promedio es " << avg / count << endl;
	system("pause");
  return 0;
}

