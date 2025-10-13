#pragma once
//
//Declaraciones
//Constante, variables tipo enum
//Cavecera funciones
//Declaración clases


//En las clases se crean en Archivos de encabezado/Agregar/Clases
//En el archivo .h se declara la clase y sus atributtos
//En el archivo .cpp se define el .h

#include <iostream>

class Alumno
{
	//Atributos
private:  //Asi lo que hace es que todos los atributos hacia abajo sean privados, si pones publico, pues publicos
	unsigned int edad; //solo valores positivos
	std::string nombre;
	std::string apellido;
	double nota_media;
	bool beca;

public:
	//Constructor
	//El constructor es un metodo para crear objetos
	//VIIIIIIIVA NUESTRO CONSTRUCTOR CONSTRUCTOR CONSTRUCTOR, VIIIIIIIVA NUESTRO CONSTRUCTOR CONSTRUCTOR TOR, XD

	//Constructor por defecto
	Alumno();

	//Constructor explicito con argumentos
	Alumno(int edad, std::string nombre, std::string apellidos, double nota_media, bool beca);

	//Construcotr copia, no modifica al objeto que pasas
	Alumno(const Alumno& a);


	//Metodos (publicos o privados)
	 //Ejemplo de publico
	void imprimir_datos();
	int calcular_nota();


	//Metodos Getters/Setters
	//get edad
	int getEdad();

	//set edad
	void setEdad(int nuevaEdad);
};

