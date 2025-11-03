#include <iostream>
#include "Cuenta.h"

int Cuenta :: num=1;
Cuenta::Cuenta(Cliente t) : numero{ num }, titular{ t }, saldo{ 0 } {
	num++;
	}
void Cuenta::nuevoMov(std::string c, double cant) {
	movimientos.push_back(Movimiento(c,cant));
	saldo += cant;
}
void Cuenta::imprimirSaldo() {
	std::cout << "El saldo actual de la cuenta número " << numero << " es " << saldo<<std::endl;
}