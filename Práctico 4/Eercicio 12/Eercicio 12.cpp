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

int moreThan(float data[N], float threshold) {
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
	cout << "Hay un total de " << moreThan(ages, 18) << " alumnos mayores de 18 años.\n";
	cout << "Hay un total de " << moreThan(heights, 1.75) << " alumnos que miden más de 1.75.\n";
	system("pause");
  return 0;
}

