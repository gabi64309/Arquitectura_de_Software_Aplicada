#include <iostream>

int sumar(int a, int b) {
	int respuesta;

	respuesta = a + b;

	return respuesta;
}

void pedirNumero(int& numero) {
	std::cout << "Ingresa un numero: ";
	std::cin >> numero;
}