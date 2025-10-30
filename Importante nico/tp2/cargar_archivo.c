 #include <stdio.h>
void iniciarProceso();
void ingresarDatos();
void grabarRegistro();
void finalizarProceso();
void ingresarRespuesta();

typedef struct{	/* Declara un tipo de dato registro */
	int DNI;
	char ApellidoyNombre[30];
	int codprovincia;
	int codedificacion;
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
	printf("\nIngrese el DNI: ");
	scanf("%d",&vr_cliente.DNI);		
	fflush(stdin);
	printf("Ingrese el Apellido y Nombre: ");
	scanf("%s",&vr_cliente.ApellidoyNombre);
	fflush(stdin);
	printf("Ingrese el Codigo del Provincia: ");
	scanf("%d",&vr_cliente.codprovincia);
	printf("Ingrese el codigo de Edificacion: ");
	scanf("%d", &vr_cliente.codedificacion);
	printf("ingrese el precio: ");
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


