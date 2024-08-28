#include "Sala.h"
Sala::Sala(int fil, int col, int precio) {
	this->fila = fil;
	this->col = col;
	this->precio = precio;
	this->matrizSala = new Asiento * [fila];
	for (int i = 0; i < fila; i++) {
		this->matrizSala[i] = new Asiento[col];
	}
	for (int i = 0; i < fila; i++) {
		for (int j = 0; j < col; j++) {
			this->matrizSala[i][j] = Asiento();
		}
	}
}
void Sala::modificarEstadoAsiento(int fil, int col) {
	if (fil < this->fila && this->col > col) {
		this->matrizSala[fil][col].modificarEstado();
	}
}
void Sala::mostrarSalaPruba(){
	for (int i = 0; i < this->fila; i++) {
		for (int j = 0; j < this->col; j++) {
			std::cout<<matrizSala[i][j].getEstado()<<" ";
		}
		std::cout << "\n";
	}
	std::cout << getPrecio();

}
int Sala::getPrecio() {
	return this->precio;
}
	
