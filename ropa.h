#include <iostream>

class Ropa {
private:
	int precio;
	bool is_new;
	std::string material;
	std::string marca;
public:
	//GETTERS
	int get_precio() {
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