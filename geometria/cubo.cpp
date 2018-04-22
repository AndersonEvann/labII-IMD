#include <iostream>
#include <cmath>

#include "cubo.h"

Cubo::Cubo(double a) {
	aresta = a;
}

Cubo::~Cubo() {}

double Cubo::setVolume() {
	volume = pow(aresta, 3);
	return volume;
}

double Cubo::setArea() {
	area = (pow(aresta, 2)) * 6;
	return area;
}

void Cubo::print() {
	std::cout << "Volume do cubo: " << volume << std::endl;
	std::cout << "Area do cubo: " << area << std::endl;
}