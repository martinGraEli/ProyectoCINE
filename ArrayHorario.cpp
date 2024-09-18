#include "ArrayHorario.h"

ArrayHorario::ArrayHorario()
{
	this->vectorHorario = new Horario[sizeMax];
	for (int i = 0; i < sizeMax; i++) {
		vectorHorario[i] = Horario();
	}
}

void ArrayHorario::agregarHorario()
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
	vectorHorario[this->cantidad].setNombrePeliHorario(name);
	vectorHorario[this->cantidad].setHoraInicial(hora);
	vectorHorario[this->cantidad].setMinInicial(minutos);
	vectorHorario[this->cantidad].setDia(dia);
	this->cantidad = this->cantidad + 1;
}

void ArrayHorario::setCantidad(int can)
{
	this->cantidad = can;
}

int ArrayHorario::getCantidad()
{
	return this->cantidad;
}

void ArrayHorario::printEspesificoHorario(std::string nombrePeli)
{
	for (int i = 0; i < cantidad; i++) {
		if (nombrePeli == vectorHorario[i].getHorarioPeliName()) {
			std::cout << "Horario #" << i << "\n\t";
			vectorHorario[i].PrintHorario();
		}
	}
}
