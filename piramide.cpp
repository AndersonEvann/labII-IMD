#include <iostream>
#include <cmath>

#include "piramide.h"

Piramide::Piramide(double ab, double h) {
	arestaDaBase = ab;
	altura = h;
}

Piramide::~Piramide() {}

double Piramide::setVolume() {
	volume = (pow(arestaDaBase, 2) * altura) / 3;
	return volume;
}

double Piramide::setArea() {
	double Abase = pow(arestaDaBase, 2);
	double Alateral;
	double a, b, c; //para calcular a area do triangulo vamos calcular pitagoras primeiro.
	b = altura;
	c = arestaDaBase / 2;
	a = sqrt(pow(b, 2) + pow(c, 2)); //pegando a aresta da altura e formando uma reta até um vertice da base podemos calcular a area(Atriangulo).
	double Atriangulo = (c * a) / 2;
	Alateral = Atriangulo * 8;
	area = Abase + Alateral;
	return area;
}

void Piramide::print() {
	std::cout << "Volume da piramide: " << volume << std::endl;
	std::cout << "Area da piramide: " << area << std::endl;
}