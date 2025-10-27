#pragma once
class Tablero
{
private:
	int* tablero[9][9];
	
	int tablero_hecho[9][9] = {
	{1,2,3,6,7,8,9,4,5},
	{5,8,4,2,3,9,7,6,1},
	{9,6,7,1,4,5,3,2,8},
	{3,7,2,4,6,1,5,8,9},
	{6,9,1,5,8,3,2,7,4},
	{4,5,8,7,9,2,6,1,3},
	{8,3,6,9,2,4,1,5,7},
	{2,1,9,8,5,7,4,3,6},
	{7,4,5,3,1,6,8,9,2} };
// 1 2 3 4 5 6 7 8 9
// ...
// 9 1 2 3 4 5 6 7 8

// 1 2 3
// 4 5 6
// 7 8 9
	// misma posicion cuadricuyloas y numeros en ellas
	int* cuadricula[9][9];

	int check_cuadricula(int a, int b);
	bool check_posible(int a, int b, int num);
	bool check_true(int a, int b, int num);

	void iniciar_cuadricula();

public:
	Tablero();

	bool insert_num(int a, int b, int c);

	void paint_tablero();

	

	~Tablero();


		
	


};

