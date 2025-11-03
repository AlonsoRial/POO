#include "Lineas.h"
#include "Articulo.h"


Lineas::Lineas(Articulo _articulo, int _cantidad) : articulo{ _articulo }, cantidad{ _cantidad } {}


float Lineas::recibirPrecio()
{
	return articulo.getPrecio() * cantidad;
}