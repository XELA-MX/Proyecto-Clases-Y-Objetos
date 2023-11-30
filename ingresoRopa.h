#include <iostream>
#include "ropa.h"

class IngresoDeRopa {
private:
    Ropa* ropa;
    int cantidad;
    std::string tipo;

public:

    IngresoDeRopa(Ropa* rop, int cantida, std::string tip) : ropa(rop), cantidad(cantida), tipo(tip) {
    };

    Ropa* get_ropa() { return ropa; }
    int get_cantidad() { return cantidad; }
    std::string get_tipo() { return tipo; }

    void a() {
        cout << "Esta nuevo : " << ropa->get_isNew() << endl;
        cout << "Marca: " << ropa->get_marca() << endl;
        cout << "Material: " << ropa->get_material() << endl;
        cout << "Precio: " << ropa->get_precio() << endl;
    }
};