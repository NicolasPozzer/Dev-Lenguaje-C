#include <stdio.h>
/* graba datos de alumnos en un archivo binario */
/* registro de alumno */ 
struct registro {
	int dni;
	int codCar;
	int codSex;
	int edad;
} regalum;
int cantGrabados=0;
int respuesta;
int main(){
/* crea y abre un archivo binario para escritura*/
FILE *fichero;
fichero = fopen("Alumnos.dat", "wb"); /*fichero = fopen ( nombre-fichero, modo);*/
/* ingresa datos de los alumnos */
printf("Desea ingresar datos al archivo? Si=1 No=0 ");
scanf("%i", &respuesta);
while(respuesta!=0){
	printf("\n Ingrese dni del alumno:");
	scanf("%i",&regalum.dni);
	printf("\n Ingrese Codigo de carrera:");
	scanf("%i",&regalum.codCar);
	printf("\n Digite el Codigo de sexo:");
	scanf("%i",&regalum. codSex);
	printf("\n Ingrese la edad:");
	scanf("%i",& regalum.edad);
	/* graba el registro en el archivo indicado */
	fwrite(&regalum, sizeof(struct registro), 1, fichero);/*fwrite (direcc_dato, tamaño_dato, numero_datos, punt_fichero); sizeof (dato) o sizeof (tipo-de-dato);
*/
	/* incrementa en 1 contador de registros grabados */
	cantGrabados= cantGrabados + 1;
	printf("\n Desea ingresar mas datos al archivo? Si=1 No=0 \n ");
	scanf("%i",&respuesta);
}
printf("La cantidad de registros grabados fue: %i\n", cantGrabados); 
fclose(fichero);
return 0;
}

