#include "Instituciones.h"
#include "Empleados.h"



Instituciones::Instituciones()
{
}


Instituciones::~Instituciones() {

}

void Instituciones::agregarEmpleado(Empleados *empleado, int posicion) {
	empleado->imprimirLaVara();
	empleados[posicion] = empleado;
}
