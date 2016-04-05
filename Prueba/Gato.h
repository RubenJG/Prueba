#pragma once
class Gato {

private:
	char * nombre;
	int edad;

public:
	Gato();
	~Gato();
	void setNombre(char *);
	void setEdad(int);
	char * getNombre();
	int getEdad();
};

