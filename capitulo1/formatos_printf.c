/*
    CURSO C LIBRO KERNIGHAN & RITCHIE

    Tema: Formatear variables en prinf usando %

    %f  numeros decimales
    %d  numeros enteros
    %o  octal
    %c  caracter
    %x  hexadecimal
    %s  cadena de caracteres
    %%  %
*/

#include <stdio.h>

int main() {
    printf("Hola mi nombre es %s, tengo %d años, mido %.2f y mi letra es %%%c\n", "Daniel", 18, 1.70, 'c');
}