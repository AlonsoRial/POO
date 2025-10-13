#ifndef EJERCICIOS_H
#define EJERCICIOS_H

#include <string>
#include <cmath>
#include <memory>
#include <vector>

using std::string;

class Moneda_ej{
protected:
	int Denominacion;
	string Nombre;

	bool check_code(string nombre) {
		return (nombre == Nombre);
	}

public:
	Moneda_ej(int cantidad, string iso) {
		Denominacion = (cantidad > 1) ? cantidad : 0;
		Nombre = (iso.length() == 3) ? iso :
			(iso.length() > 3) ? iso.substr(0, 3) :
			(iso.length() == 2) ? iso + " " :
			(iso.length() == 1) ? iso + "  " :
			"NULL";
	}

	int get_amount() {
		return Denominacion;
	}

	string get_name() {
		return Nombre;
	}

	string to_string() {
		return  std::to_string(Denominacion) + " " + Nombre;
	}


	bool sumar(const Moneda_ej otra) {
		if (Nombre == otra.Nombre) {
			Denominacion += otra.Denominacion ;
			return 1;
		}

		return 0;
	}



	~Moneda_ej();
};

// aqui declaras codigo, lo puedes hacer fuera
Moneda_ej::~Moneda_ej(){}


class Circulo_ej
{
public:
	Circulo_ej(int rad = 10) : radio((rad > 0) ? rad : 10) {}

	double get_area() {
		double area = radio * radio;
		area = area * 3.1415 ;
		return area;
	}

	~Circulo_ej();


private:
	int radio;

};



Circulo_ej::~Circulo_ej()
{
}



class Vectores_ej
{
public:
	Vectores_ej(int length);
	~Vectores_ej();

	void AddCaracter(char new_char)
	{
		vec.push_back(new_char);
	}

	void AddCaracter(string str) {
		int len = str.length();
		const char * c_str = str.c_str();

		for (int i = 0; i < len; i++)
		{
			vec.push_back(c_str[i]);
		}

	}



private:
	std::vector<char> vec;
};

Vectores_ej::Vectores_ej(int length)
{
	vec.resize(length);
}



Vectores_ej::~Vectores_ej()
{
}





#endif