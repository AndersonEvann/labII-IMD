#include <iostream>
#include <cmath>

#include "esfera.h"

#define PI 3.1415

Esfera::Esfera(double r) {
	raio = r;
}

Esfera::~Esfera() {}

double Esfera::setVolume() {
	volume = (pow(raio, 3)) * PI * 4 / 3;
	return volume;
}

double Esfera::setArea() {
	area = (pow(raio, 2)) * 4 * PI; 
	return area;
}

void Esfera::print() {
	std::cout << "Volume da esfera: " << volume << std::endl;
	std::cout << "Area da esfera: " << area << std::endl;
}