#pragma once
#include "Figura.h"
class Circulo: public Figura
{

private:
	float radio;

public:

	Circulo(float);

	float calcularArea();
	float calcularPerimetro();

	float getRadio();
	void setRadio(float valor);

	void info();

};

