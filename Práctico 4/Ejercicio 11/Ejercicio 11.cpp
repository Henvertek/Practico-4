// Ejercicio 11.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand((unsigned)time(NULL));
	int input, count = 0;
	const unsigned short int N = rand() % 100;
	cout << "Se ha elegido un numero entre 0 y 100. Adivine cual es.\n";
	do {
		cout << "Ingrese su intento:\n>>> ";
		cin >> input;
		count++;
		if(input < N) cout << "Demasiado bajo...\n";
		else if(input > N) cout << "Demasiado alto!\n";
		else cout << "Correcto!\nHa adivinado en " << count << " intentos!\n";
	} while(input != N);
	system("pause");
  return 0;
}

