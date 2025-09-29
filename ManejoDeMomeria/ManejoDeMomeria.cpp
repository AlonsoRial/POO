// ManejoDeMomeria.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

//LOS PUNTEROS SON COMO ARRAYS, PERO GESTIONANDO MEJOR LA MEMORIA;

#include <iostream>
#include <string>
#include <limits>
#include <array>

//using namespace std;
void PunterosConstante()
{
	//const tipoPuntero *a;

}

void NuevoTipoDeDatos() 
{
	//typedef tipo_dato nombre_tipe
	typedef const int* prt; //Puntero constante

}

void  MoversePorMemoria() 
{
	int* array_int = new int[100];
	array_int++;
	array_int--;

}

void Ejemplo_Y_Teoria()
{
	//Esto son puntores de memoria
	int* a = new int; //Reserva de memoria dinamica
	delete a; //Elimina memoria dinamica

	int* b;

	//Para los arrays
	int* x = new int[1000]; //Reserva de memoria dinamica para 1000 ints
	delete[]x;

	int valor = 55;

	a = &valor;

	std::cout << a;

	/*Cuando se crea una variable, se guarda en memoria de la pila*/
	//Para que un puntero acceda al valor de otro puntero se pone '*' antes de la variable
	b = new int;
	*b = *a;
	delete b;
	delete a;

	//Cuando se crea un puntero, luego hay que eliminarlo para que el espacio quede libre; 
	//A LA HORA DE IMPRIMIR; IMPRIME EN HEXADECIMAL

}


void Ejemplo2()
{
	int x = 5;
	int* punt1 = NULL; //Puntero 1 no apunta a nada
	int* punt2 = &x;
	punt1 = punt2;
	*punt1 = 8;
	std::cout << punt1 << std::endl;
	int caca = *punt1;
	std::cout << caca;
}



void ArrayMultiDimensionales() 
{
	int** m;
	m = new int* [4];
	//for (int i = 0; i < m.; i++)
	//{

	//}
}

void FuncionEjercicio(int& valor1, int& valor2) 
{
	int auxi = valor1;
	valor1 = valor2;
	valor2 = auxi;
}





int main()
{
	//Paso1
	double* puntero_doble;
	int* puntero_int;
	struct TClientes { std::string codigo; std::string nombre; };
	struct TProveedores { std::string codigo; std::string nombre; };
	TClientes* cliente;
	TProveedores* proveedor;

	//Paso2
	puntero_doble = new double[0];
	puntero_int = new int[1];
	proveedor = new TProveedores[2];

	//Paso3
	cliente = new TClientes[100];
	cliente = NULL;


	//Paso4
	delete cliente;

	//Paso5
	int a = 5;
	int b = 6;
	FuncionEjercicio(a,b);

	//Paso6
	int my_array[5];

	for (int i = 1; i < 5; i++)
	{
		my_array[i] = i;
	}

	int* p = my_array;

	int* q = my_array + 5;

	int suma = 0;

	//Fomra 1 de recorrer punteros
	for (; p!=q; ++p)
	{
		suma +=*p;
	}

	//Forma 2 de recorrer punteros
	for (int i = 0; i < 5; i++)
	{
		suma += *p;
		p++;
	}

	//Forma 3 de recorrer punteros
	for (int i = 0; i < 5; i++)
	{
		suma += *(p + 1);
	}





}





