//2.- Realiza un programa que lea tres números enteros positivos distintos 
//e imprima el mayor y el menor valor de los tres. Intente que el programa 
//realice el menor número de comparaciones posible entre los números.

#include <stdio.h>

int main (void) {

    int x, y, z;

    printf ("Introduce un valor para X \n");
    scanf ("%i", &x);


    printf ("Introduce un valor para Y \n");
    scanf ("%i", &y);


    printf ("Introduce un valor para Z \n");
    scanf ("%i", &z);

    if (x < y)
        if (x < z)
            if (z < y)

            printf ("El mayor es %i y el menor %i \n", y, x);
        
            else printf ("El mayor es %i y el menor %i \n", z, x);

        else printf ("El mayor es %i y el menor %i \n", y, z);

    else 
        if (y < z)
            if (x < z)

            printf ("El mayor es %i y el menor %i \n", z, y);
        
            else printf ("El mayor es %i y el menor %i \n", x, y);

        else printf ("El mayor es %i y el menor %i \n", x, y);



}
