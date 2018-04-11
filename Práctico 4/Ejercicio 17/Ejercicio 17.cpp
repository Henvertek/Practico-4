// Ejercicio 17.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

#define COL 5
#define NUMS 100

using namespace std;

int main()
{
	for(int i = 0; i < NUMS / COL; i++) {
		for(int j = 1; j <= COL; j++) {
			int disp = i * COL + j; cout << disp << "  "; if(disp < 10) cout << " ";
		}
		cout << endl;
	}
	system("pause");
  return 0;
}

