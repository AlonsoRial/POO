#pragma once
class Nave
{
private:
	double latitud, altitud;
	unsigned int vidas;

public:
	Nave();
	Nave(double altitud, double latitud, int vidas);
	void moverAltura(double y);
	void moverLados(double x);
	void destruirNave();



};

