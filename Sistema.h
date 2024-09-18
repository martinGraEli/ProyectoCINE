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

	void menuPrincipal(int *);
	void menuSecundario(int*);
	void menuArchivo(int*);
	void infoEstudiante();
	int menuMantenimiento();
		void menuMantenimientoPelicula();
	void bucarNombreReserva(std::string,ArrayPelicula);
	void menuVenta();
};


#endif //SISTEMA_H