//Ejercicio 1.- Realiza un programa que declare un vector de 10 enteros y a través de funciones, lo
//inicialice y lo visualice por pantalla.


#include <stdio.h>

#define MAX 10

void leer (int vector[]);
void salida (int vector[]);

int main ()
{
    

    int vector[MAX];

    leer (vector);

    salida (vector);


}



void leer (int* vector){

    int i;

    for (i=0; i < MAX; i++)
    {
        printf ("Introduce un elemento para la posicion %i\n", i);
        scanf ("%i", &vector[i]);

    }

}

void salida (int* vector)
{
    int i;


    for (i=0; i < MAX; i++)
    {
        printf ("%i ", vector[i]);

    }

}
