/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    Tema: Entrada y salida de caracteres
*/

#include <stdio.h>

int main() {
    char c = getchar(); // lee el siguiente caracter de entrada
    putchar(c); // escribe un caracter
    printf("%c\n", c);
}