#include "Math.h"
#include <math.h>;

void Math::matrix(int r1, int c1, int r2, int c2)
{
	int matriz1[10][10];
	int matriz2[10][10];
	int matriz3[10][10];

	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c1; j++) {
			cout << "Ingrese el elmento "<< (i + 1) << "," << (j + 1) <<" de la primera matriz: ";
			cin >> matriz1[i][j];
		}
	}
	cout << endl;
	for (int i = 0; i < r2; i++) {
		for (int j = 0; j < c2; j++) {
			cout << "Ingrese el elmento " << (i + 1) << "," << (j + 1) << " de la segunda matriz: ";
			cin >> matriz2[i][j];
		}
	}

	for (int i = 0; i < r1; i++) {
		for (int j = 0; j <c2; j++)
		{
			matriz3[i][j] = 0;
		}
	}

	// Multiplicacion
	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c2; j++)
		{
			for (int z = 0; z < c1; z++) {
				matriz3[i][j] += matriz1[i][z] * matriz2[z][j];
			}
		}
	}

	cout << "El resultado es...\n";

	for(int i = 0; i < r1; i++) {
		for (int j = 0; j < c2; j++) {
			cout << matriz3[i][j];
		}
		cout << endl;
	}
}

void Math::calSeno(float seno)
{
	int factorial;
	float resultado;
	seno = seno * pi / 180;

	resultado = 0;

	for (int i = 0; i < 5; i++) {
		factorial = 1;
		for (int j = 1; j <= (2 * i + 1); j++)
		{
			factorial *= j;
		}
		resultado += pow(-1, i) * pow(seno, 2 * i + 1) / factorial;
	}
	cout << "El seno es: " << resultado << endl;;
}

void Math::calCoseno(float cos)
{
	int factorial;
	float resultado;
	cos = cos * pi / 180;

	resultado = 0;

	for (int i = 0; i < 5; i++) {
		factorial = 1;
		for (int j = 1; j <= (2 * i); j++)
		{
			factorial *= j;
		}
		resultado += pow(-1, i) * pow(cos, 2 * i) / factorial;
	}
	cout << "El coseno es: " << resultado << endl;;
}

void Math::calTangente(float tang)
{
	tang = tang * pi / 180;
	cout << "La tangente es: " << tan(tang) << endl;
}
