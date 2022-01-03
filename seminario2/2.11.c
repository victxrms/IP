//11.- Realiza un programa que imprima la suma de los números pares entre dos y mil.

#include <stdio.h>

int main (void) {

    int i;

    for (i = 2; i<1000; i++){

        if (i % 2 == 0)
            printf ("%i, ", i);
        
    }
    printf ("\n");



}