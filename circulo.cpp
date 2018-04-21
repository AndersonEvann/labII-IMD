#include <iostream>

#include "circulo.h"

Circulo::Circulo(double r) {
	raio = r;
}

Circulo::~Circulo() {}

double Circulo::setArea() {
	area = (raio * raio) * PI;
	return area;
}

double Circulo::setPerimetro() {
	perimetro = 2 * raio * PI;
	return perimetro;
}

void Circulo::print() {
	std::cout << "Area do circulo: " << area << std::endl;
	std::cout << "Comprimento da circunferencia: " << perimetro << std::endl;
}