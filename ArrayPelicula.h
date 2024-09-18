#pragma once
#include "Pelicula.h"
class ArrayPelicula
{
private:

	int sizeMax = 50; //modificar para que el usuario elija la cantidad maxima
	Pelicula *vectorPelis;
	int cantidad = 0;
public:
	ArrayPelicula();
	void agregarPelicula(int);
	void mostrarVectorPelis();
	void mostrarPeliculaEspesifica(int);
	void setCantidad(int);
	int getCantidad();
	std::string getNombreEspesifico(int);
	
};

