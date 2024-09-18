#pragma once
#include "Butaca.h"
#include <iostream>

// Códigos de colores ANSI
#define RESET   "\033[0m"       // Resetear color
#define RED     "\033[31m"      // Rojo
#define GREEN   "\033[32m"      // Verde
#define YELLOW  "\033[33m"      // Amarillo
#define BLUE    "\033[34m"      // Azul
#define MAGENTA "\033[35m"      // Magenta
#define CYAN    "\033[36m"      // Cian
#define WHITE   "\033[37m"      // Blanco
/*std::cout << RED << "Este texto es rojo" << RESET << std::endl;
std::cout << GREEN << "Este texto es verde" << RESET << std::endl;
std::cout << YELLOW << "Este texto es amarillo" << RESET << std::endl;
std::cout << BLUE << "Este texto es azul" << RESET << std::endl;
std::cout << MAGENTA << "Este texto es magenta" << RESET << std::endl;
std::cout << CYAN << "Este texto es cian" << RESET << std::endl;
std::cout << WHITE << "Este texto es blanco" << RESET << std::endl;*/


class ArrayButaca
{
private:	/*int sizeMax = 50; //modificar para que el usuario elija la cantidad maxima
	   Pelicula* vectorPelis;
	   int cantidad = 0;*/
	int precio;
	int cantidad;
	
	Butaca *asientos;
public:
	ArrayButaca();
	
	void modificarAsientoPorCodigo(int);
	void modificarAsiento(int);
	void setPrecio(int);
	void printButacas();
	int getPrecio();
	int comprarConsecutivo(int);
	int getConsecutivo(int);
};

