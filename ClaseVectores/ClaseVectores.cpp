// ClaseVectores.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <vector>

int main()
{
	//Los Vectores son como las Listas normales en lo que seria Java

	std::vector<int> v1; // vector de entero vacío
	std::vector<int> v2(5, 42); // crea un vector de 5 elementos, y en todos tienen un valor de 42
	std::vector<int> v3 = { 1,2,3,66,5 }; // Crea un vector y los rellena con valores
	std::vector<int> v4(5); // Crea un vector de 5 de capacidad (se puede ampliar), pero está vacio

	v1.size(); // elementos "reales" guardados
	v1.capacity(); //elementos reservado

	//Formas de acceder un valor de Vector, se puede mostrar y modificar, como el get o el set de java o c# 
	v2[0] = 99; // forma poco segura
	v2.at(1)= 55; // forma segura y que debes de aprender hijo de la gran puta
	
	v2.push_back(10); // añadir un valor al final del vector, por el amor de dios, esto es una puta lista de java.
	v3.clear(); // Vacia todo Vector

	v2.insert(v2.begin() + 0,9); //Es para insertar un valor sin eliminar otros registros, el primer parametro es donde lo va a recorrer, el segundo es la  
	// posicion, y el tercer parametro el valor en si, una vez insertado el valor, el resto de valores se desplazaran +1 a la derecha por donde empezo el 
	//segundo parametro
	v2.erase(v2.begin() + 1); //Casi lo mismo que lo anterior, pero para eliminar, en este caso, no hace falta un tercer parametro por que no se añade nada.


	//FORMAS DE MOSTRAR TODO LOS REGISTROS
	//Normal
	for (size_t i = 0; i < v2.size(); i++)
	{
		std::cout << v2.at(i) << "\n";
	}
	std::cout << "--------- \n";

	//No me funciona, copia el vector, se utiliza para vectores pequeños
	/*for (int x : v2)
	{
		std::cout << v2.at(x) << "\n";
	}
	std::cout << "--------- \n";
	*/

	//No copia el vector, tampoco me funciona :D
	/*for (const auto x : v2)
	{
		std::cout << v2.at(x) << "\n";
	}
	*/



}
