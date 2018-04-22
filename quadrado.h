class Quadrado {
	private:
		double lado; /** @brief so precisa de um lado pois o quadrado tem os 4 lados iguais. */
		double area;
		double perimetro;

	public:
		Quadrado(double l);
		~Quadrado();

		double setArea();
		double setPerimetro();

		void print();
};