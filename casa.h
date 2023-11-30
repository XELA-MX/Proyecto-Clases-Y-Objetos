#include <iostream>
#include "persona.h"

class Casa {
private:
	std::string direccion_;
	Persona* duenio_;
public:
	Casa(Persona* dueni) :direccion_("a"), duenio_(dueni) {};
	Casa(std::string direccion, Persona* duenio) : direccion_(direccion), duenio_(duenio) {}

	std::string get_direccion() { return direccion_; }
	Persona* get_duenio() { return duenio_; }
};