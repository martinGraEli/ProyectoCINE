#include "Sistema.h"
void Sistema::infoEstudiante() {
	std::cout<<"\tCreador:   Martin Granados Elizondo.\n";
	std::cout << "\tEstudiante de la Universidad Nacional.\n";
	std::cout << "\tCarrera:  Ingenieria en Sistemas.\n";
	std::cout << "\tCurso:   Programacion I.\n";
	system("pause");
	system("cls");
}

void Sistema::menuPrincipal(int *ops) {

		std::cout<<("\t-_-_-Menu Principal-_-_-\n\n");
	
		std::cout << ("  \t\t1)  Archivo\n");
		std::cout << (" \t \t2)  Mantenimiento\n");
		std::cout << (" \t \t3)  Reserva\n");
		std::cout << ("  \t\t4)  Venta\n\n\n");
		std::cin >> *ops;
		//system("pause");
		system("cls");
}
void Sistema::menuSecundario(int *opcion) {
	switch (*opcion != 0) {

	case 1:
		menuArchivo(opcion);
		system("pause");
		break;
	case 2:
	}
}
void Sistema::menuArchivo(int *ops) {
	
	
	do {
		std::cout << "Digite la opcion de la accion que desea realizar \n";
		std::cout << "1. Acerca de\n\n 2. Salir";
		std::cin >> *ops;
		system("cls");
		if (*ops == 1) {
			infoEstudiante();

			system("cls");
		}
		 else if (*ops == 2) {
			*ops = 0;
		}
	
		
	}while(*ops != 0);
}

