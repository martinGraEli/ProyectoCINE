#pragma once
#include "Pelicula.h"
class ArrayPelicula
{
private:
	int sizeMax = 50;
	Pelicula* vectorPelis;
	int cantidad = 0;
public:
	ArrayPelicula();
	void agregarPelicula(Pelicula);
	void mostrarVectorPelis();
	void setCantidad(int);
	int getCantidad();
};

