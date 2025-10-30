#include <stdio.h>

void generar_vector();
float promedio(float,int);
void mostrar_resultado();
void recorrer_vector();

typedef float tv_notas[50];
tv_notas vv_notas;
float total_notas = 0.0;
int cont_notas = 0,i,c;

int main(){
	
	generar_vector();
	recorrer_vector();
	mostrar_resultado();
	return 0;
	}
	
	void generar_vector(){
		
		for(i = 0, i<=49; i++;){
			printf("Ingrese la nota en la posicion: %d",i);
			scanf("%f",&vv_notas[i]);
		}
	}
	void recorrer_vector(){
		for (i=0,c=49; i++;){
			total_notas = total_notas + vv_notas[i];
			cont_notas++;}
		}
	
	void mostrar_resultado(){
	printf("El promedio es %2.f");
	promedio(total_notas,cont_notas);
}
	
	float promedio(float total_notas,int cont_notas){
	float prom;
	prom =  total_notas/cont_notas;
	return prom;
	}
	
	
	
	
	
	
	
	
