//5.- Realiza un programa que lea dos números por teclado y a continuación un carácter que indique la operación aritmética 
//a realizar con ellos. El programa devuelve, por pantalla, el resultado de dicha operación.

#include <stdio.h>

int main (void){

    int x, y;

    printf ("Introduce un valor para X \n");
    scanf ("%i", &x);

    printf ("Introduce un valor para Y \n");
    scanf ("%i", &y);

    if  ( (x % y) == 0 )
        if ( (y % x ) == 0 )
        printf ("%i y %i son divisibles entre ellos \n", x, y);

        else printf ("%i es divisible entre %i \n", x, y);

    else
        if ( (y % x ) == 0 )
        printf ("%i es divisible entre %i \n", y, x);
        else  printf ("%i y %i no son divisibles entre ellos \n", x, y);
        

}