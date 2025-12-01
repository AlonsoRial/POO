// Excepciones.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <exception>

float div(float x, float y)
{
	return x / y;
}

int main()
{

	int numero;
	std::cout << "Di un numero k sea positivo ";
	try {
		
		std::cin >> numero;

		
	}
	catch (int e) 
	{
		std::cout << "No se puede numeros negativos " << numero << std::endl;
	}



	try
	{
		div(3, 2);
	}
	catch (std::exception& e)
	{
		std::cout<< "ERRRORRR";
	}

	

	

}
