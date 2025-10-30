#include <stdio.h>

struct registro{
int dni;
int codcarrera;
int codsexo;
int edad;
}regalum;

void cargaralumnos (int dni, int codcarrera, int codsexo, int codlu);
void Mostraralumnos (int dni, int codcarrera, int codsexo, int codlu);

//Primer void, solo ingresa alumnos
void cargaralumnos(){

printf ("\nIngrese dni de alumno: ", dni);
scanf ("%d", &dni);
printf ("\nIngrese codigo de carrera: ", codcarrera);
scanf ("%d", &codcarrera);
printf ("\nIngrese Codigo de Sexo: ", codsexo);
scanf("%d", &codsexo);
printf ("\nIngrese Codigo de libreta universitaria: ", edad);
scanf ("%d", &edad);

if (codsexo != 1 && codsexo != 2){
	scanf ("%d",&codsexo);
printf ("\nVaron",codsexo);
printf ("\nMujer",codsexo);
}


printf ("\ndni de alumno: %d", dni);
printf ("\ncodigo de carrera: %d", codcarrera);
printf ("\nCodigo de Sexo: %d", codsexo);
printf ("\nlibreta universitaria: %d", edad);

}



int main(){
	cargaralumnos();
	
	
return 0;	
	
}
