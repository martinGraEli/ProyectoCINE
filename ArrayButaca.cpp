
#include "ArrayButaca.h"

ArrayButaca::ArrayButaca()
{
	this->precio = 0;
	this->cantidad=50;
	this->asientos = new Butaca  [this->cantidad];
	for (int i = 0; i < this->cantidad; i++) {
		this->asientos[i] = Butaca();
	}
}



void ArrayButaca::modificarAsientoPorCodigo(int codi) {
	for (int i = 0; i < cantidad; i++) {
		if (codi == asientos->getCodigoAsiento()) {
			asientos[i].modificarEstadoAsiento();
		}
}
}
void ArrayButaca::modificarAsiento(int pos)
{
	asientos[pos].modificarEstadoAsiento();
}

void ArrayButaca::setPrecio(int precio)
{
	this->precio = precio;
}

void ArrayButaca::printButacas()
{
	for (int i = 0; i < this->cantidad; i++) {

		if (asientos[i].getEstadoAsiento() == 0) {
			std::cout << GREEN << i << RESET <<" ";
		}
		else if (asientos[i].getEstadoAsiento() == 1) {
			std::cout << YELLOW << i << RESET << " ";
		}
		else if (asientos[i].getEstadoAsiento() == 2) {
			std::cout << RED << i << RESET << " ";
		}
		if (i % 10 == 0&&i!=0) {
			std::cout << std::endl;
		}
	}
	std::cout << std::endl;
}

int ArrayButaca::getPrecio()
{
	return this->precio;
}

int ArrayButaca::comprarConsecutivo(int consecutivo)
{
	for (int i = 0; i < this->cantidad; i++) {
		if (asientos[i].getCodigoAsiento() == consecutivo) {
			return getConsecutivo(i);
		}
		
	}
  return 0;
}
	

int ArrayButaca::getConsecutivo(int pos) 
{
	return asientos[pos].getCodigoAsiento();;
}
