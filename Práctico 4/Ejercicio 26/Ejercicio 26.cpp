// Ejercicio 26.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

int getCol(int n) {
	if(n % 3 == 0) return 3;
	else return n % 3;
}

int getColor(int n) {
	switch(n) {
		case 0:
			return 2;
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:
		case 12:
		case 14:
		case 16:
		case 18:
		case 21:
		case 23:
		case 25:
		case 27:
		case 30:
		case 32:
		case 34:
		case 36:
			return 1;
			break;
		default:
			return 0;
	}
}

int getDozen(int n) {
	return ceil((float)n / 12.0);
}

int main()
{
	srand((unsigned)time(NULL));
	char ans;
	int numBet;
	do {
		do {
			cout << "Elija su numero:\n>>> ";
			cin >> numBet;
			if(numBet < 0 || numBet > 36)cout << "El numero debe ser entre el 0 y el 36\n\n";
		} while(numBet < 0 || numBet > 36);
		int num = rand() % 36;
		if(num % 2 == 0) cout << "\nPar: ";
		else cout << "Impar: ";
		switch(getColor(num)) {
			case 0:
				cout << num << " el negro\n";
				break;
			case 1:
				cout << num <<" el rojo\n";
			  break;
			default:
				cout << "0 el verde\n";
		}
		if(num > 0) {
			cout << "docena " << getDozen(num) << endl;
			cout << "columna " << getCol(num) << endl;
		}
		cout << endl;
		if(numBet == num) {
			cout << "* * * * * Ha acertado! * * * * *\n";
		}
		else {
			if(getCol(num) == getCol(numBet)) {
				cout << "Estan en la misma columna!\n";
			}
			if(getDozen(num) == getDozen(numBet)) {
				cout << "Son de la misma docena!\n";
			}
			if(getColor(num) == getColor(numBet)) {
				cout << "Son del mismo color!\n";
			}
			else if(num % 2 == numBet % 2) {
				if(num % 2 == 0)cout << "Ambos son pares!\n";
				else cout << "Ambos son impares!\n";
			}
		}

		cout << "\nDesea girar la ruletanuevamente?(s/n)\n>>> ";
		cin >> ans;
	} while (ans != 'n');
	cout << "Saliendo...";
  return 0;
}