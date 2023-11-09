

#include <iostream>
#include <iomanip>

class Tacos {
private:
    int cantidadBistec;
    int cantidadChorizo;
    int cantidadTripita;

public:
    // Constructor
    Tacos() : cantidadBistec(0), cantidadChorizo(0), cantidadTripita(0) {}

    // Getters
    int getCantidadBistec() const {
        return cantidadBistec;
    }

    int getCantidadChorizo() const {
        return cantidadChorizo;
    }

    int getCantidadTripita() const {
        return cantidadTripita;
    }

    // Setters
    void setCantidadBistec(int cantidad) {
        cantidadBistec = cantidad;
    }

    void setCantidadChorizo(int cantidad) {
        cantidadChorizo = cantidad;
    }

    void setCantidadTripita(int cantidad) {
        cantidadTripita = cantidad;
    }
};

class Enchiladas {
private:
    bool conPollo;

public:
    // Constructor
    Enchiladas() : conPollo(false) {}

    // Getter
    bool getConPollo() const {
        return conPollo;
    }

    // Setter
    void setConPollo(bool tienePollo) {
        conPollo = tienePollo;
    }
};

class Pollo {
private:
    int cantidadMedioPollo;
    int cantidadPolloEntero;
    int cantidadDosPiezas;

public:
    // Constructor
    Pollo() : cantidadMedioPollo(0), cantidadPolloEntero(0), cantidadDosPiezas(0) {}

    // Getters
    int getCantidadMedioPollo() const {
        return cantidadMedioPollo;
    }

    int getCantidadPolloEntero() const {
        return cantidadPolloEntero;
    }

    int getCantidadDosPiezas() const {
        return cantidadDosPiezas;
    }

    // Setters
    void setCantidadMedioPollo(int cantidad) {
        cantidadMedioPollo = cantidad;
    }

    void setCantidadPolloEntero(int cantidad) {
        cantidadPolloEntero = cantidad;
    }

    void setCantidadDosPiezas(int cantidad) {
        cantidadDosPiezas = cantidad;
    }
};


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

