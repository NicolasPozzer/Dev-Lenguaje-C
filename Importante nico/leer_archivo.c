/* lee archivo .dat */
#include <stdio.h>

void iniciarProceso();
void leerRegistro();
void procesarRegistro();
void finalizarProceso();

typedef struct{	/* Declara un tipo de dato registro */
	int nroUsuario;
	char nya[30];
	int codPais;
	int codPlan;
	int cantConex;   	 
}tr_cliente;

tr_cliente vr_cliente;
FILE * vf_cliente;

typedef int tv_cntUPais[6];

tv_cntUPais vv_cntUPais;

/*
vv_cantUPais[0] es para Argentina
vv_cantUPais[1] es para Brasil
...
vv_cantUPais[6] es para Venezuela
*/

int main(){
	iniciarProceso();
		
	while(!feof(vf_cliente)){	
		procesarRegistro();		
		leerRegistro();	
	}
	
	finalizarProceso();	
	return 0;
}

void iniciarProceso(){
		/* Inicializa variables auxiliares */
	
		/* Abre un archivo binario para lectura */
		vf_cliente = fopen("Netflix.dat", "rb");
		
		/* Imprime titulos si corresponde*/
		printf("\n Cabecera "); 	
		
		/* Lectura adelantada */
		leerRegistro();			
}

void leerRegistro(){
	/* lee 1 registro del archivo alumnos */
	fread(&vr_cliente, sizeof(tr_cliente), 1, vf_cliente);	
}

void procesarRegistro(){
	if (vr_cliente.codPais== 0){
		vv_cntUPais[0]=vv_cntUPais[0]+1;
	}
	if (vr_cliente.codPais== 1){
		vv_cntUPais[1]=vv_cntUPais[1]+1;
	}
	if (vr_cliente.codPais== 2){
		vv_cntUPais[2]=vv_cntUPais[2]+1;
	}
	if (vr_cliente.codPais== 3){
		vv_cntUPais[3]=vv_cntUPais[3]+1;
	}
	if (vr_cliente.codPais== 4){
		vv_cntUPais[4]=vv_cntUPais[4]+1;
	}	
	if (vr_cliente.codPais== 5){
		vv_cntUPais[5]=vv_cntUPais[5]+1;
	}	
	if (vr_cliente.codPais== 6){
		vv_cntUPais[6]=vv_cntUPais[6]+1;
	}
	printf( "\n%d" "\t%.s" "\t%d" "\t%d" "\t%d", vr_cliente.nroUsuario, vr_cliente.nya, vr_cliente.codPais, vr_cliente.codPlan, vr_cliente.cantConex);	
	
}

void finalizarProceso(){	

    printf("\n cantidad de Argentinos %d", vv_cntUPais[0]);
    printf("\n cantidad de Brasil %d", vv_cntUPais[1]);
    printf("\n cantidad de Uruguay %d", vv_cntUPais[2]);
    printf("\n cantidad de Paraguay %d", vv_cntUPais[3]);
    printf("\n cantidad de Peru %d", vv_cntUPais[4]);
    printf("\n cantidad de Bolivia %d", vv_cntUPais[5]);
    printf("\n cantidad de Venezuela %d", vv_cntUPais[6]);

	fclose(vf_cliente);
	
}



