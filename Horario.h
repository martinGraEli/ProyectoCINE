#pragma once
#include <iostream>
#include "Pelicula.h"

class Horario 
{
private: 
	std::string nombrePeliHorario;
	std::string dia;

	int horaInicial;
	int minInicial;

	int horaFinal;
	int minFinal;

public:
	
	Horario();
	void setNombrePeliHorario(std::string);
	void setDia(std::string);
	void setHoraInicial(int);
	void setMinInicial(int);

	
	void setMinutoAndHoraFinal(Pelicula);
	

	std::string getDia();

	std::string getHorarioPeliName();
	int getHoraInicial();
	int getMinInicial();

	int getHoraFinal();
	int getMinFinal();
	
	void PrintHorario();
};

