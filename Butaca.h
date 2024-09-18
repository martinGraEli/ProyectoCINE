#pragma once
#include <iostream>

#include <random>
class Butaca
{
private:

	
	int seatCode;
	int stateSeat;
	
	
public:
	Butaca();
	
	void modifySeatStatus();
	int getStateSeat();
	int getSeatCode();
	void compareSeatCode(int);
};

