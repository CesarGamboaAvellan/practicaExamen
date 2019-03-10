#pragma once
#include "Empleados.h"
#include <string>
class Instituciones
{
private:
	std::string nombre;
	Empleados* empleados[200];
public:
	void agregarEmpleado(Empleados*, int);
	Instituciones();
	~Instituciones();
};

