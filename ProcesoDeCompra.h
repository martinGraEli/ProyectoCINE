#pragma once
#include "ArrayPelicula.h"
class ProcesoDeCompra
{
private:
	std::string ID;
	std::string numerotargeta;
	int codigoButacaCompra;
	
public:
	ProcesoDeCompra();

	void compararDatos( int);
	void addDatosCompra(std::string, std::string);
	void setID(std::string);
	void setNumeroTargeta(std::string);
	void setCodigoButacaCompra(int);
	int getCodigoButacaCompra();
};

