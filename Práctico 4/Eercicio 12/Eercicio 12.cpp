// Eercicio 12.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

unsigned const short int N = 5;

float getAverage(float data[N]) {
	float total = 0;
	for(int i = 0; i < N; i++) {
		total += data[i];
	}
	return total / (float)N;
}

int olderThan(float data[N], int threshold) {
	int count = 0;
	for(int i = 0; i < N; i++) {
		count += (data[i] > threshold);
	}
	return count;
}

int main()
{
	float heights[N];
	float ages[N];
	for(int i = 0; i < N; i++) {
		cout << "Ingrese la edad de un alumno:\n>>> ";
		cin >> ages[i];
		cout << "Ahora ingrese la altura del alumno:\n>>> ";
		cin >> heights[i];
	}
	cout << "La edad promedio de la clase es de " << getAverage(ages) << " años.\n";
	cout << "La altura promedio de la clase es de " << getAverage(heights) << "m.\n";
	cout << "Hay un total de " << olderThan(ages, 18) << " alumnos mayores de 18 años.\n";
	system("pause");
  return 0;
}

