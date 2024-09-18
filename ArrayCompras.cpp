#include "ArrayCompras.h"

ArrayCompras::ArrayCompras()
{
	this->arrayCompras = new ProcesoDeCompra[comprasMaximas];
	for (int i = 0; i < comprasMaximas; i++) {
		arrayCompras[i] = ProcesoDeCompra();
	}
}

void ArrayCompras::addNewCompra(std::string ID, std::string numTargeta, int cod)
{
	for (int i = 0; i < cantidad; i++) {
		if (cod == arrayCompras[i].getCodigoButacaCompra()) {
			arrayCompras[this->cantidad].addDatosCompra(ID, numTargeta);
			
		}
		else { std::cout<<"compra no reservada\n"; }
	}
}

void ArrayCompras::addNewReserva(int cod)
{
	arrayCompras[this->cantidad].setCodigoButacaCompra(cod);
}
