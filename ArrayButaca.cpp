
#include "ArrayButaca.h"

ArrayButaca::ArrayButaca()
{
	this->price = 0;
	this->amount=50;
	this->seating = new Butaca  [this->amount];
	for (int i = 0; i < this->amount; i++) {
		this->seating[i] = Butaca();
	}
}



void ArrayButaca::modifySeatByCode(int codi) {
	for (int i = 0; i < amount; i++) {
		if (codi == seating[i].getSeatCode()) {
			seating[i].modifySeatStatus();
		}
		
}
}
void ArrayButaca::modifyseat(int pos)
{
	seating[pos].modifySeatStatus();
}

void ArrayButaca::setPrice(int precio)
{
	this->price = precio;
}

void ArrayButaca::printSeats()
{
	for (int i = 0; i < this->amount; i++) {

		if (seating[i].getStateSeat() == 0) {
			std::cout << GREEN << i << RESET <<" ";
		}
		else if (seating[i].getStateSeat() == 1) {
			std::cout << YELLOW << i << RESET << " ";
		}
		else if (seating[i].getStateSeat() == 2) {
			std::cout << RED << i << RESET << " ";
		}
		if (i % 10 == 0&&i!=0) {
			std::cout << std::endl;
		}
	}
	std::cout << std::endl;
}

int ArrayButaca::getPrice()
{
	return this->price;
}

int ArrayButaca::compareConsecutive(int consecutivo)
{
	for (int i = 0; i < this->amount; i++) {
		if (seating[i].getSeatCode() == consecutivo) {
			return getconsecutive(i);
		}
		
	}
  return 0;
}
	

int ArrayButaca::getconsecutive(int pos) 
{
	return seating[pos].getSeatCode();;
}
