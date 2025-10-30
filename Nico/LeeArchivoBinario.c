#include <stdio.h>
/* lee datos de alumnos de un archivo binario */
/* registro de alumno */ 
struct registro {
	int dni;
	int codCar;
	int codSex;
	int edad;
} regalum;
int cantLeidos=0;
int main(){
/* Abre un archivo binario para lectura */
FILE *fichero;
fichero = fopen("Alumnos.dat", "rb");
/* lee primer registro del archivo alumnos */
fread(&regalum, sizeof(struct registro), 1, fichero);/*fread (direcc_dato, tamaño_dato, numero_datos,punt_fichero);*/
printf("\n Documento Carrera Sexo Edad");
	while(!feof(fichero))
	{
		printf( "\n%d" "\t%i" "\t%i" "\t%i", regalum.dni, regalum.codCar, regalum.codSex, regalum.edad);
				fread(&regalum,sizeof(struct registro), 1, fichero); 
		cantLeidos=cantLeidos + 1;
	}
printf("\n La cantidad de registros leidos fue: %i \n", cantLeidos); 
fclose(fichero);
return 0;
}

