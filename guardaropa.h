#include<list>
#include "ropa.h"

class Guardarropa {
private:
    std::list<Ropa*> ropa;

public:
    Guardarropa() {}

    void agregar_ropa(Ropa* ropa) {
        this->ropa.push_back(ropa);
    }

    void eliminar_ropa(Ropa* ropa) {
        this->ropa.remove(ropa);
    }

    int calcular_valor_total() {
        int total = 0;
        for (Ropa* prenda : this->ropa) {
            total += prenda->getPrecio();
        }
        return total;
    }
};