
#include "Sistema.h"
#include "Pelicula.h"
#include "ArrayPelicula.h"
#include "ArrayHorario.h"

#include <iostream>
#include "ArrayButaca.h"
#include "ArrayCompras.h"


int main(){
    ArrayPelicula arrayMovie;
    ArrayHorario arrayHours;
    ArrayButaca arrayButaca;
    ArrayCompras arrayCompras;
   
    int cantidadSalas = 0;
    int escojerNumeroPeli;
    int escojerHorarioPeli;
    int escogerButaca=0;

   
   
  
  
     int opcion;
    Sistema sistemita;
    do {
        sistemita.menuPrincipal(&opcion);
       // sistemita.menuSecundario(&opcion);
        
        switch (opcion) {

        case 1:
            sistemita.menuArchivo(&opcion);
            system("pause");
            break;
        case 2:
            opcion = sistemita.menuMantenimiento();
            if (opcion == 1) {
                if (cantidadSalas != 0) {
                    arrayMovie.agregarPelicula(cantidadSalas);
                }
                else { std::cout << "No hay salas creadas, Favor ir al apartado de sala y crear alguna.\n"; }
            }
            else if (opcion == 2) {
                int pre;
                
                std::cout << "\tDebido a que el cine fue recientemte abierto tendremos disponible una uniaca sala y una misma cantidad de butacas...\n";
              
                cantidadSalas++;
                std::cout << "Digite el precio tendra la sala\n";
                std::cin >> pre;
                arrayButaca.setPrecio(pre);
            
            }
            else if (opcion == 3) {
                arrayHours.agregarHorario();
            } 
            system("pause");
            break;
        case 3: 
           
            arrayMovie.mostrarVectorPelis();
            std::cout <<"Digite el numero de la pelicula que desea ver\n";
            std::cin >> escojerNumeroPeli;
            std::cout << "La informacion de la pelicula es:\n";
            arrayMovie.mostrarPeliculaEspesifica(escojerNumeroPeli);
            std::cout << "Los Horarios de dicha peli son:\n";
            arrayHours.printEspesificoHorario(arrayMovie.getNombreEspesifico(escojerNumeroPeli));
            std::cin >> escojerHorarioPeli;
            arrayButaca.printButacas();
            std::cout << "escoja el numero de butaca que desea reservar.\n";
            std::cin >> escogerButaca;
            std::cout << "El Precio es de: " << arrayButaca.getPrecio() << std::endl;
            arrayButaca.modificarAsiento(escogerButaca);
            std::cout << "FAVOR GUARDAR O APUNTAR.\nSu consecutivo o factura para poder cancelar la compra es : " << arrayButaca.getConsecutivo(escogerButaca) << std::endl;
            arrayCompras.addNewReserva(arrayButaca.getConsecutivo(escogerButaca));
            system("pause");
            break;
        case 4:
            int confirmacionConsecutivo;
            std::string id, numTargeta;
            std::cout << "Digite el consecutivo que se le brindo a la hora de la reserva.\n";
            std::cin >> confirmacionConsecutivo;
            if (confirmacionConsecutivo == arrayButaca.comprarConsecutivo(confirmacionConsecutivo)) {
                std::cout << "Digite su ID\n";
                std::cin >> id;
                std::cout << "Digite su numero de targeta\n";
                std::cin >> numTargeta;
                arrayCompras.addNewCompra(id, numTargeta, confirmacionConsecutivo);
                arrayButaca.modificarAsientoPorCodigo(confirmacionConsecutivo);
            }
            
            system("pause");
            break;
        }
    } while (opcion != 0);
    
}

