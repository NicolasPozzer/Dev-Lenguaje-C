#include <stdio.h>
#include <stdlib.h>
#include <string>

int lu, edad;

int main (){
	printf ("Ingrese L.U: ");
		scanf ("%i", &lu);
		
		printf ("Ingrese Edad: ");
		scanf ("%i", &edad);	
		
       if (lu != 0){
			printf ("\n Tu numero de libreta universitaria es: %i",lu);
		printf ("\n Tu edad es: %i",edad);
		}
		
		else{
		
			printf ("ERROR");
			return 0;
		}
}
