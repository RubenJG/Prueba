#pragma once
class Perro {

private:
	char * nombre;
	char * raza;

public:
	Perro();
	~Perro();
	void setNombre(char *);
	void setRaza(char *);
	char * getNombre();
	char * getRaza();
};

