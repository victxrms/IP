//16.- El periodo de un péndulo de longitud L se define mediante la fórmula
//periodo = 2 * pi * sqrt (L / G)

#include <stdio.h>
#include <math.h>

#define pi 3.142857
#define g 9.8

int main (void){

    int l;
    float p;

    printf ("Introduce la longitud del péndulo \n");
    scanf ("%i", &l);

    p = 2 * pi * sqrt (l / g);

    printf ("El periodo del péndulo toma un valor de %.2f segundos\n", p);



}

