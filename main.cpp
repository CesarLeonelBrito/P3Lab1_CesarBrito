#include <iostream>
#include <math.h>

using namespace std;

int menu();
void ejercicio1(int);
void ejercicio2(int);

int main() {

	int opcion = 0;
	while((opcion = menu()) != 3) {
		if(opcion == 1) {
			int n = 0;
			while(n < 1) {
				cout << "Ingrese un n: ";
				cin >> n;
			}
			ejercicio1(n);
		}

		else {
			if(opcion == 2) {
				int x = 0;
				cout << "Ingrese un x: ";
				cin >> x;
				ejercicio2(x);
			}
		}
	}

	return 0;
}

int menu() {

	int opcionMenu = 0;
	cout << "Menu:\n"
	     << "1) Ejercicio 1\n"
	     << "2) Ejercicio 2\n"
	     << "3) Salir" << endl;
	cin >> opcionMenu;

	return opcionMenu;
}

void ejercicio1(int n) {

	double resultado = 0;
	for(int i = 1; i <= n; i++) {
		double numerador = 2.0 * i - 1.0;
		double denominador = i * (i + 1.0);
		resultado += numerador / denominador;
	}
	cout << "S(" << n << ") = " << resultado << endl;

}

void ejercicio2(int x) {

	double resultado = 0.0;
	double denominador = 1.0 + exp(x);
	resultado = 1 / denominador;
	cout << "f(" << x << ") = " << resultado << endl;

}