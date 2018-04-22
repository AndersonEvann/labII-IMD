/**
* @file main.cpp
* @brief Programa que calcula area, volume ou perimetro de alguns sólidos geometricos.
* @author Anderson Evangelista da Silva
*/

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

std::string::size_type sz; /** @brief necessario para conversão das strings literais para double. */

int main(int argc, char const *argv[]) {
	if(std::string(argv[1]) == "triangulo") { /** @brief convertendo argv[1] para string para fazer a comparação. LINHAS: 17, 24, 31, 38, 45, 52, 59, 66. */
		Triangulo t(std::stod(argv[2], &sz)); /** @brief convertendo de string literal para double para passar para o construtor. LINHAS: 18, 25, 32, 39, 46, 53, 60, 67. */

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
	} else { /** @brief tratamento quando os parametros passados estão incorretos. */
		std::cout << "Como executar o programa..." << std::endl;
		std::cout << "./programa nomeDaFormaGeometrica parametro(s)." << std::endl << std::endl;
		std::cout << "qtd de parametro(s): " << std::endl;
		std::cout << "triangulo=1(lado); retangulo=2(base, altura); quadrado=1(lado); circulo=1(raio);" <<std::endl;
		std::cout << "piramide=2(aresta da base, altura); cubo=1(aresta); paralelepipedo=3(aresta um, dois e tres); esfera=1(raio)." << std::endl << std::endl;
		std::cout << "OBS: não usar letras maiúsculas nem acentuação gráfica no mome dos sólidos geometricos." << std::endl;
		std::cout << "EXs: ./geometria triangulo 2" << std::endl << "./geometria paralelepipedo 2 4 6" << std::endl;
	}

	return 0;
}