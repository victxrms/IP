//2.- Realiza un programa que lea tres números enteros positivos distintos 
//e imprima el mayor y el menor valor de los tres. Intente que el programa 
//realice el menor número de comparaciones posible entre los números.

#include <stdio.h>

int main (void) {

    int x, y, z;

    printf ("Introduce un valor para X");
    scanf ("%i", &x);


    printf ("Introduce un valor para X");
    scanf ("%i", &y);


    printf ("Introduce un valor para X");
    scanf ("%i", &z);

    if (x < y)
        if (x < z)
            if (z < y)

            printf ("El mayor es %i y el menor %i", y, x);
        
            else printf ("El mayor es %i y el menor %i", z, x);

        else printf ("El mayor es %i y el menor %i", y, z);

    else 
        if (y < z)
            if (x < z)

            printf ("El mayor es %i y el menor %i", z, y);
        
            else printf ("El mayor es %i y el menor %i", x, y);

        else printf ("El mayor es %i y el menor %i", x, y);



}
