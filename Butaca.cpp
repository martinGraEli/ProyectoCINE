#include "Butaca.h"

Butaca::Butaca() {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> distr(1000, 9999);
	this->seatCode = distr(gen);
	this->stateSeat=0;
}

void Butaca::modifySeatStatus() {
	if (this->stateSeat==2) {
		std::cout<<"el asiento ya se a vendido no se puede hacer cambios.\n";
	}
	else if (this->stateSeat < 2) {
		this->stateSeat =this->stateSeat+1;
	}
}
int Butaca::getStateSeat(){
	return this->stateSeat;
}

int Butaca::getSeatCode()
{
	return this->seatCode;
}

void Butaca::compareSeatCode(int copiaConsecutivo)
{
	if (copiaConsecutivo == this->seatCode) {

}
}

	
