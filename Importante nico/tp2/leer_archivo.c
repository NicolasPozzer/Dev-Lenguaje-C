/* lee archivo .dat */
#include <stdio.h>

void iniciarProceso();
void leerRegistro();
void procesarRegistro();
float porcentaje(int, int);
void finalizarProceso();

typedef struct{	/* Declara un tipo de dato registro */
	int dni;
	char ApellidoyNombre[30];
	int codprovincia;
	int codedificacion;
	int precio;   	 
}tr_cliente;
int contadorPlanbase=0;
int contadorPlantotal=0;

tr_cliente vr_cliente;
FILE * vf_cliente;

typedef int tv_cntUprovincia[6];

tv_cntUprovincia vv_cntUprovincia;

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
		vf_cliente = fopen("construNEA.dat", "rb");
		
		/* Imprimir Titulos De Los Clientes*/
		printf("\nDNI ApellidoyNombre CodProvincia Codedificacion precio\n"); 	
		
		/* Lectura adelantada */
		leerRegistro();			
}

void leerRegistro(){
	/* lee 1 registro del archivo alumnos */
	fread(&vr_cliente, sizeof(tr_cliente), 1, vf_cliente);	
}

void procesarRegistro(){
	if (vr_cliente.codprovincia== 0){
		vv_cntUprovincia[0]=vv_cntUprovincia[0]+1;
	}
	if (vr_cliente.codprovincia== 1){
		vv_cntUprovincia[1]=vv_cntUprovincia[1]+1;
	}
	if (vr_cliente.codprovincia== 2){
		vv_cntUprovincia[2]=vv_cntUprovincia[2]+1;
	}
	if (vr_cliente.codprovinica== 3){
		vv_cntUprovincia[3]=vv_cntUprovincia[3]+1;
	}
	if (vr_cliente.codprovincia== 4){
		vv_cntUPais[4]=vv_cntUprovincia[4]+1;
	}	
	if (vr_cliente.codprovincia== 5){
		vv_cntUprovincia[5]=vv_cntUprovincia[5]+1;
	}	
	if (vr_cliente.codprovincia== 6){
		vv_cntUprovincia[6]=vv_cntUprovincia[6]+1;
	}
	printf( "\n%d" "\t%s" "\t%d"     "\t%d"      "\t%d", vr_cliente.DNI,    vr_cliente.ApellidoyNombre,    vr_cliente.codprovincia, vr_cliente.codedificacion, vr_cliente.precio);	
   	if (vr_cliente.codedificacion==1){
			contadorPlanbase++;
		}	
		contadorPlantotal++;


	   
	   
	   	if(vr_cliente.codprovincia ==1 && vr_cliente.codefificacion==3){
			printf("\nLos datos del usuario Brasil-Premiun son:\nNro usuario:%d\n Apellido y nombre:%s\n Cantidad de conexiones por dia:%d\n",vr_cliente.nroUsuario,vr_cliente.ApellidoyNombre,vr_cliente.cantConexion,vv_cntUPais[1]);
		}
			
		if(vr_cliente.codprovincia==2){
	    printf("\nLas conexiones por dia en Uruguay es de:%d \n",vr_cliente.cantConexion);
		}
		

	
	
	
}

void finalizarProceso(){	
	int max=0;
	int index;
	int i;
	for(i=0; i<=6; i++){
		if(vv_cntUprovincia[i] >max){
			max=vv_cntUPais[i];
			index=i;
		}
	}

    printf("\n cantidad de Usuarios en Argentina: %d", vv_cntUPais[0]);
    printf("\n cantidad de Usuarios en Brasil:%d", vv_cntUPais[1]);
    printf("\n cantidad de Usuarios en Uruguay: %d", vv_cntUPais[2]);
    printf("\n cantidad de Usuarios en Paraguay:%d", vv_cntUPais[3]);
    printf("\n cantidad de Usuarios en Peru: %d", vv_cntUPais[4]);
    printf("\n cantidad de Usuarios en Bolivia: %d", vv_cntUPais[5]);
    printf("\n cantidad de Usuarios en Venezuela: %d", vv_cntUPais[6]);
    
	if(index==0){
		printf("\nEL pais con mas Usuarios es:Argentina");
	}
	if(index==1){
		printf("\nEL pais con mas Usuarios es:Brasil");
	}
	if(index==2){
		printf("\nEL pais con mas cantidad Usuarios es:Uruguay");
	}
	if(index==3){
		printf("\nEL pais con mas cantidad Usuarios es:Paraguay");
	}
	if(index==4){
		printf("\nEL pais con mas cantidad Usuarios es:Peru");
	}
	if(index==5){
		printf("\nEL pais con cantidad mas Usuarios es:Bolivia");
	}
	if(index==6){
		printf("\nEl pasi con mas cantidad Usuarios es:Venezuela");
	}
	fclose(vf_cliente);
	
		float porcentaje(p_contadorPlanbase,p_contadorPlantotal){
	   	float auxPorcentaje=0.0;
	   	auxPorcentaje=(p_contadorPlanbase*100)/p_contadorPlantotal;
	   	return auxPorcentaje;
	    printf("\nEl porcentaje del plan basico  con respecto a los demas es del: %.1f Porciento\n",porcentaje(contadorPlanbase,contadorPlantotal));

	   }
	
	 
	
}



