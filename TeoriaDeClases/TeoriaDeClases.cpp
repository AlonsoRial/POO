// TeoriaDeClases.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "PruebaClase.h"
int main()
{
	//Constructor por defecto
	Alumno a1; 

	//Constructor por parametros
	Alumno a2(20, "Paco", "Fiesta", 6, true);

	//Construcotr copia
	Alumno a3(a2);
	Alumno* a4 = new Alumno(18, "", "", 6, 0);

	//std::cout << a2.getEdad();
}

