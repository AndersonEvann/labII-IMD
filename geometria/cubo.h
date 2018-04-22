class Cubo {
	private:
		double aresta;
		double volume;
		double area;

	public:
		Cubo(double a);
		~Cubo();

		double setVolume();
		double setArea();

		void print();
};