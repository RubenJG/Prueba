// Prueba.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Perro.h"
#include "Gato.h"
using namespace std;

int main()
{

	cout << "Hola Mundo!" << endl;

	Gato g;
	Perro p;

	g.setNombre("Max");
	g.setEdad(15);

	p.setNombre("MaxMaxPower");
	p.setRaza("Labrador");

	cout << "Gato: " << g.getNombre() << " " << g.getEdad();
	cout << "Perro: " << p.getNombre() << " " << p.getRaza();

	return 0;
}

