#include "Tablero.h"

#include <iostream>
#include <memory>
#include <time.h>
#include <cmath>
#include <cstdlib>


int Tablero::check_cuadricula(int a, int b) 
{
	int x = -1;
	switch (b)
	{
	case 1 ... 3: x = 1; break;
	case 4 ... 6: x = 2; break;
	case 7 ... 9: x = 3; break;
	default:
		break;
	}
	switch (a)
	{
	case 1 ... 3: break;
	case 4 ... 6: x += 3; break;
	case 7 ... 9: x += 6; break;
	default:
		break;
	}

	return x;
}

bool Tablero::check_posible(int a, int b, int num)
{
	int cuad = check_cuadricula(a, b);
	if (cuad < 0)
		return false;
	for (int i = 0; i < 9; i++)
	{
		if (*(tablero[a][i]) == num || *(tablero[i][b]) == num || *(cuadricula[cuad - 1][i]) == num)
			return false;
	}

	return true;
}

bool Tablero::check_true(int a, int b, int num)
{
	if (tablero_hecho[a][b] == num)
		return true;
	return false;
}

void Tablero::iniciar_cuadricula() 
{
	for (int i = 0; i < 9; i++)
	{
		int x = i % 3;
		int y = (i - x); //filas
		x *= 3;
		for (int j = 0; j < 3; j++)
		{
			for (int z = 0; z < 3; z++)
			{
				cuadricula[i][(j * 3) + z] = tablero[y + j][x + z];
			}
		}
	}
}

Tablero::Tablero() {
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			tablero[i][j] = new int(-1);
		}
	}

	for (int i = 0; i < 16; i++)
	{
		int x = std::rand() % 9; 
		int y = std::rand() % 9;

		*(tablero[y][x]) = tablero_hecho[y][x];
	}

	iniciar_cuadricula();

}

Tablero::~Tablero() {
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			delete tablero[i][j];
		}
	}
}


bool Tablero::insert_num(int a, int b, int c) 
{
	if (a > 9 || a<0 || b > 9 || b<0) 
		return false;


	if (check_posible(a, b, c) && check_true(a, b, c)) {
		*(tablero[a][b]) = c;
		return true;
	}

	return false;
	
}


void Tablero::paint_tablero() {

	for (int i = 0; i < 9; i++)
	{

		for (int j = 0; j < 9; j++)
		{
			if (*(tablero[i][j]) == -1) 
			{
				std::cout << "_";
			}
			else 
			{
				std::cout << *(tablero[i][j]);
			}
			std::cout << " ";

		}
		std::cout << std::endl;
	}

}

