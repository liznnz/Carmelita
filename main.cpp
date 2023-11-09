/*
 * Proyecto Carmelita
 * Lizeth Niniz Corona
 * A01711740
 * 8/11/2023
 */

/**
 * Descripcion este es un proyecto demo para la clase de Pensamiento
 * Computacional Orientado a Objetos. Es un programa que calcula el
 * total de consumo por cliente u orden, pidiendo la cantidad de 
 * tipo de taco, piezas de pollo y enchiladas. En caso de no Pedir
 * de un tipo, se coloca 0.
*/


#include <iostream>
#include <iomanip>
#include "tacos.h" //objetos.
#include "enchiladas.h"
#include "pollo.h"


int main() {
    Tacos tacos;
    Enchiladas enchiladas;
    Pollo pollo;

    int opcion;
    double gananciaTotal = 0.0;

    do {
        // Menú
        std::cout << "\nMenú:\n" << std::endl;
        std::cout << "1. Pedir Tacos" << std::endl;
        std::cout << "2. Pedir Enchiladas" << std::endl;
        std::cout << "3. Pedir Pollo" << std::endl;
        std::cout << "4. Calcular Total" << std::endl;
        std::cout << "5. Salir" << std::endl;
        std::cout << "\nSeleccione una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                // Pedir Tacos
                int cantidadBistec, cantidadChorizo, cantidadTripita;
                std::cout << "Ingrese la cantidad de Tacos de Bistec: ";
                std::cin >> cantidadBistec;
                tacos.setCantidadBistec(cantidadBistec);

                std::cout << "Ingrese la cantidad de Tacos de Chorizo: ";
                std::cin >> cantidadChorizo;
                tacos.setCantidadChorizo(cantidadChorizo);

                std::cout << "Ingrese la cantidad de Tacos de Tripita: ";
                std::cin >> cantidadTripita;
                tacos.setCantidadTripita(cantidadTripita);
                break;

            case 2:
                // Pedir Enchiladas
                char opcionPollo;
                std::cout << "¿Desea Enchiladas con pollo? (S/N): ";
                std::cin >> opcionPollo;
                enchiladas.setConPollo(opcionPollo == 'S' || opcionPollo == 's');
                break;

            case 3:
                // Pedir Pollo
                int cantidadMedioPollo, cantidadPolloEntero, cantidadDosPiezas;
                std::cout << "Ingrese la cantidad de Medio Pollo: ";
                std::cin >> cantidadMedioPollo;
                pollo.setCantidadMedioPollo(cantidadMedioPollo);

                std::cout << "Ingrese la cantidad de Pollo Entero: ";
                std::cin >> cantidadPolloEntero;
                pollo.setCantidadPolloEntero(cantidadPolloEntero);

                std::cout << "Ingrese la cantidad de Dos Piezas de Pollo: ";
                std::cin >> cantidadDosPiezas;
                pollo.setCantidadDosPiezas(cantidadDosPiezas);
                break;

            case 4:
                // Calcular Total
                gananciaTotal = tacos.getCantidadBistec() * 8 + tacos.getCantidadChorizo() * 8 + tacos.getCantidadTripita() * 9 + enchiladas.getConPollo() * 45 + pollo.getCantidadMedioPollo() * 80 + pollo.getCantidadPolloEntero() * 160 + pollo.getCantidadDosPiezas() * 35;

                std::cout << "\nLa ganancia total es: $" << std::fixed << std::setprecision(2) << gananciaTotal << std::endl;
                break;
                
            case 5:
                std::cout << "Hasta luego.\n";
                break;

            default:
                std::cout << "Opcion invalida. Intente de nuevo.\n";
        }

    } while (opcion != 5);
    
    return 0;
}

