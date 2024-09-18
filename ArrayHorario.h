#pragma once
#include "Horario.h"
class ArrayHorario
{
private:
	int sizeMax = 50;
	Horario* vectorSchedule;
	int amount = 0;
public:
	ArrayHorario();
	void addShedule();
	
	void setAmount(int);

	int getAmount();
	void printSpecificShedule(std::string);
};

