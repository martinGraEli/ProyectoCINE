
#include "Sistema.h"
#include <iostream>

int main()
{//crear ops como puntero 
    int ops;

    Sistema menuu;
    do {
        menuu.menuPrincipal(&ops);
      

        menuu.menuSecundario(&ops);
      
    }while (ops != 0);
}

