#include "Factura.h"
#include "Cliente.h"

int Factura::num = 1;
Factura::Factura(Cliente c) : numero{ num }, cliente{c} { num++; }

void Factura::addLinea(Lineas _l) 
{
	line.push_back(_l);
}
