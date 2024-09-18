#include "Horario.h"

Horario::Horario()
{
	this->day = "ninguno";
	this->startTime = 0;
	this->initialMinutes = 0;

	this->finalHour = 0;
	this->finalMinutes = 0;
}

void Horario::setNameMovieTime(std::string name)
{
	this->nameMovieTime = name;
}


void Horario::setDay(std::string dia){
	this->day = dia;
}

void Horario::setStartTime(int horaIn){
	this->startTime = horaIn;

}
void Horario::setInitialMinutes(int minIn) {
	this->initialMinutes = minIn;
	

}


void Horario::setFinalMinuteAndHour(Pelicula peli){
	int minPeli = peli.getDuration();
	int hora = 0;

	while (minPeli > 60) {
		minPeli = minPeli - 60;
		hora++;
	}
	if ((this->initialMinutes + minPeli) > 60) {
		hora++;
		this->finalMinutes = (this->initialMinutes + minPeli) - 60;
	}
	else {
		this->finalMinutes = this->initialMinutes + minPeli;
	}
	if (24 < this->startTime + hora) {
		this->finalHour = (this->startTime + hora) - 24;
	}
	else {
		this->finalHour = this->startTime + hora;
	}
	
	
	
}



std::string Horario::getDay(){
	return this->day;
}

std::string Horario::getNameMovieTime()
{
	return this->nameMovieTime;
}

int Horario::getStartTime(){
	return this->startTime;
}

int Horario::getInitialMinutes()
{
	return this->initialMinutes;
}

int Horario::getFinalHour(){
	return this->finalHour;
}

int Horario::getFinalMinutes()
{
	return this->finalMinutes;
}

void Horario::printSchedule()
{
	std::cout << "Hora Inicial: " << this->startTime<<":"<<this->initialMinutes<<std::endl;
	std::cout << "Hora Final: " << this->finalHour << ":" << this->finalMinutes << std::endl;
}
