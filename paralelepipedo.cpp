#include <iostream>

#include "paralelepipedo.h"

Paralelepipedo::Paralelepipedo(double a1, double a2, double a3) {
	aresta1 = a1;
	aresta2 = a2;
	aresta3 = a3;
}

Paralelepipedo::~Paralelepipedo() {}

double Paralelepipedo::setVolume() {
	volume = aresta1 * aresta2 * aresta3;
	return volume;
}

double Paralelepipedo::setArea() {
	area = (2 * aresta1 * aresta2) + (2 * aresta1 * aresta3) + (2 * aresta2 * aresta3);
	return area;
}

void Paralelepipedo::print() {
	std::cout << "Volume do paralelepipedo: " << volume << std::endl;
	std::cout << "Area do paralelepipedo: " << area << std::endl;
}