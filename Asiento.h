#pragma once
#include <iostream>

#include <random>
class Asiento
{
private:
	int codigo;
	int estado;
public:
	Asiento();
	int getCodigo();
	int getEstado();
	void modificarEstado();
	void printAsiento();
};

