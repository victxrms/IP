//25.- Realiza un programa que dado un número entero devuelva su descomposición en factores primos 
//(todo número entero tiene una única descomposición dada por una multiplicación de potencias de números primos). 
//El programa debe calcular, no sólo estos números primos, sino además su potencia asociada..


#include <stdio.h>
#include <stdlib.h>

void primo (int n);

int main ()
{
    int n;

    do {
        printf("Introduce el número a descomponer en factores primos\n");
        scanf ("%i", &n);
    }while ( n <= 0);
    
    primo (n);
}

void primo(int n)
{
    int pot=0, factor=2;

    while (n>1)
    {
         while (n%factor == 0)
        {
            n /= factor;
            pot ++;
        }       
        if (pot != 0)
            printf ("%i^%i\n", factor, pot);
        pot = 0;
        factor++;
    }

}