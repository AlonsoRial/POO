#include "Persona.h"


Persona::Persona(int e) 
{
	if (e >= 0)
	{
		edad = e;
	}

}


int Persona::get_edad()
{
	return edad;
}

void Persona::set_edad(int nueva_edad) 
{
	edad = nueva_edad;

}


Persona& Persona::operator+(const Persona& p1) 
{
	return *(new Persona(edad + p1.edad));
}