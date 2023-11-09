#include <iostream>
using namespace std;

class calzado {
private:
    string talla;
    int precio;
    string estilo;
public:
    // Constructor con todo incluido
    calzado(string tall, int pre, string est) : talla(tall), precio(pre), estilo(est) {};
    // Constructor con estilo predeterminado "Casual"
    calzado(string tall, int pre) : talla(tall), precio(pre), estilo("Casual") {};

    // Getters
    string get_talla();
    int get_precio();
    string get_estilo();
    // Setters
    void set_talla(string tall);
    void set_precio(int pre);
    void set_estilo(string est);
};

// Getters
string calzado::get_talla() {
    return talla;
}

int calzado::get_precio() {
    return precio;
}

string calzado::get_estilo() {
    return estilo;
}

// Setters
void calzado::set_talla(string tall) {
    talla = tall;
}

void calzado::set_precio(int pre) {
    precio = pre;
}

void calzado::set_estilo(string est) {
    estilo = est;
}
