// Ejercicio 14.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

#define ARS 0
#define USD 1
#define BRL 2
#define EUR 3

using namespace std;

void printMenu() {
	cout << " _____________________________________________________\n";
	cout << "|===============| CONVERSOR DE MONEDAS |==============|\n";
	cout << "|                                                     |\n";
	cout << "|                  1. Pesos a Dolares                 |\n";
	cout << "|                  2. Pesos a Reales                  |\n";
	cout << "|                  3. Pesos a Euros                   |\n";
	cout << "|                  4. Dolares a Pesos                 |\n";
	cout << "|                  5. Reales a Pesos                  |\n";
	cout << "|                  6. Euros a Pesos                   |\n";
	cout << "|                  7. Salir                           |\n";
	cout << "|_____________________________________________________|\n\n>>> ";
}


const double curr[4] = {1, 20.16, 4.13, 25};
const char names[4][8] = {"Pesos", "Dolares", "Reales", "Euros"};

void convert(int from, int to) {
	double money;
	cout << "\nIngrese la cantidad de ";
	cout << names[from] << " a convertir a " << names[to] << ".\n>>> ";
	cin >> money;
	cout << endl << money << " " << names[from] << " equivale";
	if(money != 1) cout << "n";
	cout << " a " << (money * curr[from]) / curr[to] << " " << names[to] << ".\n\n";
}

int main() {
	int choice;
	do {
		printMenu();
		cin >> choice;
		switch(choice) {
			case 1:
				convert(ARS, USD);//ARS TO USD
				break;
			case 2:
				convert(ARS, BRL);//ARS TO BRL
				break;
			case 3:
				convert(ARS, EUR);//ARS TO EUR
				break;
			case 4:
				convert(USD, ARS);//USD TO ARS
				break;
			case 5:
				convert(BRL, ARS);//BRL TO ARS
				break;
			case 6:
				convert(EUR, ARS);//EUR TO ARS
				break;
			case 7:
				break;
			default:
				cout << "Seleccion invalida.\n\n";
		}
	} while(choice != 7);
	cout << "Cerrando...";
	return 0;
}