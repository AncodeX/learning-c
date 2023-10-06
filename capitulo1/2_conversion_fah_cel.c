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
    /*
        iteracion: bucle for
        condicon: si los grados fahr son menor o igual a 300 se seguira iterando
        el ciclo termina
    */
    for (fahr=0; fahr <= 300; fahr += 20) {
        printf("%3.0f\t%6.1f\n", fahr, (5.0/9.0) * (fahr-32));
    }
}