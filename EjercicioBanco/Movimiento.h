#pragma once
#include <iostream>
class Movimiento
{

private:
	const float cantidad;
	const std::string concepto;


public:


	Movimiento(float , std::string );


	float getCantidad();
	std::string getConcepto();


};

