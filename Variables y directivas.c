//Directivas del Preprocesador y Variables

#include<stdio.h> //LLibreria

#define PI 3.1416 //Variabe Macro

int y = 5; //Variable Global

int main (){
	int x = 10; //Variable Local
	
	float suma = 0;
	
	suma = PI + x;
	
	printf("La suma es: %f",suma);
	
	
	
	
	return 0;
}
