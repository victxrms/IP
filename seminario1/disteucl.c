//Calculo de la distancia euclidea

#include <stdio.h>
#include <math.h>

int main (void) {

    float x, y, sum, sub;

    printf("Introduce un valor para X ");
    scanf ("%f", &x);

    printf("Introduce un valor para Y ");
    scanf ("%f", &y);

    sum = (pow (x, 2) + pow (y, 2));
    sub = sqrt (sum);

    printf("El valor de la distancia euclidea es %.2f\n", sub);

}