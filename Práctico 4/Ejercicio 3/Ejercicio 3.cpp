// Ejercicio 3.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	for(int i = 100; i >= 0; i--) {
		cout << i << " ";
	}
	cout << endl;
	system("pause");
  return 0;
}