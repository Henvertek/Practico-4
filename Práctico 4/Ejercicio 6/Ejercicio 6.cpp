// Ejercicio 6.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int total = 1;
	for(int i = 1; i <= 10; i ++) {
		total *=  i * 2 - 1;
	}
	cout << total << endl;
	system("pause");
  return 0;
}