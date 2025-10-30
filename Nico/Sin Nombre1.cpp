#include <stdio.h>

int n1, n2, suma, resta;

int main (){
	printf ("Introducir el primer numero: ");
	scanf ("%d" ,&n1);
	printf ("Introducir segundo numero: ");
	scanf ("%d",n2);
	
	suma = n1 + n2;
	resta = n1 - n2;
	
	printf ("El resultado de la suma es: %d"),suma;
	printf ("El resultado de la resta es: %d"),resta;
	
	
	return 0;}

