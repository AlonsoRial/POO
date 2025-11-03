#include "Movimiento.h"
#include <iostream>


Movimiento::Movimiento(float _cantidad, std::string _concepto) : cantidad{ _cantidad }, concepto{_concepto} {};

float Movimiento::getCantidad() 
{
	return cantidad;
}

std::string Movimiento::getConcepto() 
{
	return concepto;
}
