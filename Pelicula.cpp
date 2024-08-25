#include "Pelicula.h"

Pelicula::Pelicula() {
	this->nombre=" ";
	this-> age=0;
	this->duracion = 0;
	this->pais = " ";
	this->resena = " ";
}
Pelicula::Pelicula(std::string nombre, int age, int duracion, std::string pais, std::string resena) {
	this->nombre = nombre;
	this->age = age;
	this->duracion = duracion;
	this->pais = pais;
	this->resena = resena;
}
std::string Pelicula::getNombre() {
	return this->nombre;
}
std::string Pelicula::getResena() {
	return this->resena;
}
int  Pelicula::getAge() {
	return this->age;
}
int  Pelicula::getDuracion() {
	return this->duracion;
}
std::string  Pelicula::getPais() {
	return this->pais;
}

void Pelicula::addNewPelicula() {

	std::cout << "\nDigite el nombre de la pelicula:\n";
	std::cin >> this->nombre;
	std::cout << "\nDigite el ano de la pelicula:\n";
	std::cin >> this->age;
	std::cout << "\nDigite la duaracion de la pelicula:\n";
	std::cin >> this->duracion;
	std::cout << "\nDigite el pais de la pelicula:\n";
	std::cin >> this->pais;
	std::cout << "\nDigite una resena de la pelicula:\n";
	std::cin >> this->resena;
	system("cls");
}
void Pelicula:: informacionPelicula() {
	std::cout << "\nNombre:\t " << this->nombre <<".";
	std::cout << "\nDuracion:\t " << this->duracion << ".";
	std::cout << "\nAno:\t " << this->age << ".";
	std::cout << "\nPais:\t " << this->pais << ".";
	std::cout << "\nResena:\t " << this->resena << ".\n";
}