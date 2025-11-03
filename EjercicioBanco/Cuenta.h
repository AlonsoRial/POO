#pragma once
#include "Cliente.h"
#include "Movimiento.h"
#include <vector>
class Cuenta
{

private:
	int numero;
	static int num;
	Cliente cliente;
	//Movimiento movimiento;
	std::vector<Movimiento> movimientos;
	float saldo;


public:
	Cuenta(Cliente);

	void HacerMovimiento(float, std::string);

	float getSaldo();
};

