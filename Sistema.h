#pragma once

#ifndef SISTEMA_H
#define SISTEMA_H

#include <iostream>
#include <string>
#include <stdio.h>

class Sistema {

public:

	void menuPrincipal(int *);
	void menuSecundario(int*);
	void menuArchivo(int*);
	void infoEstudiante();
	void menuMantenimiento();
	void menuReserva();
	void menuVenta();
};


#endif //SISTEMA_H