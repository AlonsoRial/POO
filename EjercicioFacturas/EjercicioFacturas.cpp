// EjercicioFacturas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Lineas.h"
#include "Articulo.h"
#include "Factura.h"
#include "Cliente.h"

int main()
{
    Cliente c1("5555f", "Rosa", "Gonzales");
    
    Articulo a1(1, "tv", 399);
    Articulo a2(2, "grafica", 239);

    Factura f1(c1);


    Lineas l1(a1, 2);
    Lineas l2(a2, 1);

    f1.addLinea(l1);
    f1.addLinea(l2);

    std::cout << l1.recibirPrecio() << "\n";



}

