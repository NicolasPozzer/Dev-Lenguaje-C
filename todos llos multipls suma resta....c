/*1. Pedir 2 numeros al usuario y sumarlos, restarlos multiplicarlos y dividirlos.*/

#include<stdio.h>

int n1,n2, suma, resta, division, multiplicacion = 0;
int main ()
{
	
	
	
	printf("Escriba 2 numeros: ");
	scanf("%i %i",&n1,&n2);
	
	
	suma = n1 + n2;
	resta = n1 - n2;
	division = n1 / n2;
	multiplicacion = n1 * n2;
	
	
	
	printf("\n La suma es: %i",suma);
	printf("\n La resta es: %i",resta);
	printf("\n La division es: %i",division);
	printf("\n La multiplicacion es: %i",multiplicacion);

	
	
	return 0;}
