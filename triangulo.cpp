#include <iostream>

#include "triangulo.h"

Triangulo::Triangulo(double l) {
	lado = l;
}

Triangulo::~Triangulo() {}

double Triangulo::setArea() {
	area = (lado * lado) / 2;
	return area;
}

double Triangulo::setPerimetro() {
	perimetro = 3 * lado;
	return perimetro;
}

void Triangulo::print() {
	std::cout << "Area do triangulo: " << area << std::endl;
	std::cout << "Perimetro do triangulo: " << perimetro << std::endl;
}