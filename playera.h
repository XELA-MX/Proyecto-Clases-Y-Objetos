#include <iostream>

using namespace std;

class t_shirt {
private:
	string talla;
	int precio;
	string tipo;
public:
	//Constructor con todo incluido
	t_shirt(string tall, int pre, string tip) : talla(tall), precio(pre), tipo(tip) {};
	//constructor con tipo defult de tipo = Camisa
	t_shirt(string tall, int pre) : talla(tall), precio(pre), tipo("Camisa") {};

	//getters
	string get_talla();
	int get_precio();
	string get_tipo();
	//setters
	void set_talla(string tall);
	void set_precio(int pre);
	void set_tipo(string tip);
};
//getters
string t_shirt::get_talla() {
	return talla;
}

int t_shirt::get_precio() {
	return precio;
}

string t_shirt::get_tipo() {
	return tipo;
}

//setters

void t_shirt::set_talla(string tall) {
	talla = tall;
}

void t_shirt::set_precio(int pre) {
	precio = pre;
}

void t_shirt::set_tipo(string tip) {
	tipo = tip;
}