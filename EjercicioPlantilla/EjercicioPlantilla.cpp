// EjercicioPlantilla.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

template <typename T>

void intercambio(T& a, T& b) 
{
	T& c = a;
	a = b;
	b = c;
}

template <typename T1, typename T2>
T1 menor(T1 a, T2 b) 
{
	if (a < b) 
	{
		return a;
	}
	else 
	{
		return b;
	}
}

int main()
{

	int a = 4;
	int b = 9;
	intercambio(a, b);
	
	std::cout << a << " " << b << " " << std::endl;
	
	std::cout<< menor(a, b);



}