// prueba.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <limits>

// #include <...> incluye libreria propia de C++

// #include "MiPropiaLibreria" cualquier otra libreria.

// #pragma once Incluir solo una vez la librería 
#pragma once

//Si te quieres ahorras el std, pero es mala practica
//using namespace std;


int main()
{
    std::cout << "Hello World!\n";

    // std::cout escribe por pantalla
    // std::cin lee pantalla
    // getline lee líneas completas con espacios
    // std::ws consume el salto de línea

    //EL std es la libreria estander, si no lo pones al principio, lo basico no funciona

    std::cout << "Nombre ";
    std::string nombre;
    std::getline(std::cin >> std::ws, nombre);

    std::cout << "Edad:";
    int edad = 0;
    
    while (!(std::cin >> edad))
    {
        std::cin.clear();
        std::cin.ignore();
    }

}

//Son clases como las de Java o C#
struct MyStruct
{
    bool activo;
    std::string nombre;
};



// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
