#include "Butaca.h"

Butaca::Butaca() {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> distr(1000, 9999);
	this->codigoAsiento = distr(gen);
	this->estadoAsiento=0;
}

void Butaca::modificarEstadoAsiento() {
	if (this->estadoAsiento==2) {
		std::cout<<"el asiento ya se a vendido no se puede hacer cambios.\n";
	}
	else if (this->estadoAsiento < 2) {
		this->estadoAsiento =this->estadoAsiento+1;
	}
}
int Butaca::getEstadoAsiento(){
	return this->estadoAsiento;
}

int Butaca::getCodigoAsiento()
{
	return this->codigoAsiento;
}

void Butaca::compararCodigoAsiento(int copiaConsecutivo)
{
	if (copiaConsecutivo == this->codigoAsiento) {

}
}

	
