/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    Programa flujo de datos de entrada y salida

    capitulo 1, variables, expresiones, iteraciones y desiciones
    Tema: contar palabras
*/

#include <stdio.h>

// constantes simbolicas de entrada y salida
#define IN 1
#define OUT 0

int main() {
    // captura de caracteres; numero de lineas; numero de palabras; numero de caracteres; estado
    int c, nl, nw, nc, state;

    // el estado esta en 0
    state = OUT;
    // se asignan en 0
    nl = nw = nc = 0;
    
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            ++nw;
            state = IN;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
}