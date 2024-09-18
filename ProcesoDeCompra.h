#pragma once
#include "ArrayPelicula.h"
class ProcesoDeCompra
{
private:
	std::string ID;
	std::string cardNumber;
	int seatPurchaseCode;
	
public:
	ProcesoDeCompra();

	void compareData( int);
	void addPurchaseData(std::string, std::string);
	void setID(std::string);
	void setCardNumber(std::string);
	void setSeatPurchaseCode(int);
	int getSeatPurchaseCode();
};

