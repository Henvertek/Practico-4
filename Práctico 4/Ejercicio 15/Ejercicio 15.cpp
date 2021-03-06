// Ejercicio 15.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void printMenu() {
	cout << " _______________________________________________\n";
	cout << "|================| CALCULADORA |================|\n";
	cout << "|                                               |\n";
	cout << "|             +. Para sumar                     |\n";
	cout << "|             -. Para restar                    |\n";
	cout << "|             *. Para multiplicar               |\n";
	cout << "|             /. Para dividir                   |\n";
	cout << "|             %. Para calcular resto            |\n";
	cout << "|             #. Para salir                     |\n";
	cout << "|_______________________________________________|\n\n>>> ";
}

int main() {
	char input;

	double a, b;

	do {
		cout << "\nIngrese el primer numero\n>>> ";
		cin >> a;
		cout << "\nIngrese el segundo numero\n>>> ";
		cin >> b;
		printMenu();
		cin >> input;
		cout << endl;
		switch(input) {
			case '+':
				cout << a + b;
				break;
			case '-':
				cout << a - b;
				break;
			case '*':
				cout << a * b;
				break;
			case '/':
				if(b != 0)
					cout << a / b;
				else cout << "Debera ingresar un segundo numero que no sea 0. Saliendo...";
				break;
			case '%':
				if(b != 0)
					cout << (int)a % (int)b;
				else cout << "Debera ingresar un segundo numero que no sea 0. Saliendo...";
				break;
			case '#':
				break;
			default:
				cout << "Opcion invalida.\n\n";
		}
		cout << endl;
	} while(input != '#');
	cout << "Saliendo...\n";
	return 0;
}