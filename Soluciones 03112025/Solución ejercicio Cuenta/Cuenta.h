#pragma once
#include <vector>
#include "Cliente.h"
#include "Movimiento.h"
class Cuenta
{
	
private:
	int numero; // Número de cuenta
	static int num; // Controlar el número correlativo
	Cliente titular;
	double saldo;
	std::vector<Movimiento> movimientos;
public:

	Cuenta(Cliente);
	void nuevoMov(std::string,double);
	void imprimirSaldo()
};


