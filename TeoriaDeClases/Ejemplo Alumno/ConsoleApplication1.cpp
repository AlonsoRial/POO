
#include <iostream>
#include "Prueba.h"
int main()
{
    Alumno a1; // Constructor por defecto
    // Constructor con parámetros
    Alumno a2(20,"Ana", "García", 6, 0);
    // Constructor copia
    Alumno a3(a2);
    Alumno* a4= new Alumno(20, "Juan", "Sánchez", 6, 0);
    
}


