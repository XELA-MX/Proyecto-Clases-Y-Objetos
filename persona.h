#pragma once

#include <iostream>

class Persona {
public:
	Persona(std::string nombre, int edad) : nombre_(nombre), edad_(edad) {}

	std::string get_nombre() { return nombre_; }
	int get_edad() { return edad_; }

private:
	std::string nombre_;
	int edad_;
};