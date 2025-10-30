//Ingresar por teclado las notas de los 50 alumnos de las 4 comisiones de algoritmos 1, generar una matriz de 50x4
//Obtener el promedio de notas por comision y cargar en un vector
//Hallar la comision que obtubo el menor promedio, mostrar por pantalla la comision del y el promedio
//Calcular el porcentaje de alumnos aprobados respecto del total, mostrar por pantalla.
//Calcular la cantidad de alumnos desaprobados, mostrar por pantalla.

#include <stdio.h>

typedef int tm_matriz[3][2];
tm_matriz vm_notas;
int i, j;
typedef int tv_vector[3];

	void cargar_matriz();
	void finalizar_proceso();

int main(){
	void cargar_matriz();
	
	
}

void cargar_matriz(){
	printf("Ingresar notas de alumno: ");
	for (i=0; i < 3; i++){
	for (j=0; j < 2; j++){
		printf ("Promedio de aprobados %d-%d: ",i+1, j+1);
		scanf("%d",&vm_notas[i][j]);
		
	}
	}
	
}



