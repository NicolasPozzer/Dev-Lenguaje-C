#include <stdio.h>
main(){
	FILE *filetext; 	/* Define la variable "filetext" como puntero a FILE */
	char lineaTexto;	/* Define la l�nea del archivo de tipo char  */
	
	filetext = fopen("poema20.txt","r"); /*Abre el archivo en modo lectura */
		
	printf("Contenido del archivo:\n" );
	printf("----------------------:\n" );
	lineaTexto = fgetc(filetext);		/*Lee una l�nea del archivo de texto */
	while (feof(filetext) == 0) { 		/* mientras no sea fin de archivo  */ 
		printf( "%c",lineaTexto);		/* muestra en pantalla la l�nea */
		lineaTexto = fgetc(filetext);	/* lee otra l�nea del archivo */
	}
	fclose(filetext);	/*Cierra el archivo de texto */
	return 0;
}

