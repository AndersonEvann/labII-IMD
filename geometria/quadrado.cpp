#include <iostream>

#include "quadrado.h"

Quadrado::Quadrado(double l) {
	lado = l;
}

Quadrado::~Quadrado() {}

double Quadrado::setArea() {
	area = lado * lado;
	return area;
}

double Quadrado::setPerimetro() {
	perimetro = 4 * lado;
	return perimetro;
}

void Quadrado::print() {
	std::cout << "Area do quadrado: " << area << std::endl;
	std::cout << "Perimetro do quadrado: " << perimetro << std::endl;
}