#pragma once
#include "Figura.h"
class Rectangulo : public Figura
{

private:
	float ancho, largo;

public:
	Rectangulo(float _a, float _l);

	float calcularArea();
	float calcularPerimetro();


	float getAncho();


	float getLargo();

	void info();
};

