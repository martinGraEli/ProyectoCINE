#include "ArrayPelicula.h"
ArrayPelicula::ArrayPelicula() {
	this->vectorMovies = new Pelicula[sizeMax];
	for (int i = 0; i < sizeMax; i++) {
		vectorMovies[i] = Pelicula();
	}
 }
void ArrayPelicula::addMovie(int cantSala)//hay que crear la pelicula por medio del constructor
{

	vectorMovies[this->amount].addNewMovie(cantSala);
	amount=amount + 1;
}
void ArrayPelicula::showVectorMovies() {
	for (int i = 0; i< amount; i++) {
		std::cout << "Pelicula #: " << i<<std::endl;
		std::cout << vectorMovies[i].getName() << std::endl;
		
	  }
}
void ArrayPelicula::showSpecificMovie(int pos)
{
	vectorMovies[pos].movieInformation();
}
void ArrayPelicula::setAmount(int cant) {
	this->amount = cant;
}
int ArrayPelicula::getAmount() {
	return this->amount;
}

std::string ArrayPelicula::getSpecificName(int pos)
{
	return vectorMovies[pos].getName();
}


