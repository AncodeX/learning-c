/*
    CURSO C LIBRO KERNIGHAN & RITCHIE
    Programa de conversión de Fahrenheint a Celcius
    ---
    CAPITULO 1 
    Contenido: Variables, expresiones e iteraciones
*/

#include <stdio.h>
// imprime la tabla de F-C para fahr=0,20,...,300
int main() {
    // declaracion de variables
    int fahr;

    // Constantes simbolicas
    #define LOWER 0     /* limite inferior */
    #define UPPER 300   /* limite superior */
    #define STEP 20     /* tamaño del incremento */
    /*
        iteracion: bucle for
        condicon: si los grados fahr son mayor o igual a 0 se seguira iterando
    */
    // (inicializacion; condicion; decremento)

    for (fahr = UPPER; fahr > LOWER; fahr = fahr - STEP) {
        float celcius = (5/9.0) * (fahr-32);
        printf("%d\t%6.1f\n", fahr, celcius);
    }
}