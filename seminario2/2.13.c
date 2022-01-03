//13.- Realiza un programa que calcule la media de N números positivos introducidos por teclado. 
//El programa terminará cuando lea un número negativo o cero.

#include <stdio.h>

int main (void){

    int x, n, i;

    n = 0;
    i = 0;

    do {
        printf ("Introduce un número \n");
        scanf ("%i", &x);
        n = n + x;
        i++;
    } while ((x != 0) || (x > 0));

    n = ((n + x) / (i--));
    printf ("La media es %i \n", n);


}