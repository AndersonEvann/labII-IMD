geometria: triangulo.o retangulo.o quadrado.o circulo.o piramide.o cubo.o paralelepipedo.o esfera.o main.o
	g++ -o geometria triangulo.o retangulo.o quadrado.o circulo.o piramide.o cubo.o paralelepipedo.o esfera.o main.o
main.o:
	g++ -g -Wall -pedantic -std=c++11 -c main.cpp
triangulo.o: triangulo.h
	g++ -g -Wall -pedantic -std=c++11 -c triangulo.cpp
retangulo.o: retangulo.h
	g++ -g -Wall -pedantic -std=c++11 -c retangulo.cpp
quadrado.o: quadrado.h
	g++ -g -Wall -pedantic -std=c++11 -c quadrado.cpp
circulo.o: circulo.h
	g++ -g -Wall -pedantic -std=c++11 -c circulo.cpp
piramide.o: piramide.h
	g++ -g -Wall -pedantic -std=c++11 -c piramide.cpp
cubo.o: cubo.h
	g++ -g -Wall -pedantic -std=c++11 -c cubo.cpp
paralelepipedo.o: paralelepipedo.h
	g++ -g -Wall -pedantic -std=c++11 -c paralelepipedo.cpp
esfera.o: esfera.h
	g++ -g -Wall -pedantic -std=c++11 -c esfera.cpp
clean:
	rm -f core geometria triangulo.o retangulo.o quadrado.o circulo.o piramide.o cubo.o paralelepipedo.o esfera.o main.o