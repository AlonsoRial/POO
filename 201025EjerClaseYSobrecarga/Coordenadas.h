#pragma once
class Coordenadas
{
private:
	int coordenada_x;
	int coordenada_y;



public:
	Coordenadas();
	Coordenadas(int valor_x, int valor_y);
	~Coordenadas();

	void set_coordenada_x(int nueva_coordenada_x);
	void set_coordenada_y(int nueva_coordenada_y);

	int get_coordenada_x();
	int get_coordenada_y();


	Coordenadas& operator+(const Coordenadas&);
	Coordenadas& operator-(const Coordenadas&);
	Coordenadas& operator*(const Coordenadas&);
	
	bool operator<(const Coordenadas&);
	bool operator>(const Coordenadas&);
	bool operator<=(const Coordenadas&);
	bool operator>=(const Coordenadas&);
	bool operator==(const Coordenadas&);
	bool operator!=(const Coordenadas&);

	Coordenadas& operator=(const Coordenadas&);

	
	


};

