// Ejercicio 10.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int avg = 0, input = 0;
	cout << "Ingrese un numero positivo para agregar al promedio o uno negativo para calcularlo.";
	cin >> input;
	avg += input;
	system("pause");
  return 0;
}

