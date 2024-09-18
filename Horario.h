#pragma once
#include <iostream>
#include "Pelicula.h"

class Horario 
{
private: 
	std::string nameMovieTime;
	std::string day;

	int startTime;
	int initialMinutes;

	int finalHour;
	int finalMinutes;

public:
	
	Horario();
	void setNameMovieTime(std::string);
	void setDay(std::string);
	void setStartTime(int);
	void setInitialMinutes(int);

	
	void setFinalMinuteAndHour(Pelicula);
	

	std::string getDay();

	std::string getNameMovieTime();
	int getStartTime();
	int getInitialMinutes();

	int getFinalHour();
	int getFinalMinutes();
	
	void printSchedule();
};

