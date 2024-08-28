#include "Asiento.h"

Asiento::Asiento() {
	this->estado = 0;

	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> distr(1000, 9999);
	this->codigo = distr(gen);
}
int Asiento::getCodigo() {
	return this->codigo;
}
int Asiento::getEstado() {
	return this->estado;
}
void Asiento::modificarEstado() {
	if (estado == 0) {
		estado = 1;
	}
	else if (estado == 1) {
		estado = 2;
	}
}
void Asiento::printAsiento() {
	std::cout << "\nEstado" << estado<<std::endl;
	std::cout << "Codigo" << codigo << std::endl;
}
