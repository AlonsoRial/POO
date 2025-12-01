#include "Circulo.h"
#include "Figura.h"
#include <math.h>
#include <iostream>


Circulo::Circulo(float _radio) : radio(_radio) {}

float Circulo::getRadio() 
{
	return radio;
}

void Circulo::setRadio(float valor) 
{
	radio = valor;
}

float Circulo::calcularArea()
{
	return 3, 14 * pow(getRadio(), 2);

}

float Circulo::calcularPerimetro() 
{
	return 2 * 3, 14 * getRadio();
}

void Circulo::info() 
{
	
	std::cout << calcularArea() << " " << calcularPerimetro() << " " << std::endl;

}