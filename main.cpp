
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
    ArrayButaca arraySeats;
    ArrayCompras arrayPurchases;
   
    int numberOfRooms = 0;
    int chooseMovieNumber;
    int chooseMovieTime;
    int chooseSeat=0;

   
   
  
  
     int option;
    Sistema sistemita;
    do {
        system("cls");
        sistemita.mainMenu(&option);
       // sistemita.menuSecundario(&opcion);
        
        switch (option) {

        case 1:
            sistemita.fileMenu(&option);
            system("pause");
            break;
        case 2:
            option = sistemita.MaintenanceMenu();
            system("cls");
            if (option == 1) {
                if (numberOfRooms != 0) {
                    arrayMovie.addMovie(numberOfRooms);
                }
                else { std::cout << "No hay salas creadas, Favor ir al apartado de sala y crear alguna.\n"; }
            }
            else if (option == 2) {
                int pricee;
                
                std::cout << "Debido a que el cine fue recientemte abierto tendremos disponible una uniaca sala y una misma cantidad de butacas...\n";
                numberOfRooms++;
                std::cout << "Digite el precio tendra la sala\n";
                std::cin >> pricee;
                arraySeats.setPrice(pricee);

            
            }
            else if (option == 3) {
                arrayMovie.showVectorMovies();
                arrayHours.addShedule();
            } 
            system("pause");
            break;
        case 3: 
           
            arrayMovie.showVectorMovies();
            std::cout <<"Digite el numero de la pelicula que desea ver\n";
            std::cin >> chooseMovieNumber;
            system("cls");
            std::cout << "La informacion de la pelicula es:\n";
            arrayMovie.showSpecificMovie(chooseMovieNumber);
            std::cout << "Los Horarios de dicha peli son:\n";
            arrayHours.printSpecificShedule(arrayMovie.getSpecificName(chooseMovieNumber));
            std::cin >> chooseMovieTime;
            system("cls");
            arraySeats.printSeats();
            std::cout << "escoja el numero de butaca que desea reservar.\n";
            std::cin >> chooseSeat;
            system("cls");
            std::cout << "El Precio es de: " << arraySeats.getPrice() << std::endl;
            arraySeats.modifyseat(chooseSeat);
            std::cout << "FAVOR GUARDAR O APUNTAR.\nSu consecutivo o factura para poder cancelar la compra es : " << arraySeats.getconsecutive(chooseSeat) << std::endl;
            arrayPurchases.addNewReserve(arraySeats.getconsecutive(chooseSeat));
            system("pause");
            break;
        case 4:
            int confirmacionConsecutivo;
            std::string id, numTargeta;
            std::cout << "Digite el consecutivo que se le brindo a la hora de la reserva.\n";
            std::cin >> confirmacionConsecutivo;
            if (confirmacionConsecutivo == arraySeats.compareConsecutive(confirmacionConsecutivo)) {
                std::cout << "Digite su ID\n";
                std::cin >> id;
                std::cout << "Digite su numero de targeta\n";
                std::cin >> numTargeta;
                arrayPurchases.addNewPurchases(id, numTargeta, confirmacionConsecutivo);
                arraySeats.modifySeatByCode(confirmacionConsecutivo);
            }
            
            system("pause");
            break;
        }
    } while (option != 0);
    
}

