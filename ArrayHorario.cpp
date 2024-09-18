#include "ArrayHorario.h"

ArrayHorario::ArrayHorario()
{
	this->vectorSchedule = new Horario[sizeMax];
	for (int i = 0; i < sizeMax; i++) {
		vectorSchedule[i] = Horario();
	}
}

void ArrayHorario::addShedule()
{
	int hora, minutos;
	std::string name;
	std::string dia;
	std::cout << "Digite el nombre exacto de la pelucula\n";
	std::cin >> name;
	std::cout << "Digite el dia que se vera la pelucula\n";
	std::cin >> dia;
	std::cout << "Digite la hora de inicio de la pelicula en 24 horas;\n";
	std::cin >>hora;
	std::cout << "Digite los minutos de inicio de la pelicula\n";
	std::cin >> minutos;
	vectorSchedule[this->amount].setNameMovieTime(name);
	vectorSchedule[this->amount].setStartTime(hora);
	vectorSchedule[this->amount].setInitialMinutes(minutos);
	vectorSchedule[this->amount].setDay(dia);
	this->amount = this->amount + 1;
}

void ArrayHorario::setAmount(int can)
{
	this->amount = can;
}

int ArrayHorario::getAmount()
{
	return this->amount;
}

void ArrayHorario::printSpecificShedule(std::string nombrePeli)
{
	for (int i = 0; i < amount; i++) {
		if (nombrePeli == vectorSchedule[i].getNameMovieTime()) {
			std::cout << "Horario #" << i << "\n\t";
			vectorSchedule[i].printSchedule();
		}
	}
}
