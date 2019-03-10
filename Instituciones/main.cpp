#include "Instituciones.h"
#include <fstream>
#include <string>
#include <iostream>
#include <sstream> 

int main() {
	Instituciones** institucion = new Instituciones*[3];
	std::string  nombre;
	std::string apellido;
	std::string _identificacion;
	std::string _salario;
	std::string _codigo;
	std::string _horas;
	std::ifstream entrada;
	entrada.open("Bomberos.txt");
	    if(entrada.good()){
        std::cout << "File has been opened\n";
        while(!entrada.eof()){
            
            std::getline(entrada, _identificacion,'\t');
            std::getline(entrada,apellido,'\t');
            std::getline(entrada,nombre,'\t');
            std::getline(entrada, _codigo,'\t');
			std::getline(entrada, _salario, '\t');
			std::getline(entrada, _horas, '\n');
			int i = 0;
			int salario;
			int codigo;
			int horas;
			int identificacion;
			std::stringstream identificationToInt;
            std::stringstream codigoToInt;
			std::stringstream salarioToInt;
			std::stringstream horasToInt;
			codigoToInt << _codigo;
			codigoToInt >> codigo;
			identificationToInt << _identificacion;
			identificationToInt >> identificacion;
			codigoToInt << _codigo;
			codigoToInt >> codigo;
			salarioToInt << _salario;
			salarioToInt >> salario;
			horasToInt << _horas;
			horasToInt >> horas;
            try{
                if(!(codigoToInt << codigo)){
                   throw -1; 
                }
				if (!(horasToInt << horas)) {
					throw - 1;
				}
				if (!(salarioToInt << salario)) {
					throw - 1;
				}
				if (!(identificationToInt << identificacion)) {
					throw - 1;
				}
				else{
					Empleados empleado(nombre,
						apellido,
						identificacion,
						salario,
						codigo,
						horas);
					institucion[1]->agregarEmpleado(&empleado, i);
                }
   
            }
            catch(int excepcion){
                std::cout <<"Datos invalidos...\n";
            }
            
            i++;            
        }
    }else{
        std::cout << "File hasn't been opened\n";
    }
}