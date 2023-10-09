/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    Programa flujo de datos de entrada y salida

    capitulo 1, variables, expresiones, iteraciones y desiciones
    herramientas: contar caracteres
*/

#include <stdio.h>
// contar los caracteres de la entrada

int main() {
    long nc;

    nc = 0;
    while (getchar() != EOF)
        ++ nc;
    printf("%ld\n", nc);
}