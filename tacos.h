#ifndef TACOS_H_
#define TACOS_H_

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

#endif // tacos_h_
