// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Cliente.h"
#include "Cuenta.h"
int main()
{
    
    Cliente cli("12345678A", "Antonio","Martínez");
    Cuenta cuenta1(cli);
    Cuenta cuenta2(cli);
    cuenta1.nuevoMov("Hipoteca",-700);
    cuenta1.nuevoMov("Luz", -50);
    cuenta1.nuevoMov("Nómina", 1700);
    cuenta2.nuevoMov("Viaje", -1000);
    cuenta2.nuevoMov("Compra", -10);
    cuenta2.nuevoMov("Gym", -30);
    cuenta1.imprimirSaldo();
    cuenta2.imprimirSaldo();




  
}


