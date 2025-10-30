#include <stdio.h>
void iniciarProceso();
void ingresarDatos();
void grabarRegistro();
void finalizarProceso();
void ingresarRespuesta();

typedef struct{	/* Declara un tipo de dato registro */
	int dni;
	char nya[30];
	int codedi;
	int codprov;
	float precio;   
		
}tr_cliente;

tr_cliente vr_cliente;
FILE * vf_cliente;
char respuesta;

int main(){
	iniciarProceso();
	ingresarRespuesta();	
	while(respuesta == 's' || respuesta == 'S'){	
		ingresarDatos();		
		grabarRegistro();	
		ingresarRespuesta();
	}
	finalizarProceso();	
	return 0;
}

void iniciarProceso(){
	/* Abre archivo nuevo para grabar */	
	vf_cliente = fopen("construNEA.dat", "ab");
}

void ingresarDatos(){	
	printf("\nIngrese DNI: ");
	scanf("%d",&vr_cliente.dni);		
	fflush(stdin);
	printf("Ingrese el Nombre y apellido: ");
	scanf("%[^\n]",&vr_cliente.nya);
	fflush(stdin);
	printf("Ingrese el Codigo de Provincia: ");
	scanf("%d",&vr_cliente.codedi);
	printf("Ingrese el codigo de edificacion: ");
	scanf("%d", &vr_cliente.codprov);
	printf("ingrese precio: ");
	scanf("%f", &vr_cliente.precio);
}
		
void grabarRegistro(){
	/* graba 1 registro en el archivo de alumnos */
	fwrite(&vr_cliente, sizeof(tr_cliente), 1, vf_cliente);
}

void ingresarRespuesta(){	
	fflush(stdin);	
	printf("\nDesea ingresar datos al archivo? s/n: ");
	scanf("%c", &respuesta);
}

void finalizarProceso(){
	/* Cerrar archivo */
	fclose(vf_cliente);
}


