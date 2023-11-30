#include <iostream>
using namespace std;

class jean {
private:
    string talla;
    int precio;
    string estilo;
public:
    // Constructor con todo incluido
    jean(string tall, int pre, string est) : talla(tall), precio(pre), estilo(est) {};
    // Constructor con estilo predeterminado "Recto"
    jean(string tall, int pre) : talla(tall), precio(pre), estilo("Recto") {};

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
string jean::get_talla() {
    return talla;
}

int jean::get_precio() {
    return precio;
}

string jean::get_estilo() {
    return estilo;
}

// Setters
void jean::set_talla(string tall) {
    talla = tall;
}

void jean::set_precio(int pre) {
    precio = pre;
}

void jean::set_estilo(string est) {
    estilo = est;
}