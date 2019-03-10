#include "Empleados.h"
#include <string>
#include <iostream>



Empleados::Empleados(std::string nomb,
	std::string apell,
	int id, int sal, int cod, int h):
	nombre(nomb),
	apellido(apell),
	identificacion(id),
	salario(sal),
	codigo(cod),
	horas(h)
{
}


Empleados::~Empleados()
{
}
void Empleados::calcularSalario() {
	if (codigo == 1) {
		std::cout << "codigo 1";
	}
	else {
		std::cout << "codigo 2";
	}
}
void Empleados::imprimirLaVara() {
	std::cout << nombre << "\t";
	std::cout << apellido << "\t";
	std::cout << salario << "\t";
	std::cout << identificacion << "\n";
}
