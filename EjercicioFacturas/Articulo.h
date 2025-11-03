#pragma once
#include <iostream>
class Articulo
{
private:
	int codigo;
	std::string denominacion;
	float precio;

public:

	Articulo(int, std::string, float);

	float getPrecio();

};

