
#include "Sistema.h"
#include <iostream>

int main()
{//crear ops como puntero 
    int ops;
    int ;

    Sistema menuu;
    do {
        menuu.menuPrincipal();
        std::cin >> ops;

        menuu.menuSecundario(ops);
        switch (ops != 0) {

        case 1:    break;

        case 2:    break;
        case 3:    break;
        case 4:    break;
        }
    }while (ops != 0);
}

