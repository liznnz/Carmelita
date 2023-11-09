#ifndef POLLO_H_
#define POLLO_H_

#include <iomanip>

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



#endif // pollo_h_
