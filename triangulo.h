class Triangulo {
	private:
		int lado; //triangulo equilatero tem lados iguais, portanto basta um unico lado;
		int area;
		int perimetro;

	public:
		Triangulo(int l);
		~Triangulo();

		int setArea();
		int setPerimetro();

		void print();
};