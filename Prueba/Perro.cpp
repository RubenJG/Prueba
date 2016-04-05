#include "stdafx.h"
#include "Perro.h"


Perro::Perro() {
}


Perro::~Perro() {
}

void Perro::setNombre(char * nombre) {
	this->nombre = nombre;
}

void Perro::setRaza(char * raza) {
	this->raza = raza;
}

char * Perro::getNombre() {
	return nombre;
}

char * Perro::getRaza() {
	return raza;
}
