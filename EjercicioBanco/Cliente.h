#pragma once
#include<iostream>
class Cliente
{

private:
	std::string dni;
	std::string nombre;
	std::string apellido;

public:

	Cliente(std::string dni, std::string nombre, std::string apellido);

	std::string getDNI();
	std::string getNombre();
	std::string getApellido();

	

};

