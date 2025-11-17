#pragma once
#include <iostream>
#include <string>
class Vehiculo
{
protected:
	int n_ruedas;
	float velocidad;

public:
	Vehiculo();
	Vehiculo(int _n_ruedas, float _velocidad) : n_ruedas{ _n_ruedas }, velocidad{_velocidad} {}

	std::string To_String()
	{
		return "El Vehiculo tiene " + std::to_string(n_ruedas) + " ruedas, " + std::to_string(velocidad) + " velocidad \n " ;
	}

};

