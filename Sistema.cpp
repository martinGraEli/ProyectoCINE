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

void Sistema::menuSecundario(int *opcion) {
	
	switch (*opcion) {
	
	case 1:
		menuArchivo(opcion);
		system("pause");
		break;
	case 2:
		menuMantenimiento();
		system("pause");
		break;
	case 3:
		menuReserva();
		system("pause");
		break;
	case 4:
		menuVenta();
		system("pause");
		break;
	}
}

void Sistema::menuArchivo(int *ops) {
	
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

/*falta hacerlo*/void Sistema::menuMantenimiento()
{
	system("cls");
	std::cout << "\n PROXIMAMENTE\tse incluira en mantenimiento las opciones de:\n\t\tPeliculas.\n\t\tSalas.\n\t\tHorarios;\n\n\n";
	
	
} 

/*falta hacerlo*/void Sistema::menuReserva() {
	//system("cls");
	std::cout << "\n PROXIMAMENTE\t se incluira la opcion de:\n\t\tReserva Peliculas.\n\n\n";

}

/*falta hacerlo*/void Sistema::menuVenta() {
	system("cls");
	std::cout << "\n PROXIMAMENTE\t se incluira la opcion de\n\t\tVenta de Peliculas.\n\n\n";

}