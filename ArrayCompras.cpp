#include "ArrayCompras.h"

ArrayCompras::ArrayCompras()
{
	this->arrayPurchases = new ProcesoDeCompra[maximumPurchases];
	for (int i = 0; i < maximumPurchases; i++) {
		arrayPurchases[i] = ProcesoDeCompra();
	}
}

void ArrayCompras::addNewPurchases(std::string ID, std::string numTargeta, int cod)
{
	for (int i = 0; i < amount; i++) {
		if (cod == arrayPurchases[i].getSeatPurchaseCode()) {
			arrayPurchases[this->amount].addPurchaseData(ID, numTargeta);
			
		}
		else { std::cout<<"compra no reservada\n"; }
	}
}

void ArrayCompras::addNewReserve(int cod)
{
	arrayPurchases[this->amount].setSeatPurchaseCode(cod);
}
