#pragma once
#include "Padre.h"
class Hijo : public Padre
{
private :
	int b;


public:
	Hijo(int a_, int b_) : Padre{ a_ }, b{ b_ } {}

};

