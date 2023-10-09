/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    Programa flujo de datos de entrada y salida

    capitulo 1, variables, expresiones, iteraciones y desiciones
    Tema: contar lineas
*/

#include <stdio.h>

int main() {
    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++ nl;
        
    printf("%d\n", nl);
}