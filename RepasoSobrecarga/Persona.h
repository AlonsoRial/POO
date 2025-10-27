#pragma once
class Persona
{

private:
	int edad;

public:
	Persona(int edad);
	Persona& operator+(const Persona&);
	int get_edad() /*const*/;
	void set_edad(int edad);


	~Persona() {}

// .h = interfaz declara qé puede hacer la clase
// .cpp = implementación define cómo lo hace
// Validaciónes en el construtor y en métodos que cambia de estado
// En vez de métodos set cambiar el nombre por algo especifico
// Métodos const -- No modifican nada

// Acoplamiento -- Grado de dependencia de los módulos de un programa. Al hacer cambios en un módulo, es necesario realizar cambios en otro.
// Cohesión -- Cohesión no ímplica dependencia. Cada módulo es autocontenido depende lo mínimo de los demás.
// Alto acomplamiento implica baja cohesión y viceversa

//Ventajas del bajo acomplamiento
	//Mejorar reutilización
	//Mejorar mantenimiento
	//Facilitar las pruebas unitarias

//Ventajas del alta cochesión
	//Mejorar reutilización
	//Mejorar mantenimiento
	// Facilitar las pruebas unitarias
	// Codigo más entendible
	
// Encapsulamiento -- Ocultar los detalles internos e implementación del módulo. Se consigue con el fichero .h y el .cpp
// Modularidad -- División de un sistema complejo en unidades más pequeñas

// Asociación, composición y agregación (Relación entre clases)
//
// Asociacion - Relación entre objetos sin implicar propiedad, objetos que colaboran. Hay dos tipos: composición y agregación
	// Agregación - Una clase es parte de otra clase. La destrucción del compuesto no implica la destrucción del componente. 
	// Ejemplo empresa y clientes
	// Composicion - Relación entre objetos en la que la destrucción del compuesto implica la destrucción del componente. 
	// Ejemplo empresa y empleados 	
//
	

};

