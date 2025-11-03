#pragma once
#include "Articulo.h"
class Lineas
{
private:
	Articulo articulo;
	int cantidad;
	

public:
	Lineas(Articulo, int);

	float recibirPrecio();

};

