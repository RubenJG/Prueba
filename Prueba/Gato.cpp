#include "stdafx.h"
#include "Gato.h"


Gato::Gato() {
}


Gato::~Gato() {
}

void Gato::setNombre(char * nombre) {
	this->nombre = nombre;
}

void Gato::setEdad(int edad) {
	this->edad = edad;
}

char * Gato::getNombre() {
	return nombre;
}

int Gato::getEdad() {
	return edad;
}
