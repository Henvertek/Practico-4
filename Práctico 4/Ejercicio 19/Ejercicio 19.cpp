// Ejercicio 19.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int A, B;
	cout << "Ingrese el inicio del rango:\n>>> ";
	cin >> A;
	do {
		cout << "Ingrese el final del rango:\n>>> ";
		cin >> B;
		if(B - A < 100) cout << "El rango es menor a 100.\n\n";
	} while(B - A < 100);
	cout << endl;
	for(int group = 1; A <= B; group++){
		cout << "Grupo N* " << group << ":\n";
		for(int i = 0; i < 3; i++) {
			for(int j = 0; j < 5; j++) {
				if(A <= B) cout << A++ << "  ";
				else break;
			}
			if(A <= B)cout << endl;
			else break;
		}
		cout << endl;
	}
	cout << endl;
	system("pause");
  return 0;
}