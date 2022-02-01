//Realiza una función en C que permita crear un vector de enteras positivos de forma 
//dinámica reservando memoria para cada valor que vaya a ser introducido. Al finalizar 
//la introducción de cada valor el programa deberá preguntar al usuario si desea introducir 
//otro valor. Cuando el usuario indique que no desea introducir mas valores el programa deberá 
//escribir por pantalla el número de elementos del vector.

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int *vec, resp, pos = 0, i;

    if ((vec = (int*)malloc(1 * sizeof(int))) != NULL)
    {
        do
        {
            printf ("Introduce el elemento [%i] -> ", pos);
            scanf ("%i", &vec[pos]);
            pos++;
            
            printf ("¿Deseas introducir mas elementos?\n");
            printf ("[1] SI [0] NO\n");
            scanf ("%i", &resp);
        } while (resp == 1);

        printf ("El numero de elementos es %i\n", pos);
        printf ("El vector resulta de la siguiente manera\n");

        for (i = 0; i < pos; i++)
        {
            printf ("[%i] ", vec[i]);
        }
    }
}
