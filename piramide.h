class Piramide {
	private:
		double arestaDaBase;
		double altura;
		double volume;
		double area;

	public:
		Piramide(double ab, double h);
		~Piramide();

		double setVolume();
		double setArea();

		void print();
};