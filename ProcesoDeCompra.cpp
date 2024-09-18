#include "ProcesoDeCompra.h"

ProcesoDeCompra::ProcesoDeCompra()
{
	this->ID = " ";
	this->cardNumber = " ";
	this->seatPurchaseCode = 0;
	
}



void ProcesoDeCompra::compareData(int codigoButaca)
{
}

void ProcesoDeCompra::addPurchaseData(std::string ID, std::string numTargeta)
{
	this->ID = ID;
	this->cardNumber = cardNumber;

}

void ProcesoDeCompra::setID(std::string ID)
{
	this->ID = ID;
}

void ProcesoDeCompra::setCardNumber(std::string numerotargeta)
{this->cardNumber = numerotargeta;
}

void ProcesoDeCompra::setSeatPurchaseCode(int codigoButacaCompra)
{this->seatPurchaseCode = codigoButacaCompra;
}

int ProcesoDeCompra::getSeatPurchaseCode()
{
	return this->seatPurchaseCode;
}
