#include <stdio.h>
void iniciarProceso();
void ingresarDatos();
void grabarRegistro();
void finalizarProceso();
void ingresarRespuesta();

typedef struct{	/* Declara un tipo de dato registro */
	int nroUsuario;
	char nya[30];
	int codPais;
	int codPlan;
	int cantConex;   	
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
	vf_cliente = fopen("Netflix.dat", "ab");
}

void ingresarDatos(){	
	printf("\nIngrese Nro de usuario: ");
	scanf("%d",&vr_cliente.nroUsuario);		
	fflush(stdin);
	printf("Ingrese el Nombre y apellido: ");
	scanf("%s",&vr_cliente.nya);
	fflush(stdin);
	printf("Ingrese el Codigo del Pais: ");
	scanf("%d",&vr_cliente.codPais);
	printf("Ingrese el codigo del plan: ");
	scanf("%d", &vr_cliente.codPlan);
	printf("ingrese la cantidad de conexiones por dia: ");
	scanf("%d", &vr_cliente.cantConex);
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


