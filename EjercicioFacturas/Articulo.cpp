#include "Articulo.h"
#include <iostream>

Articulo::Articulo(int _c, std::string _d, float _p) : codigo{ _c }, denominacion{ _d }, precio{_p} {}

float Articulo::getPrecio()
{
	return precio;
}
