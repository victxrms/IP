//17.- Escribe un programa para determinar si un número es capicúa. Ejemplo 123321

#include <stdio.h>

int capicua (int num);

int main () 
{

    int num;

    printf ("Introduce un numero\n");
    scanf ("%i", &num);

   if (capicua(num) == 0)
    printf ("El numero no es capicua\n");
    else printf ("El numero es capicua\n");

    return 0;


}

int capicua (int num)
{
 
 int numcopia, cifra, reves=0;

 numcopia = num;

    for (num = num; num > 0; num = num/10)
    {
        cifra = num%10;
        reves = reves*10+cifra;
    }

    if (reves == numcopia)
        return 1;
        else return 0;
    
}

