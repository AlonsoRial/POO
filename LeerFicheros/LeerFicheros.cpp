// LeerFicheros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <fstream>

    //ifstream - Lectura
    //ofstream - Escritura
    //fstream - Lectura/Escritura


int main()
{
    
    ofstream fich("Ruta del fichero");
    if (!fich){
        //No se puede abrir el ichero
    }
    else 
    {
        //Si se puede abrir

     
        //Escribir 10 numeros

        for (int i = 1; i < 11; i++)
        {
            fich << i << std::endl;
        }

    }

}

