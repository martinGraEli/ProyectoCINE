#pragma once
#include "ProcesoDeCompra.h"
class ArrayCompras
{private:
	int maximumPurchases = 60;
	ProcesoDeCompra* arrayPurchases;
	int amount = 0;
public:
	ArrayCompras();
	void addNewPurchases(std::string, std::string,int);
	void addNewReserve(int);
};

