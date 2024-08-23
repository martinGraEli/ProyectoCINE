#include "Sistema.h"

void Sistema::menuPrincipal() {

		std::cout<<("\t-_-_-Menu Principal-_-_-\n\n");
	
		std::cout << ("  \t\t1)  Archivo\n");
		std::cout << (" \t \t2)  Mantenimiento\n");
		std::cout << (" \t \t3)  Reserva\n");
		std::cout << ("  \t\t4)  Venta\n\n\n");
}
void Sistema::menuSecundario(int opcion) {
	switch (opcion != 0) {

	case 1:    break;

	case 2:    break;
	case 3:    break;
	case 4:    break;
	}
}
void Sistema::menuArchivo() {
	int ops;
	do {
		std::cout << "Digite la opcion de la accion que desea realizar \n";
		std::cout<<"1. Acerca de\n\n 2. Salir"
	}while(ops != 0);
}
