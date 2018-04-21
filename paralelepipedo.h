class Paralelepipedo {
	private:
		double aresta1, aresta2, aresta3;
		double volume;
		double area;

	public:
		Paralelepipedo(double a1, double a2, double a3);
		~Paralelepipedo();

		double setVolume();
		double setArea();

		void print();
};