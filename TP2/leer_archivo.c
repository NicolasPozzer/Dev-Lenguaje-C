/* lee archivo .dat */
#include <stdio.h>

void iniciarProceso();
void leerRegistro();
void procesarRegistro();
float porcentaje(int, int);
void finalizarProceso();

typedef struct{	/* Declara un tipo de dato registro */
	int dni;
	char nya[30];
	int codprov;
	int codedi;
	float precio;   	 
}tr_cliente;
int contadorPlanbase=0;
int contadorPlantotal=0;

tr_cliente vr_cliente;
FILE * vf_cliente;

typedef int tv_cntUprov[3];

tv_cntUprov vv_cntUprov;



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
		printf("\nDNI            ApellidoyNombre CodProvincia Codedificacion precio\n"); 	
		
		/* Lectura adelantada */
		leerRegistro();			
}

void leerRegistro(){
	/* lee 1 registro del archivo alumnos */
	fread(&vr_cliente, sizeof(tr_cliente), 1, vf_cliente);	
}

void procesarRegistro(){
	if (vr_cliente.codprov== 0){
		vv_cntUprov[0]=vv_cntUprov[0]+1;
	}
	if (vr_cliente.codprov== 1){
		vv_cntUprov[1]=vv_cntUprov[1]+1;
	}
	if (vr_cliente.codprov== 2){
		vv_cntUprov[2]=vv_cntUprov[2]+1;
	}
	if (vr_cliente.codprov== 3){
		vv_cntUprov[3]=vv_cntUprov[3]+1;
	}

	printf( "\n%d" "\t%s" "\t\t%d"     "\t%d"      "\t%f", vr_cliente.dni,    vr_cliente.nya,    vr_cliente.codprov, vr_cliente.codedi, vr_cliente.precio);	
   	if (vr_cliente.codedi==1){
			contadorPlanbase++;
		}	
		contadorPlantotal++;


	   
	   
	   	if(vr_cliente.codprov ==1 && vr_cliente.codedi==3){
			printf("\nLos datos de edificaciones de Departamento en la provincia de Corrientes son:\n\tDNI:%d\n\t Apellido y nombre:%s\n\t Precio:%f\n\t",vr_cliente.dni,vr_cliente.nya,vr_cliente.precio,vv_cntUprov[1]);
		}
			
		if(vr_cliente.codprov==2){
	    printf("\nLo recaudado en edificaciones de viviendas plurifamiliares que se construyeron en Chaco es de: %f \n",vr_cliente.precio);
		}
		

	
	
	
}

void finalizarProceso(){	
	int max=3;
	int index;
	int i;
	for(i=0; i<=3; i++){
		if(vv_cntUprov[i] <max){
			max=vv_cntUprov[i];
			index=i;
		}
	}

    printf("\n Cantidad de Clientes en Corrientes: %d", vv_cntUprov[0]);
    printf("\n Cantidad de Clientes en Chaco:%d", vv_cntUprov[1]);
    printf("\n Cantidad de Clientes en Formosa: %d", vv_cntUprov[2]);
    printf("\n Cantidad de Clientes en Misiones:%d\n\n", vv_cntUprov[3]);
    
    printf("\n VIVIENDAS UNICA: %d", vv_cntUprov[0]);
    printf("\n VIVIENDA PLURIFAMILIAR:%d", vv_cntUprov[1]);
    printf("\n DEPARTAMENTO: %d", vv_cntUprov[2]);
    printf("\n LOCAL COMERCIAL:%d", vv_cntUprov[3]);
    printf("\n CABAÑAS: %d", vv_cntUprov[4]);
    printf("\n DUPLEX %d", vv_cntUprov[5]);
    
	if(index==0){
		printf("\n La edificacion con menor cantidad de construcciones es: Corrientes");
	}
	if(index==1){
		printf("\nLa edificacion con menor cantidad de construcciones es: Chaco");
	}
	if(index==2){
		printf("\nLa edificacion con menor cantidad de construcciones es: Formosa");
	}
	if(index==3){
		printf("\nLa edificacion con menor cantidad de construcciones es: Misiones");
	}


    
	if(index==1){
		printf("\n Vivienda UNICA");
	}
	if(index==2){
		printf("\n Vivienda Plurifamiliar");
	}
	if(index==3){
		printf("\n Departamento");
	}
	if(index==4){
		printf("\n Local Comercial");
	}
	if(index==5){
		printf("\n Cabañas");
	}
	if(index==6){
		printf("\n Duplex");
}
	fclose(vf_cliente);
	
		float porcentaje(p_contadorPlanbase,p_contadorPlantotal){
	   	float auxPorcentaje=0.0;
	   	auxPorcentaje=(p_contadorPlanbase*100)/p_contadorPlantotal;
	   	return auxPorcentaje;
	    printf("\nEl porcentaje que representan las construcciones que se realizaron en la Provincia de Misiones respecto del total de edificaciones es del: %f Porciento\n",porcentaje(contadorPlanbase,contadorPlantotal));

	   }
	
	 
	
}



