#pragma once
#include "Horario.h"
class ArrayHorario
{
private:
	int sizeMax = 50;
	Horario* vectorHorario;
	int cantidad = 0;
public:
	ArrayHorario();
	void agregarHorario();
	//void mostrarVectorHorario();
	void setCantidad(int);

	int getCantidad();
	void printEspesificoHorario(std::string);
};

