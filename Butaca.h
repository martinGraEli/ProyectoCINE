#pragma once
#include <iostream>

#include <random>
class Butaca
{
private:

	
	int codigoAsiento;
	int estadoAsiento;
	
	
public:
	Butaca();
	
	//void addNewAsiento();
	
	void modificarEstadoAsiento();
	int getEstadoAsiento();
	//void mostrarSalaPruba();
	int getCodigoAsiento();
	void compararCodigoAsiento(int);
};

