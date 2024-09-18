#pragma once

#ifndef PELICULA_H
#define PELICULA_H
#include <iostream>
//#include "ArrayHorario.h"

class Pelicula {

private:
	std::string name;
	int age;
	int duration;
	std::string country;
	std::string review;
	
	
	

public:
	Pelicula();
	Pelicula(std::string, int, int, std::string, std::string);
	std::string getName();
	std::string getReview();
	int getAge();
	int getDuration();
	std::string getCountry();
	void addNewMovie(int);
	void movieInformation(); 
	
	
 };

#endif //PELICULA_H