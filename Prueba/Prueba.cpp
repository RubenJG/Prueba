// Prueba.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Perro.h"
#include "Gato.h"
using namespace std;

int main()
{


	Gato g;
	Perro p;

	g.setNombre("Max");
	g.setEdad(15);

	// p.setNombre("MaxMaxPower");
	// p.setRaza("Labrador");

	cout << "Gato: " << g.getNombre() << " " << g.getEdad() << endl;
	// cout << "Perro: " << p.getNombre() << " " << p.getRaza() << endl;

	return 0;
}

