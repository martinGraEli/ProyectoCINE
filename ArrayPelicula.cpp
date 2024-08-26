#include "ArrayPelicula.h"
ArrayPelicula::ArrayPelicula() {
	this->vectorPelis = new Pelicula[sizeMax];
	for (int i = 0; i < sizeMax; i++) {
		vectorPelis[i] = Pelicula();
	}
 }
void ArrayPelicula::agregarPelicula(Pelicula peli)//hay que crear la pelicula por medio del constructor
{
	vectorPelis[this->cantidad] = peli;
	cantidad=cantidad + 1;
}
void ArrayPelicula::mostrarVectorPelis() {
	for (int i = 0; i< cantidad; i++) {
		std::cout << "\n\n\n\tPelicula #: \t" << i;
		vectorPelis[i].informacionPelicula();
	  }
}
void ArrayPelicula::setCantidad(int cant) {
	this->cantidad = cant;
}
int ArrayPelicula::getCantidad() {
	return this->cantidad;
}
