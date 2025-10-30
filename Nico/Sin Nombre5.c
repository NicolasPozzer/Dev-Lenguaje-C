#include <stdio.h>

int n1, n2, suma,resta, multiplicacion, division;

int main (){
	


	printf ("introduce primer numero: ");
	scanf ("%d",&n1);
	printf ("introduce segundo numero: ");
	scanf ("%d",&n2);
	
	suma = n1 + n2;
	resta = n1 - n2;
	multiplicacion = n1 * n2;
	division = n1 / n2;
	
	printf ("\n el resultado de la suma es: %d", suma);
	printf ("\n el resultado de la resta es: %d", resta);
	printf ("\n el resultado de la multiplicacion es: %d", multiplicacion);
	printf ("\n el resultado de la multiplicacion es: %d", division);
	
	
	return 0;}
