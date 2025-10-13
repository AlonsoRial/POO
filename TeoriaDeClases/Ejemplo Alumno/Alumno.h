// Fichero .h (Header)
// Declaraciones
// Costante, variables tipo enum
// Cabecera funciones
// Declaración clases
#pragma once
#include <iostream>
class Alumno
{
	// Atributos
private:
	unsigned int edad;
	std::string nombre;
	std::string apellidos;
	double nota_media;
	bool beca;
public:
	// Constructor
	// Método para crear objetos
	// Constructor por defecto
	Alumno();
	// Constructor explicito con argumentos
	Alumno(int edad, std::string nombre,
		std::string apellidos,double nota_media,
		bool beca);
	// Constructor copia
	Alumno(const Alumno& a);
	// Métodos (públicos o privados)
	void imprimir_datos();
	void calcular_nota();
	// Métodos getters/setters
	// get edad
	int getEdad();
	// set edad
	void setEdad(int nuevaEdad);
};

