//13.- Escribe un programa para deducir el salario neto de un trabajador a partir de las horas trabajadas 
//y el precio de la hora, sabiendo que los impuestos aplicados son el 10% del salario bruto. Proporciona 
//el resultado con dos cifras decimales.

#include <stdio.h>

int main (void){

    int h;
    float p, i, n;

    printf ("Introduce el precio de la hora\n");
    scanf ("%f", &p);

    printf ("Introduce el número de horas trabajadas\n");
    scanf ("%i", &h);

    i = 0.1 * (p * h);
    n = (p * h) - i;

    printf ("El salario neto sería de %.2f\n", n);



}

