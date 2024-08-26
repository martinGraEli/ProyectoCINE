
#include "Sistema.h"
#include "Pelicula.h"
#include "ArrayPelicula.h"
#include <iostream>

/*void pueba() {
    Pelicula peli;
  //(std::string nombre, int age, int duracion, std::string pais, std::string resena)
    Pelicula peli1("anaconda", 2009, 121, "brazil", "grupo de amigos por el amazona");
    std::cout << "\n\n";
    peli.informacionPelicula();
    std::cout << "\n\n";
    peli1.informacionPelicula();
//crear ops como puntero
   // int ops;

   // Sistema menuu;
   /* do {
        menuu.menuPrincipal(&ops);


        menuu.menuSecundario(&ops);

    }while (ops != 0);*/
    

int main(){
   // std::string nombre, int age, int duracion, std::string pais, std::string resena)
    Pelicula peli("moana",2017,122,"nica","pelicula para ven en familia");
    Pelicula peli2("anaconda", 2010, 122, "brazil", "accion");
    Pelicula peli3("huevos", 2006, 112, "animada", "pelicula para ven en familia");
    ArrayPelicula vectorPelis;

    vectorPelis.agregarPelicula(peli);
    vectorPelis.agregarPelicula(peli2);
    vectorPelis.agregarPelicula(peli3);
    vectorPelis.mostrarVectorPelis();
}

