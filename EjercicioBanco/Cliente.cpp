#include "Cliente.h"
#include <iostream>


Cliente::Cliente(const std::string _dni, std::string _nombre, std::string _apellido) : dni{ _dni }, nombre{ _nombre }, apellido{_apellido} {}

std::string Cliente::getDNI() 
{
	return dni;
}

std::string Cliente::getNombre() 
{
	return nombre;
}

std::string Cliente::getApellido()
{
	return apellido;
}