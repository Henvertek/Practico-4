// Ejercicio 23.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	char choice;
	do {
		cout << "Ingrese la letra del dibujo (a/b/c) o x para salir:\n>>> ";
		cin >> choice;
		switch(choice) {
			case 'a':
				for(int i = 0; i < 5; i++) {
					for(int j = 0; j < i + 1; j++) {
						cout << "*";
					}
					cout << endl;
				}
				break;
			case 'b':
				for(int i = 0; i < 5; i++) {
					for(int j = 0; j < 9 / 2 - i; j++) {
						cout << " ";
					}
					for(int j = 0; j < i*2 + 1; j++) {
						cout << "*";
					}
					cout << endl;
				}
				break;
			case 'c':
				for(int i = 4; i >= 0; i--) {
					for(int j = 0; j < 9 / 2 - i; j++) {
						cout << " ";
					}
					for(int j = 0; j < i * 2 + 1; j++) {
						cout << "*";
					}
					cout << endl;
				}
				break;
			case 'x':
				cout << "Saliendo...\n";
				break;
			default:
				cout << "Letra no valida.\n\n";
		}
	}while(choice != 'x');
  return 0;
}