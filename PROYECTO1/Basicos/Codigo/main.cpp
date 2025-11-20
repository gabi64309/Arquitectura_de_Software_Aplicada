#include <iostream>
#include "FuncionSuma.h"
#include "FuncionResta.h"
#include "FuncionMultiplicacion.h"
#include "FuncionDivision.h"

int main() {
	int primer_numero, segundo_numero, resultado, resultadoResta, resultadoMultiplicacion, resultadoDivision;

	pedirNumero(primer_numero);
	pedirNumero(segundo_numero);

	resultado = sumar(primer_numero, segundo_numero);
	resultadoResta = restar(primer_numero, segundo_numero);
	resultadoMultiplicacion = multiplicar(primer_numero, segundo_numero);
	resultadoDivision = dividir(primer_numero, segundo_numero);

	std::cout << std::endl << "El resultado de la suma es: " << resultado << std::endl;
	std::cout << std::endl << "El resultado de la resta es: " << resultadoResta << std::endl;
	std::cout << std::endl << "El resultado de la multiplicacion es: " << resultadoMultiplicacion << std::endl;
	std::cout << std::endl << "El resultado de la division es: " << resultadoDivision << std::endl;

	return 0;
}