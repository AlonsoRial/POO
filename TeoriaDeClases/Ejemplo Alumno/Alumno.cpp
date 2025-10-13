// Fichero .cpp
// Definiciones
#include "Prueba.h"
void Alumno::imprimir_datos() {
	std::cout << "Edad" << edad;
	std::cout << "Nombre" << nombre;
}
int Alumno::getEdad() {
	return edad;
}
void Alumno::setEdad(int nuevaEdad) {
	edad = nuevaEdad;
}
Alumno::Alumno():edad{0},nombre{""},
apellidos{""}, nota_media{0}, beca{0} { }

Alumno::Alumno(int _edad, std::string _nombre,
	std::string _apellidos, double _nota_media,
	bool _beca) :edad {_edad}, nombre{ _nombre },
apellidos{ _apellidos }, 
nota_media{ _nota_media }, beca{ _beca } {
}
Alumno::Alumno(const Alumno& a) :
	edad{ a.edad }, nombre{ a.nombre },
apellidos{a.apellidos},
nota_media{a.nota_media}, 
beca{a.beca} {

}