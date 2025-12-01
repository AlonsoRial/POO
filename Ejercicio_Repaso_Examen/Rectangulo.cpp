#include "Rectangulo.h"

Rectangulo::Rectangulo(float _a, float _l) :ancho(_a), largo(_l) {}

float Rectangulo::getAncho()
{
	return ancho;
}

float Rectangulo::getLargo()
{
	return largo;
}

float Rectangulo::calcularArea() 
{
	return getAncho() * getLargo();
}

float Rectangulo::calcularPerimetro()
{
	return 2 * getAncho() + 2 * getLargo();
}

void Rectangulo::info()
{

	std::cout << calcularArea() << " " << calcularPerimetro() << " " << std::endl;

}