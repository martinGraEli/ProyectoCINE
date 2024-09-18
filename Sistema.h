#pragma once

#ifndef SISTEMA_H
#define SISTEMA_H

#include <iostream>
#include <string>
#include <stdio.h>
#include"ArrayHorario.h"
#include "ArrayPelicula.h"
#include "ArrayHorario.h"
class Sistema {

public:

	void mainMenu(int *);
	
	void fileMenu(int*);
	void infoEstudiante();
	int MaintenanceMenu();

};


#endif //SISTEMA_H