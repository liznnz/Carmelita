#ifndef enchiladas_h_
#define enchiladas_h_

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
