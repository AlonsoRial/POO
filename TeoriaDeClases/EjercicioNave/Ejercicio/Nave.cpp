#include "Nave.h"

Nave::Nave() :altitud{}, latitud{}, vidas{ 3 } {}
Nave::Nave(double altitud, double latitud, int vidas) : vidas{3} {}


void Nave::moverAltura(double y) {
	altitud += y;
}

void Nave::moverLados(double x) {
	latitud += x;
}

void Nave::destruirNave() {
	vidas--;
}