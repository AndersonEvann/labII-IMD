class Triangulo {
	private:
		double lado; /** @brief triangulo equilatero tem lados iguais, portanto basta um unico lado. */
		double area;
		double perimetro;

	public:
		Triangulo(double l);
		~Triangulo();

		double setArea();
		double setPerimetro();

		void print();
};