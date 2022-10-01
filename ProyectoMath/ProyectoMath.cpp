// ProyectoMath.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Math.h"

using namespace std;

int main()
{
	int op, columns1, rows1, rows2, columns2, seno, cos, tan;
	Math * math = new Math();

	cout << "Bienvenido"<< endl;
	do {
		cout << "Que desea realizar?"<<endl;
		cout << "1. Calcular seno" << endl;
		cout << "2. Calcular coseno" << endl;
		cout << "3. Calcular tangente" << endl;
		cout << "4. Multiplicar matrices" << endl;
		cout << "5. Salir" << endl;
		cout << "Digite su opcion: ";
		cin >> op;

		switch (op)
		{
			case 1:
				cout << "Digite un angulo (en grados): ";
				cin >> seno;
				math->calSen(seno);
				break;
			case 2:
				cout << "Digite un angulo (en grados): ";
				cin >> cos;
				math->calCos(cos);
				break;
			case 3: 
				cout << "Digite un angulo (en grados): ";
				cin >> cos;
				math->calTan(cos);
				break;
			case 4: 
					cout << "Ingrese el numero de filas de la matriz " << 1<<" : ";
					cin >> rows1;
					cout << "Ingrese el numero de columnas de la matriz " << 1 << " : ";
					cin >> columns1;
					cout << "Ingrese el numero de filas de la matriz " << 2 << " : ";
					cin >> rows2;
					cout << "Ingrese el numero de columnas de la matriz " << 2 << " : ";
					cin >> columns2;

					if (columns1 == rows2) {
						math->matrix(rows1, columns1, rows2, columns2);
					}
					else {
						cout << "Esta matriz no se puede multiplicar\n";
					}
			
				break;
			case 5:
				break;
		default:
			cout << "la opcion invalida";
			break;
		}

	} while (op !=5);
}