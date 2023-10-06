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
    int fahr, celcius;
    int lower, upper, step;
    // asignacion de variables
    lower = 0;
    upper = 300;
    step = 20;
    /*
        iteracion: bucle while (mientras)
        condicon: si los grados fahr son menor o igual a upper, se cumple. Si no se cumple
        el ciclo termina
    */ 
    fahr = lower;
    while (fahr <= upper) {
        // operación aritmetica: el resultado se almacenara en celcius
        celcius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celcius); // %d -> indica un argumento entero que sera sustituido por las variables fahr y celcius
        fahr = fahr + step; // Se le sumara step:20 a fahr y se asignara a fahr
    }
}