#include "Record.h"

#include <iostream>

static bool fecha_ok(const Date& d) 
{
	return (d.y > 0 && d.m >= 1 && d.m <= 12);
}
