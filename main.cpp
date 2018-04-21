#include <iostream>
#include <string>

#include "triangulo.h"
#include "retangulo.h"
#include "quadrado.h"
#include "circulo.h"

#include "piramide.h"
#include "cubo.h"
#include "paralelepipedo.h"
#include "esfera.h"

std::string::size_type sz; // necessario para conversão das strings literais para double.

int main(int argc, char const *argv[]) {
	if(std::string(argv[1]) == "triangulo") { //convertendo argv[1] para string para fazer a comparação. LINHAS: 17, 24, 31, 38, 45, 52, 59, 66.
		Triangulo t(std::stod(argv[2], &sz)); //convertendo de string literal para double para passar para o construtor. LINHAS: 18, 25, 32, 39, 46, 53, 60, 67.

		t.setArea();
		t.setPerimetro();

		t.print();
	} else if(std::string(argv[1]) == "retangulo") {
		Retangulo r(std::stod(argv[2], &sz), std::stod(argv[3], &sz));

		r.setArea();
		r.setPerimetro();

		r.print();
	} else if(std::string(argv[1]) == "quadrado") {
		Quadrado q(std::stod(argv[2], &sz));

		q.setArea();
		q.setPerimetro();

		q.print();
	} else if(std::string(argv[1]) == "circulo") {
		Circulo c(std::stod(argv[2], &sz));

		c.setArea();
		c.setPerimetro();

		c.print();
	} else if(std::string(argv[1]) == "piramide") {
		Piramide p(std::stod(argv[2], &sz), std::stod(argv[3], &sz));

		p.setVolume();
		p.setArea();

		p.print();
	} else if(std::string(argv[1]) == "cubo") {
		Cubo c(std::stod(argv[2], &sz));

		c.setVolume();
		c.setArea();

		c.print();
	} else if(std::string(argv[1]) == "paralelepipedo") {
		Paralelepipedo p(std::stod(argv[2], &sz), std::stod(argv[3], &sz), std::stod(argv[4], &sz));

		p.setVolume();
		p.setArea();

		p.print();
	} else if(std::string(argv[1]) == "esfera") {
		Esfera e(std::stod(argv[2], &sz));

		e.setVolume();
		e.setArea();

		e.print();
	} else { // uma mensagem para tratar erros nos parametros passados.
		std::cout << "Ocorreu um erro. Algum campo invalido fora digitado." << std::endl;
	}

	return 0;
}