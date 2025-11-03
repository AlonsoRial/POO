#include "Cuenta.h"
#include "Movimiento.h"
#include "Cliente.h"
#include <iostream>
#include <vector>

int Cuenta::num = 1;
Cuenta::Cuenta(Cliente t) : numero{ num }, cliente{ t }, saldo{ 0 }
{
	num++;
}

void Cuenta::HacerMovimiento(float can, std::string c) 
{
	movimientos.push_back(Movimiento(can, c));
	saldo += can;
}

float Cuenta::getSaldo() 
{
	return saldo;
}
