#include "ProcesoDeCompra.h"

ProcesoDeCompra::ProcesoDeCompra()
{
	this->ID = " ";
	this->numerotargeta = " ";
	this->codigoButacaCompra = 0;
	
}



void ProcesoDeCompra::compararDatos(int codigoButaca)
{
}

void ProcesoDeCompra::addDatosCompra(std::string ID, std::string numTargeta)
{
	this->ID = ID;
	this->numerotargeta = numerotargeta;

}

void ProcesoDeCompra::setID(std::string ID)
{
	this->ID = ID;
}

void ProcesoDeCompra::setNumeroTargeta(std::string numerotargeta)
{this->numerotargeta = numerotargeta;
}

void ProcesoDeCompra::setCodigoButacaCompra(int codigoButacaCompra)
{this->codigoButacaCompra = codigoButacaCompra;
}

int ProcesoDeCompra::getCodigoButacaCompra()
{
	return this->codigoButacaCompra;
}
