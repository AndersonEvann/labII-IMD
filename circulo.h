#define PI 3.1415

class Circulo {
	private:
		double raio;
		double area;
		double perimetro;

	public:
		Circulo(double r);
		~Circulo();

		double setArea();
		double setPerimetro();

		void print();
};