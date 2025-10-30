#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <conio.h>

int opc();
void creararchivo();
void mostraralumnos();
void 


struct registro{
	
	char nombre[50];
	int dni;
	int codcarrera;
	int codsexo;
	int edad;
	
	} regalum;

int main(){
	   //NO ESTA TERMINADO, DEJAR PARA LO ULTIMO
 	int opc;
 	printf("\nQue desea hacer?");
	sleep(1);
 	printf("\nPresione 1= Para cargar alumnos  o  2= Para buscar datos de alumno");
 	scanf("%d",&opc);
 	switch(opc){
 		case 1:  
 			creararchivo();
 			mostraralumnos();
 		break;
		 case 2:
		 	creararchivo();
		break;
	
 }while(opc != 3);
 system("clear");
 return 0;}
 

void creararchivo(){
	
	FILE *fp;
	fp = fopen ("fsociety.txt", "w");
	printf ("\n----Creando archivo----",fp);
	if (fp==NULL){fputs
	("file error", stderr); exit
	(1);}
	sleep (1);
	
	printf("\n Ingrese Nombre: ");
	scanf("%s",&regalum.nombre);
	fprintf(fp,"\nNombre del alumno: %s",&regalum.nombre);
	
	printf("\n Ingrese dni del alumno: ");
	scanf("%i",&regalum.dni);
	fprintf(fp,"\nDNI: %i",regalum.dni);
	
	printf("\n Ingrese Codigo de carrera: ");
	scanf("%i",&regalum.codcarrera);
	fprintf(fp,"\nCodigo de Carrera: %i",regalum.codcarrera);
	
	printf("\n Digite el Codigo de sexo: ");
	scanf("%i",&regalum.codsexo);
	if (regalum.codsexo == 1){
	fputs ("\nSexo: Varon", fp);
	
	}else{
	fputs ("\nSexo: Mujer", fp);
	}
	
	printf("\n Ingrese la edad: ");
	scanf("%i",& regalum.edad);
	fprintf(fp,"\nEdad: %i\n\n",regalum.edad);
	
	system("color 02");
	printf("\nArchivo creado con Exito!\n");
	fclose (fp);
	
	sleep (1);
	system("pause");
system("cls");
system("color 07"); /*reestablemos al color prdeterminado, fondo negro y letras blancas*/
}


void mostraralumnos(){
	
	printf ("Nombre de alumno: %s",regalum.nombre);
	printf ("\nDNI de alumno: %i", regalum.dni);
	printf ("\ncodigo de carrera: %i", regalum.codcarrera);
	if (regalum.codsexo == 1){
	printf ("\nVaron",regalum.codsexo);
	
	}else{
	printf ("\nMujer",regalum.codsexo);
	}
	printf ("\nEdad: %i", regalum.edad);
}
 

 

