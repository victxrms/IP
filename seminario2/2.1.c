//1.- Realiza un programa que lea de la entrada estándar un número entero positivo y escriba en la salida estándar si es par o impar.


#include <stdio.h>

int main (void) {

    int x;

    do {
    printf ("Introduce un número entero positivo \n");
    scanf ("%i", &x); 
    } while ( (x == 0) || (x < 0) );

    if ( (x % 2) == 0)
        printf ("El número es par \n");
    else 
        printf ("El número es impar \n");







}
