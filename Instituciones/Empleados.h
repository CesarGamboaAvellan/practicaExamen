#pragma once
#include <string>

class Empleados
{
private:
	std::string  nombre;
	std::string apellido;
	int identificacion;
	int salario;
	int codigo;
	int horas;
public:
	Empleados(std::string, std::string, int, int, int, int);
	void imprimirLaVara();
	void calcularSalario();
	~Empleados();
};

