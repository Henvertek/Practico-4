// Ejercicio 4.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int am = 0;
	for(int i = 100; i >= 0; i -= 7) {
		cout << i << " ";
		am++;
	}
	cout << endl << "Se imprimieron " << am << " numeros\n";
	system("pause");
  return 0;
}

