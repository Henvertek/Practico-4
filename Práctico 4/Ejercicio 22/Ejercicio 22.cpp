// Ejercicio 22.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int figures(int num) {
	int fig = 1;
	if(num == 0) return 2;
	while(num >= 1) {
		num /= 10;
		fig++;
	}
	return fig;
}

void printLine(int spaces, float num) {
	for(int j = 0; j < ceil(float(spaces - figures(num)) / 2.0); j++) {
		cout << " ";
	}
	cout << num;
	for(int j = 0; j < floor(float(spaces - figures(num)) / 2.0); j++) {
		cout << " ";
	}
}

void printTable(int am[5], float prices[5]) {
	cout << "\n______________________________________________________\n";
	cout << "              |   Cantidad vendida   |\n";
	cout << " Nro. Producto|        en la         |Monto recaudado\n";
	cout << "______________|________semana________|________________\n";//14, 22, 16
	for(int i = 0; i < 5; i++) {
		cout << "       " << i+1 << "      |";
		printLine(22, am[i]);
		cout << " |";
		printLine(16, prices[i] * (float)am[i]);
		cout << endl;
	}
	float total = 0;
	for(int i = 0; i < 5; i++) {
		total += (float)am[i] * prices[i];
	}
	cout << "______________|______________________|________________\n";
	cout << "Total recaudado                            " << total << "\n\n";
}

int main() {
	float prices[5] = {2.98, 4.5, 9.98, 4.49, 6.87};
	int sales[5] = {0, 0, 0, 0, 0};
	int code, amount;
	do{
	cout << "Ingrese el Nro. de Producto seguido de la cantidad vendida en la semana o 0 0 para terminar:\n>>> ";
	cin >> code >> amount;
	if(code > 0 && code <= 5) sales[code - 1]+= amount;
	else if(code != 0) cout << "ERROR: Nro. de Producto incorrecto.\n\n";
	} while(code);
	printTable(sales, prices);
	system("pause");
  return 0;
}