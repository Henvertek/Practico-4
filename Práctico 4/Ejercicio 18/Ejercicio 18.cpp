// Ejercicio 18.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

float cToF(float degrees) {
	return (9 * degrees / 5 + 32);
}

int main()
{
	char ans;
	do {
		float input;
		cout << "Ingrese una temperatura en grados centigrados para convertr a Farenheit\n>>> ";
		cin >> input;
		cout << input << "°C = " << cToF(input) << "°F\n";
		cout << "Desea seguir convirtiendo?(y/n)\n>>> ";
		cin >> ans;
	} while(ans == 'y' || ans == 'Y');
  return 0;
}

