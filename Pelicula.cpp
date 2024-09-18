#include "Pelicula.h"

Pelicula::Pelicula() {
	this->name=" ";
	this-> age=0;
	this->duration = 0;
	this->country = " ";
	this->review = " ";
}
Pelicula::Pelicula(std::string nombre, int age, int duracion, std::string pais, std::string resena) {
	this->name = nombre;
	this->age = age;
	this->duration = duracion;
	this->country = pais;
	this->review = resena;
	
}

std::string Pelicula::getName() {
	return this->name;
}
std::string Pelicula::getReview() {
	return this->review;
}
int  Pelicula::getAge() {
	return this->age;
}
int  Pelicula::getDuration() {
	return this->duration;
}
std::string  Pelicula::getCountry() {
	return this->country;
}



void Pelicula::addNewMovie(int cantSala) {
	
	std::cout << "\nDigite el nombre de la pelicula:\n";
	std::cin >> this->name;
	std::cout << "\nDigite el ano de la pelicula:\n";
	std::cin >> this->age;
	std::cout << "\nDigite la duaracion de la pelicula:\n";
	std::cin >> this->duration;
	std::cout << "\nDigite el pais de la pelicula:\n";
	std::cin >> this->country;
	std::cout << "\nDigite una resena de la pelicula (SIN ESPACIOS) usar algun simbolo:\n";
	std::cin >> this->review;
	system("cls");
}
void Pelicula:: movieInformation() {

	std::cout << "\nNombre:\t " << this->name <<".";
	std::cout << "\nDuracion: " << this->duration << " min.";
	std::cout << "\nAno:\t " << this->age << ".";
	std::cout << "\nPais:\t " << this->country << ".";
	std::cout << "\nResena:\t " << this->review << ".\n";
}