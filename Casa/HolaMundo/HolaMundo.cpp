// HolaMundo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <limits>

int main()
{
    
    std::cout << "Hello World!\n";
    std::string hola = "hola cara cola\n";
    std::cout << hola;
    std::cout << "Di un nombre\n";
    
    std::string nombre;
    std::cin >> nombre;
    std::cout << "Tu nombre es " << nombre <<"\n";
    std::cout << "Di tu edad\n";
    int edad;
    std::cin >> edad;
    std::cout << "Tu nombre es " << nombre << " y tu edad es " << edad <<"\n";
    std::cout << "-------------------------------\n";
    std::cout << "Ahora vamos a hacer una suma \n";
    int numero1, numero2;
    std::cout << "Di 2 numeros\n";
    std::cin >> numero1;
    std::cin >> numero2;

    std::cout << "Los numeros fueron " << numero1 << " y " << numero2 << " y la suma es " << numero1 + numero2 << "\n";
    
    std::cout << "-------------------------------\n";
    std::cout << "Ahora di 2 nombres \n";
    std::string nombre1, nombre2;
    std::cin >> nombre1;
    std::cin >> nombre2;

    std::cout << "Los nombres fueron " << nombre1 << " y " << nombre2 << "\n";
    


}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
