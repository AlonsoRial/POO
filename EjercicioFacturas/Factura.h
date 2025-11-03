#pragma once
#include "Cliente.h"
#include <vector>
#include "Articulo.h"
#include "Lineas.h"

struct otra_linea
{
	Articulo articulo;
	int cantidad;
};

class Factura
{


private:
	int numero;
	static int num;
	Cliente cliente;
	std::vector<Lineas> line;

public:
	Factura( Cliente);
	void addLinea(Lineas);

};

