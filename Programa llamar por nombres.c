#include <stdio.h>

char main (){
void ImprimeEmpleadoV()
{
	cout << "Nombre: " << e.nombre << endl;
	cout << "Edad: " << e.edad << endl;
	cout << "Sexo: " << e.sexo << endl;

}

// Parametro empleado pasado por referencia
void ImprimeEmpleadoR( empleado &e )
{
	cout << "Nombre: " << e.nombre << endl;
	cout << "Edad: " << e.edad << endl;
	cout << "Sexo: " << e.sexo << endl;

}

// Parametro empleado pasado como puntero
void ImprimeEmpleadoP( empleado *e )
{
	cout << "Nombre: " << e->nombre << endl;
	cout << "Edad: " << e->edad << endl;
	cout << "Sexo: " << e->sexo << endl;
}
	

return 0;}

