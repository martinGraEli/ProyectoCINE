#pragma once
#include "ProcesoDeCompra.h"
class ArrayCompras
{private:
	int comprasMaximas = 60;
	ProcesoDeCompra* arrayCompras;
	int cantidad = 0;
public:
	ArrayCompras();
	void addNewCompra(std::string, std::string,int);
	void addNewReserva(int);
};

