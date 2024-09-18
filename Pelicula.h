#pragma once

#ifndef PELICULA_H
#define PELICULA_H
#include <iostream>
//#include "ArrayHorario.h"

class Pelicula {

private:
	std::string nombre;
	int age;
	int duracion;
	std::string pais;
	std::string resena;
	
	
	

public:
	Pelicula();
	Pelicula(std::string, int, int, std::string, std::string);
	std::string getNombre();
	std::string getResena();
	int getAge();
	int getDuracion();
	std::string getPais();
	int getSalaAVer();
	void addNewPelicula(int);
	void informacionPelicula(); 
	
	
 };

#endif //PELICULA_H