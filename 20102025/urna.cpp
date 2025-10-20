#pragma once


#include <cmath>
#include <iostream>
#include <algorithm>

#include "urna.h"




void urna::hacer_shuffle() {
	std::random_shuffle(&bolas[0], &bolas[100]);
}

urna::urna() {
	for (int i = 0; i < 100; i++)
	{
		bolas[i] = i;
	}
	hacer_shuffle();
}


int urna::sacar_bola() {
	int placeholder = bolas[final];
	descartadas[final_discard] = placeholder;
	final--;
	final_discard++;
	return placeholder;
}


bool urna::meter_bola(int bola){
	int posicion_discard = -1;
	bool found = 0;

	for (int i = 0; i < final_discard; i++)
	{
		if (descartadas[i] == bola) {
			found = 1;
			posicion_discard = i;
		}
	}
	
	if (!found) return false;

	bolas[++final] = bola;
	found = false; //reused
	for (int i = 0; i < final_discard; i++)
	{
		if (found) {
			descartadas[i - 1] = descartadas[i];
		}
		if (i == posicion_discard)
			found = true;

	}
	final_discard--;

	return true;

}



void urna::meter_todas() {
	for (int i = 0; i < final_discard; i++)
	{
		bolas[++final] = descartadas[i];
		descartadas[i] = 0;
	}
	final_discard = -1;
}





