/*
Emilio Antonio Peralta Montiel
A01712354
*/

#include <iostream>
#include "playera.h"
#include <string>
#include <Windows.h>
#include <vector>
#include "jean.h"
#include "calzado.h"
using namespace std;


void menu() {
	system("cls");
	string modulos[3] = { "1) Crear e imprimir nuevo articulo" , "2) Ver Articulos" , "0) Salir"};
	cout << "------------- Proyecto Avance 1 -------------\n\nEmilio Antonio Peralta Montiel-A01712354\n" << endl;
	for (int i = 0; i < 3; i++) {
		cout  << modulos[i] << endl;
	}
}

int main()
{
	system("color 70");
	vector<t_shirt> vectorPlayera;
	vector<jean> vectorJean;
	vector<calzado> vectorCalzado;
	string sel;
	bool continua = true;
	//CREAR 3 TIPOS DE PLAYERA
	t_shirt s1("S", 500, "Polo");
	t_shirt s2("XL", 1200, "Camisa");
	t_shirt s3("XG", 3000, "Gucci");
	vectorPlayera.emplace_back(s1);
	vectorPlayera.emplace_back(s2);
	vectorPlayera.emplace_back(s3);
	//crear JEANS
	jean j1("20X20", 1050, "Skinny");
	jean j2("20X20", 700, "Cargo");
	jean j3("20X20", 600, "Palazzo");
	vectorJean.emplace_back(j1);
	vectorJean.emplace_back(j2);
	vectorJean.emplace_back(j3);
	//calzado
	calzado c1("20", 8000, "Deportivo");
	calzado c2("30", 3000, "Senderismo");
	calzado c3("27", 2000, "Elegante");
	vectorCalzado.emplace_back(c1);
	vectorCalzado.emplace_back(c2);
	vectorCalzado.emplace_back(c3);
	while (continua)
	{
		//función menú
		menu();
		cout << "\nDeme su opcion: "; getline(cin, sel);
		if (sel == "1") {
			system("cls");
			cout << "Bien empecemos escogiendo que quieres crear!" << endl;
			string creaciones[3] = { "1) Jeans" , "2) Playera" , "3) Calzado" };
			string tipoDeCreacion;
			for (int i = 0; i < 3; i++) {
				cout << creaciones[i] << endl;
			}
			cout << "Ingrese su opcion: "; getline(cin, tipoDeCreacion);
			if (tipoDeCreacion == "1") {
				int tempPrecio1;
				string tempTalla1;
				string tempTipo1;
				system("cls");
				cout << "Bien creemos un Jean!\n\nSe te pediran diversos input" << endl;
				cout << "Ingrese el precio [Ej. 1200 , 1300 , 500] : "; cin >> tempPrecio1;
				cout << "Ingrese la talla [Ej. 30x32 , 31x40 , 40x50]: "; cin >> tempTalla1;
				cout << "Ingrese el tipo de playera [Ej. Recto , Capri , Skinny]: "; cin >> tempTipo1;
				jean jeanCreado(tempTalla1, tempPrecio1, tempTipo1);
				system("cls");
				cout << "\nPlayera recien creada:\n" << endl;
				cout << "Precio: " << jeanCreado.get_precio() << endl;
				cout << "Tipo: " << jeanCreado.get_estilo() << endl;
				cout << "Talla: " << jeanCreado.get_talla() << endl;
				vectorJean.emplace_back(jeanCreado);
				Sleep(3000);
			}
			else if (tipoDeCreacion == "2") {
				int tempPrecio;
				string tempTalla;
				string tempTipo;
				system("cls");
				cout << "Bien creemos una Playera!\n\nSe te pediran diversos input" << endl;
				cout << "Ingrese el precio [Ej. 1200 , 1300 , 500] : "; cin >> tempPrecio;
				cout << "Ingrese la talla [Ej. S , XS , L]: "; cin >> tempTalla;
				cout << "Ingrese el tipo de playera [Ej. Polo , camisa , camiseta]: "; cin >> tempTipo;
				t_shirt playeraCreada(tempTalla, tempPrecio, tempTipo);
				system("cls");
				cout << "\nPlayera recien creada:\n" << endl;
				cout << "Precio: " << playeraCreada.get_precio() << endl;
				cout << "Tipo: " << playeraCreada.get_tipo() << endl;
				cout << "Talla: " << playeraCreada.get_talla() << endl;
				vectorPlayera.emplace_back(playeraCreada);
				Sleep(3000);
			}
			else if (tipoDeCreacion == "3") {
				int tempPrecio2;
				string tempTalla2;
				string tempTipo2;
				system("cls");
				cout << "Bien creemos una Playera!\n\nSe te pediran diversos input" << endl;
				cout << "Ingrese el precio [Ej. 1200 , 1300 , 500] : "; cin >> tempPrecio2;
				cout << "Ingrese la talla [Ej. 20 , 21 , 22]: "; cin >> tempTalla2;
				cout << "Ingrese el tipo de playera [Ej. Casual , Zapato , Chanclas]: "; cin >> tempTipo2;
				calzado calCreado(tempTalla2, tempPrecio2, tempTipo2);
				system("cls");
				cout << "\nPlayera recien creada:\n" << endl;
				cout << "Precio: " << calCreado.get_precio() << endl;
				cout << "Tipo: " << calCreado.get_estilo() << endl;
				cout << "Talla: " << calCreado.get_talla() << endl;
				vectorCalzado.emplace_back(calCreado);
				Sleep(3000);
			}
			else {
				system("cls");
				cout << "\n\nEso no existe!" << endl;
				Sleep(1000);
			}
		}
		else if (sel == "2") {
			system("cls");
			cout << "----------Playeras----------: " << endl;
			for (int i = 0; i < vectorPlayera.size(); i++) {
				cout << "==Playera #" << i + 1 << "==: " << endl;
				cout << "Precio: " << vectorPlayera[i].get_precio() << endl;
				cout << "Talla: " << vectorPlayera[i].get_talla() << endl;
				cout << "Tipo: " << vectorPlayera[i].get_tipo() << "\n\n" << endl;
			}
			cout << "----------Jeans----------: " << endl;
			for (int i = 0; i < vectorJean.size(); i++) {
				cout << "==Jean #" << i + 1 << "==: " << endl;
				cout << "Precio: " << vectorJean[i].get_precio() << endl;
				cout << "Talla: " << vectorJean[i].get_talla() << endl;
				cout << "Tipo: " << vectorJean[i].get_estilo() << "\n\n" << endl;
			}
			cout << "----------Calzado----------: " << endl;
			for (int i = 0; i < vectorCalzado.size(); i++) {
				cout << "==Calzado #" << i + 1 << "==: " << endl;
				cout << "Precio: " << vectorCalzado[i].get_precio() << endl;
				cout << "Talla: " << vectorCalzado[i].get_talla() << endl;
				cout << "Tipo: " << vectorCalzado[i].get_estilo() << "\n\n" << endl;
			}
			system("pause");
		}
		else if (sel == "0") {
			continua = false;
		}
		else {
			cout << "\nOpcion no encontrada!" << endl;
			Sleep(1000);
		}
	}


}