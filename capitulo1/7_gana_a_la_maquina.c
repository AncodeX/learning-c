/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    RETO 1: Gana a la maquina

    - Consiste en un juego de turnos. Tu contra la maquina. El que adivine la letra antes ganara

    Tips:
        - Usar rand y srand para conseguir aleatoriedad
        - Convertir numeros a letras.
    
    Pista: del 97 - 122 estan las letras del abc
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 97
#define N 122

#define IN 1
#define OUT 0

int main() {
    srand(time(NULL));
    int bucle, user, machine, state;
    int n_ascii = rand() % (N-M+1) + M;

    state = IN;
    bucle = 1;

    while(bucle) {

        user = getchar();
        if (state == IN) {
            printf("Escogiste la letra %c\n", user);
            
            if (user > n_ascii) {
                printf("La letra %c es mayor (>)\n", user);
            } else {
                printf("La letra %c es menor (<)\n", user);
            }
            state = OUT;
        }
        else if (state  == OUT) {
            machine = rand() % (N-M+1) + M;
            printf("La maquina escogio la letra %c\n", machine);
            state = IN;
        }

        

        if (user == n_ascii) {
            printf("Ganaste! La letra era %c", n_ascii);
            bucle = 0;
        } else if (machine == n_ascii) {
            printf("La maquina gano! La letra era %c", n_ascii);
            bucle = 0;
        }
    }

}