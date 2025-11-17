#pragma once
#include "Vehiculo.h"
#include <iostream>
#include <string>
class Moto : public Vehiculo
{
private:
	int n_plazas;

public:
	Moto();
	Moto(int _n_ruedas, float _velocidad, int _n_plazas) : Vehiculo{ _n_ruedas, _velocidad }, n_plazas{ _n_plazas } {}

	std::string To_String()
	{
		return "El coche tiene " + std::to_string(n_ruedas) + " ruedas, " + std::to_string(velocidad) + " velocidad, " + std::to_string(n_plazas) + " puertas \n";
	}
};

