// Ejercicio 8.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int largest = -1;
	cout << "Generando 200 numeros...\nPor favor espere...\n\n";
	for(int i = 0; i < 200; i++) {
		int curr = rand();
		cout << curr << endl;
		if(curr > largest) largest = curr;
	}
	cout << "Listo!\nEl numero mas grande generado fue el " << largest << endl;
	system("pause");
  return 0;
}

