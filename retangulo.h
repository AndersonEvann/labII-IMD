class Retangulo {
	private:
		double base;
		double altura;
		double area;
		double perimetro;

	public:
		Retangulo(double b, double h);
		~Retangulo();

		double setArea();
		double setPerimetro();

		void print();
};