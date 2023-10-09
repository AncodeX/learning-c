/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    Programa flujo de datos de entrada y salida

    capitulo 1, variables, expresiones, iteraciones y desiciones
    herramientas: getchar(), putchar()
*/

#include <stdio.h>
// copia la entrada a la salida

int main() {
    int c;

    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}