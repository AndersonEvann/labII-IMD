#include <iostream>

#include "retangulo.h"

Retangulo::Retangulo(double b, double h) {
	base = b;
	altura = h;
}

Retangulo::~Retangulo() {}

double Retangulo::setArea() {
	area = base * altura;
	return area;
}

double Retangulo::setPerimetro() {
	perimetro = (base + altura) * 2;
	return perimetro;
}

void Retangulo::print() {
	std::cout << "Area do retangulo: " << area << std::endl;
	std::cout << "Perimetro do retangulo: " << perimetro << std::endl;
}