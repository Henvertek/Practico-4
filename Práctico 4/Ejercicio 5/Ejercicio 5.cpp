// Ejercicio 5.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int N, amount = 0;
	cout << "Ingrese un numero positivo:\n>>> ";
	cin >> N;
	for(int i = 0; i < 2; i++) {
		for(int n = 1 - i; n <= N; n += 2) {
			cout << n << " ";
			amount++;
		}
		cout << "\n\nSe imprimieron " << amount << " numeros.\n\n";
		amount = 0;
	}
	system("pause");
  return 0;
}