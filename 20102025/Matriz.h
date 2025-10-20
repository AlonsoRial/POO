#pragma once



class Habitacion
{
private:
	bool espacio[40][30][20]; // 1 es donde esta la moca, el resto es 0

	int cordenadas_mosca[3];

public:
	Habitacion(int x = 19, int y = 14, int z = 9);



	~Habitacion();




};

