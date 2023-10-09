/*
    CURSO C KERNIGHAN & RITCHIE
    capitulo 2: Uso de los arreglos para el conteo de diferentes caracteres 

    Herramientas: Arreglos
*/

#include <stdio.h>
/* Conteo de digitos, espacios blanco y otros*/

int main() {
    int c,i,nwhite, nother;
    
    // definicion array
    /* tipo nombre[tamaño array]*/
    int ndigit[10];
    
    nwhite=nother=0;
    
    for (i = 0; i < 10; ++i) {
        ndigit[i] = 0;
        while ((c = getchar()) != EOF) {
            if (c>= '0' && c <= '9')
                ++ndigit[c-'0'];
            else if (c == ' ' || c == '\n' || c == '\t')
                ++nwhite;
            else
                ++nother;
        }
    }
    // Impresión de pantalla
    printf("digitos ="); // Imprimir array
    for (i = 0; i < 10; ++i) {
        printf(" %d", ndigit[i]);
    }
    printf(", espacios en blanco = %d, otros = %d\n", nwhite, nother);
}