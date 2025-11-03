// EjercicioBanco.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Cliente.h"
#include "Cuenta.h"


int main()
{
	Cliente cliente1("4444D", "Paco", "Fiesta");
	Cuenta cuentaPaco(cliente1);
	cuentaPaco.HacerMovimiento(4,"f");
	cuentaPaco.HacerMovimiento(10, "gfdsr");

	std::cout << cuentaPaco.getSaldo();
}
