#pragma once
#include <iostream>

class Ropa{
private:
	std::string precio;
	bool is_new;
	std::string material;
	std::string marca;
public:
	Ropa(std::string preci, bool isNew, std::string mat, std::string marc) :precio(preci), is_new(isNew), material(mat) {};
	//Todo incluido de forma generica.
	Ropa() : precio("500"), is_new(true), material("Algodón") {};

	//GETTERS
	std::string get_precio() {
		return precio;
	}
	bool get_isNew() {
		return is_new;
	}
	std::string get_material() {
		return material;
	}
	std::string get_marca() {
		return marca;
	}

	//SETTERS
	void set_precio(int pre) {
		precio = pre;
	}

	void set_is_new(bool isnew) {
		is_new = isnew;
	}

	void set_material(std::string mat) {
		material = mat;
	}
	void set_marca(std::string marc) {
		marca = marc;
	}
};