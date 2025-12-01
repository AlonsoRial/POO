// Ejercicio_Repaso_Examen.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Figura.h"
#include "Circulo.h"
#include "Rectangulo.h"

int main()
{
    std::cout << "Hello World!\n";
    Circulo c1(3);
    Rectangulo r1(5, 4);

    c1.info();
    r1.info();

    Figura* figura[]{ new Circulo(7), new Rectangulo(3,7)};

    for (int i = 0; i < 2; i++)
    {
        figura[i]->info();
    }



}


