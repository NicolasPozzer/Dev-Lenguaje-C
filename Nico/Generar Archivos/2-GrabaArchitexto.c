
#include <stdio.h>
int main(){
    FILE* fichero;
    fichero = fopen("prueba.txt", "w");
    fputs("Esta es una línea\n", fichero);
    fputs("Esta es otra linea\n", fichero);
    fputs("y esta es continuación de la anterior\n", fichero);
    printf("Finalizo grabacion del archivo, compruebe el contenido abriendolo con el bloc de notas de Windows");
    fclose(fichero);
    return 0;
}

