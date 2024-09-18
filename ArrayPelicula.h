#pragma once
#include "Pelicula.h"
class ArrayPelicula
{
private:

	int sizeMax = 50; //modificar para que el usuario elija la cantidad maxima
	Pelicula *vectorMovies;
	int amount = 0;
public:
	ArrayPelicula();
	void addMovie(int);
	void showVectorMovies();
	void showSpecificMovie(int);
	void setAmount(int);
	int getAmount();
	std::string getSpecificName(int);
	
};

