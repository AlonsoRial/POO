#pragma once
#include "Vehiculo.h"
#include <iostream>
#include <string>
class Coche :public Vehiculo
{
private:
	int n_puertas;

public:
	Coche();
	Coche(int _n_ruedas, float _velocidad, int _n_puertas) : Vehiculo{ _n_ruedas, _velocidad }, n_puertas{_n_puertas} {}

	std::string To_String() 
	{
		return "El coche tiene " + std::to_string(n_ruedas) + " ruedas, " + std::to_string(velocidad) + " velocidad, " + std::to_string(n_puertas) + " puertas \n";
	}

};

