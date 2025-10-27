// RepasoSobrecarga.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Persona.h"

int main()
{
    Persona p1(3);
    Persona p2(6);


    Persona p3 =p1 + p2;

    std::cout << p3.get_edad();

}

