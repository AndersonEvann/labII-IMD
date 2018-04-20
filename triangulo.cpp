#include <iostream>

#include "triangulo.h"

Triangulo::Triangulo(int l) {
	lado = l;
}

Triangulo::~Triangulo() {}

int Triangulo::setArea() {
	area = (lado * lado) / 2;
	return area;
}

int Triangulo::setPerimetro() {
	perimetro = 3 * lado;
	return perimetro;
}

void Triangulo::print() {
	std::cout << "Area do triangulo: " << area << std::endl;
	std::cout << "Perimetro do triangulo: " << perimetro << std::endl;
}