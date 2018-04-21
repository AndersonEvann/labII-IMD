class Esfera {
	private:
		double raio;
		double volume;
		double area;

	public:
		Esfera(double r);
		~Esfera();

		double setVolume();
		double setArea();

		void print();
};