#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "./lib/SortedArray.hpp"

int main(){
    SortedArray bucket;
    int opc = 0;
    int aux_value = 0;
    int new_aux_value = 0;
    do{
        system("cls");
        std::cout << "Arreglos ordenados." << std::endl;
        std::cout << "Opciones" << std::endl;
        std::cout << "1. Insertar." << std::endl;
        std::cout << "2. Borrar." << std::endl;
        std::cout << "3. Modificar." << std::endl;
        std::cout << "4. Leer los datos." << std::endl;
        std::cout << "5. Salir." << std::endl;
        std::cin >> opc;
        switch(opc){
            case 1:
                std::cout << "Registrar nuevo valor." << std::endl;
                std::cout << "Ingresa el nuevo valor: "; std::cin >> aux_value;
                bucket._create(aux_value);
            break;
            case 2:
                std::cout << "Borrar un valor." << std::endl;
                std::cout << "Ingresa un numero: "; std::cin >> aux_value;
                bucket._delete(aux_value);
            break;
            case 3:
                std::cout << "Actualizar un valor." << std::endl;
                std::cout << "Ingresa el número a modificar: "; std::cin >> aux_value;
                std::cout << "Ingresa el valor númerico nuevo: "; std::cin >> new_aux_value;
                bucket._update(aux_value, new_aux_value);
            break;
            case 4:
                std::cout << "Mostrando todos los datos." << std::endl;
                bucket._showAll();
            break;
            case 5:
                std::cout << "Saliendo..." << std::endl;
            break;
        }
        system("pause");
    }while(opc != 5);
    return 0;
}