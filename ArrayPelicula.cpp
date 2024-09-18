#include "ArrayPelicula.h"
ArrayPelicula::ArrayPelicula() {
	this->vectorPelis = new Pelicula[sizeMax];
	for (int i = 0; i < sizeMax; i++) {
		vectorPelis[i] = Pelicula();
	}
 }
void ArrayPelicula::agregarPelicula(int cantSala)//hay que crear la pelicula por medio del constructor
{

	vectorPelis[this->cantidad].addNewPelicula(cantSala);
	cantidad=cantidad + 1;
}
void ArrayPelicula::mostrarVectorPelis() {
	for (int i = 0; i< cantidad; i++) {
		std::cout << "Pelicula #: " << i<<std::endl;
		std::cout << vectorPelis[i].getNombre() << std::endl;
		
	  }
}
void ArrayPelicula::mostrarPeliculaEspesifica(int pos)
{
	vectorPelis[pos].informacionPelicula();
}
void ArrayPelicula::setCantidad(int cant) {
	this->cantidad = cant;
}
int ArrayPelicula::getCantidad() {
	return this->cantidad;
}

std::string ArrayPelicula::getNombreEspesifico(int pos)
{
	return vectorPelis[pos].getNombre();
}


