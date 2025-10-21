#include "Coordenadas.h"


int Coordenadas::get_coordenada_x() 
{
	return coordenada_x;
}

int Coordenadas::get_coordenada_y() 
{
	return coordenada_y;
}


void Coordenadas::set_coordenada_x(int nueva_coordenada_x)
{
	coordenada_x = nueva_coordenada_x;
}

void Coordenadas::set_coordenada_y(int nueva_coordenada_y)
{
	coordenada_y = nueva_coordenada_y;
}

Coordenadas::Coordenadas() :coordenada_x{ 0 }, coordenada_y{ 0 } { }

Coordenadas::Coordenadas(int _coordenada_x, int _coordenada_y) : coordenada_x {_coordenada_x}, coordenada_y {_coordenada_y} {}

Coordenadas::~Coordenadas() {}

Coordenadas& Coordenadas::operator+(const Coordenadas& c)
{
	return *(new Coordenadas(get_coordenada_x() + c.coordenada_x, get_coordenada_y() + c.coordenada_y));
}

Coordenadas& Coordenadas::operator-(const Coordenadas& c)
{
	return *(new Coordenadas(get_coordenada_x() - c.coordenada_x, get_coordenada_y() - c.coordenada_y));
}

Coordenadas& Coordenadas::operator*(const Coordenadas& c)
{
	return *(new Coordenadas(get_coordenada_x() * c.coordenada_x, get_coordenada_y() * c.coordenada_y));
}

bool Coordenadas::operator<(const Coordenadas& c)
{
	return (get_coordenada_x() < c.coordenada_x, get_coordenada_y() < c.coordenada_y);
}

bool Coordenadas::operator>(const Coordenadas& c)
{
	return (get_coordenada_x() > c.coordenada_x, get_coordenada_y() > c.coordenada_y);
}

bool Coordenadas::operator<=(const Coordenadas& c)
{
	return (get_coordenada_x() < c.coordenada_x, get_coordenada_y() < c.coordenada_y);
}

bool Coordenadas::operator>=(const Coordenadas& c)
{
	return (get_coordenada_x() > c.coordenada_x, get_coordenada_y() > c.coordenada_y);
}

bool Coordenadas::operator==(const Coordenadas& c)
{
	return (get_coordenada_x() == c.coordenada_x, get_coordenada_y() == c.coordenada_y);
}

bool Coordenadas::operator!=(const Coordenadas& c)
{
	return (get_coordenada_x() != c.coordenada_x, get_coordenada_y() != c.coordenada_y);
}


Coordenadas& Coordenadas::operator=(const Coordenadas& c)
{
	if (&c != this) {


		set_coordenada_x(c.coordenada_x);
		set_coordenada_y(c.coordenada_y);
	}
}

