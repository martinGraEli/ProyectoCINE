#pragma once
#include <iostream>
#include "Asiento.h"

class Sala
{
private:
	int col;
	int fila;
	Asiento **matrizSala;
	int precio;
	
public:
	Sala(int,int, int);
	void modificarEstadoAsiento(int,int);
	void mostrarSalaPruba();
	int getPrecio();
};

