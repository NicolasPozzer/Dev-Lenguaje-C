#include <stdio.h>
#include <string.h>

#define Y 50

void ejercicio1();
char cadena1[Y], cadena2[Y];
void prueba();


int main(){
ejercicio1();
prueba();


}

void ejercicio1 (){
	
	printf("Primer cadena: ");
	scanf("%[^\n]",&cadena1);
	fflush(stdin);
	printf("Segunda cadena: ");
	scanf("%[^\n]",&cadena2);
	fflush(stdin);
	//juntar cadena1 en cadena2
	strcat(cadena1, ", ");
	strcat(cadena1, cadena2);
	printf("Juntos: %s\n longitud de la cadena %i", cadena1, strlen(cadena1));
	
	
	
}
void prueba (){
	printf ("\nNico es alto kpo");
	
	
}


