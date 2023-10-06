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
    float fahr, celcius;
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
        celcius = (5.0/9.0) * (fahr-32);
        /*
            %f: indica un argumento flotante
            %3.0f -> tendra 3 caracteres de ancho, sin punto decimal y sin digitos fraccionarios
            %6.1f -> tendra 6 caracteres de ancho, con un digito despues del punto decimal

            Ejemplos: %6f, %.2f, %f
        */
        printf("%3.0f\t%6.1f\n", fahr, celcius); 
        fahr = fahr + step; // Se le sumara step:20 a fahr y se asignara a fahr
    }
}