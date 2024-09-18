#include "Sistema.h"
void Sistema::infoEstudiante() {
	std::cout<<"\tCreador:   Martin Granados Elizondo.\n";
	std::cout << "\tEstudiante de la Universidad Nacional.\n";
	std::cout << "\tCarrera:  Ingenieria en Sistemas.\n";
	std::cout << "\tCurso:   Programacion I.\n";
	system("pause");
	system("cls");
}

void Sistema::mainMenu(int *ops) {
	system("cls");
		std::cout<<("\t-_-_-Menu Principal-_-_-\n\n");
	
		std::cout << ("  \t\t1)  Archivo\n");
		std::cout << (" \t \t2)  Mantenimiento\n");
		std::cout << (" \t \t3)  Reserva\n");
		std::cout << ("  \t\t4)  Venta\n\n\n");
		std::cin >> *ops;
		//system("pause");
		system("cls");
}



void Sistema::fileMenu(int *ops) {
	
	do {
		std::cout << "Digite la opcion de la accion que desea realizar\n";
		std::cout << "1. Acerca de\n2. Volver al menu Principal\n3. Salir del sistema\n";
		std::cin >> *ops;
		system("cls");
		if (*ops == 1) {
			infoEstudiante();

			system("cls");
		}
		 else if (*ops == 3) {
			*ops = 0;
		}
	
		
	}while(*ops != 0 && *ops!= 3 && *ops != 2);
}		

int Sistema::MaintenanceMenu()
{
	system("cls"); int opsi;
	std::cout << "1) Pelicula\n2) Salas\n3) Horarios\n";
	std::cin>>opsi;

	return opsi;
}
