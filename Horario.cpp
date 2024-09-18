#include "Horario.h"

Horario::Horario()
{
	this->dia = "ninguno";
	this->horaInicial = 0;
	this->minInicial = 0;

	this->horaFinal = 0;
	this->minFinal = 0;
}

void Horario::setNombrePeliHorario(std::string name)
{
	this->nombrePeliHorario = name;
}


void Horario::setDia(std::string dia){
	this->dia = dia;
}

void Horario::setHoraInicial(int horaIn){
	this->horaInicial = horaIn;

}
void Horario::setMinInicial(int minIn) {
	this->minInicial = minIn;
	

}


void Horario::setMinutoAndHoraFinal(Pelicula peli){
	int minPeli = peli.getDuracion();
	int hora = 0;

	while (minPeli > 60) {
		minPeli = minPeli - 60;
		hora++;
	}
	if ((this->minInicial + minPeli) > 60) {
		hora++;
		this->minFinal = (this->minInicial + minPeli) - 60;
	}
	else {
		this->minFinal = this->minInicial + minPeli;
	}
	if (24 < this->horaInicial + hora) {
		this->horaFinal = (this->horaInicial + hora) - 24;
	}
	else {
		this->horaFinal = this->horaInicial + hora;
	}
	
	
	
}



std::string Horario::getDia(){
	return this->dia;
}

std::string Horario::getHorarioPeliName()
{
	return this->nombrePeliHorario;
}

int Horario::getHoraInicial(){
	return this->horaInicial;
}

int Horario::getMinInicial()
{
	return this->minInicial;
}

int Horario::getHoraFinal(){
	return this->horaFinal;
}

int Horario::getMinFinal()
{
	return this->minFinal;
}

void Horario::PrintHorario()
{
	std::cout << "Hora Inicial: " << this->horaInicial<<":"<<this->minInicial<<std::endl;
	std::cout << "Hora Final: " << this->horaFinal << ":" << this->minFinal << std::endl;
}
