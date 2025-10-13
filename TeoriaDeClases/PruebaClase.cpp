//Fichero .cpp
//Definiciones
#include "PruebaClase.h"
#include <iostream>

void Alumno::imprimir_datos()
{
	std::cout << "Edad " << edad;
	std::cout << "Nombre " << nombre;
}

//Sin querer he creado un metodo get xd
int Alumno::calcular_nota()
{
	return nota_media;

}

//Definir Constructor por defecto, no le dices los valores que lo va a iniciar
Alumno::Alumno():edad{ 0 /*Para que sea por defecto*/ }, nombre{}, apellido{}, nota_media{ 0 }, beca{} {}

//Defenir Contructor explicitor, le dices los valores que van a iniciar
Alumno::Alumno(int _edad, std::string _nombre, std::string _apellido, double _nota_media, bool _beca) {}

//Definir Constructor copia
Alumno::Alumno(const Alumno& a) : edad{ a.edad }, nombre{ a.nombre }, apellido{ a.apellido }, nota_media{ a.nota_media }, beca{ a.beca } {}

//Metodo Get
int Alumno::getEdad() 
{
	return edad;
}

//Metodo Set
void Alumno::setEdad(int nuevaEdad) 
{
	edad = nuevaEdad;
}
