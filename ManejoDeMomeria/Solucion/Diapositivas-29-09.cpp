#include <iostream>

int main()
{
    double a = 1.5;
    double* p1, * p2, * p3;
    std::cout << "Valor de la variable: " << a<<std::endl; 
    std::cout << "Dirección de memoria de la variable: " << &a << std::endl;
    p1 = &a;
    p2 = new double;
    *p2 = *p1; // Asignar el valor al que apunta p1 al espacio de memoria donde
                // apunta p2
    p2 = p1; // Los dos punteros apuntan al mismo espacio de memoria
    std::cout << "Valor de la variable: " << *p2 << std::endl;
    std::cout << "Dirección de memoria de la variable: " << p2 << std::endl;
    p3 = new double;
    *p3 = 123.45;
    delete p2;
    delete p3;

    int x = 5;
    int* punt1 = NULL; // punt1 no apunta a nada
    int* punt2 = &x; // punt2 apunta a la variable x
    punt1 = punt2; // ambos apuntan a la variable x
    *punt1 = 8; // Cambia el valor de x
    x = 9; // Cambia el valor de x
    *punt2 = 5;// Cambia el valor de x
    if (punt1 == punt2) {} // Comparar si apuntan a la misma posición de memoria
    if (*punt1 == *punt2) {} // Comparar si apuntan al mismo valor

    // typedef tipo_dato nombre_tipo
    typedef const int* ptr; // Puntero a constante
    ptr punt; // El tipo de punt es const int*

    int* array_int = new int[100];
    array_int++;
    array_int--;
    punt2 - punt1;

    int** m;
    m = new int* [4]; // Reserva de memoria para la primera dimension (4 filas)
    for (int j = 0; j < 4; j++) { // Reserva de memoria para cada uno de los elementos de la segunda dimension (2 columnas)
        m[j] = new int[2]; // Por cada fila se reservan dos columnas
    }

    for (int j = 0; j < 4; j++) { //Se libera el espacio reservado para las columnas
        delete[] m[j];
    }
        delete[] m; //Se libera el espacio reservado para las filas

}

