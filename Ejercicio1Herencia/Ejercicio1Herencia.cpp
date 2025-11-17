// Ejercicio1Herencia.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Coche.h"
#include "Vehiculo.h"
#include "Moto.h"
int main()
{
	Coche c[2];
	Moto m[3];


	for (int i = 0; i < 2; i++)
	{
		c[i] = Coche{ i+5,5, i+66 };
	}

	for (int i = 0; i < 3; i++)
	{
		m[i] = Moto{ i+1,6,i+3 };
	}



	Vehiculo vehiculos[5] = {c[0], c[1], m[0], m[1], m[2]};

	for (int i = 0; i < 5; i++)
	{
		std::cout<<vehiculos[i].To_String();
	}


}
