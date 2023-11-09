#ifndef ENCHILADAS_H_
#define ENCHILADAS_H_

#include <iomanip>

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

#endif // enchiladas_h_
