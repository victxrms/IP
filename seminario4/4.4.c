//4.- Escribe un programa que normalice los 20 números reales que están almacenados 
//en un vector estadisticas. Para llevar a cabo esta normalización, se debe dividir 
//cada número por el máximo valor del vector de forma que los valores resultantes 
//estén comprendidos entre 0 y 1. Realiza una versión devolviendo el resultado en 
//el mismo vector y otra que construya un nuevo vector normalizado.



#include <stdio.h>

#define MAX 10

void leer (float vector[]);
void salida (float vector[]);
void normalizar (float estadistica []);

int main ()
{
    

    float vector[MAX];

    leer (vector);

    normalizar (vector);

    salida (vector);


}


void normalizar(float estadistica[])
{

    float mayor=0;
    int i;

   for (i=0; i < MAX; i++)
    {
        if (estadistica[i] > mayor)
        mayor = estadistica[i];
    } 

    printf ("El numero mayor y por el que se normalizaran el resto es %f \n", mayor);

   for (i=0; i < MAX; i++)
    {
        estadistica[i] = estadistica[i] / mayor;
    } 


}


void leer (float vector[])
{

    int i;

    for (i=0; i < MAX; i++)
    {
        printf ("Introduce un elemento para la posicion %i\n", i);
        scanf ("%f", &vector[i]);

    }

}

void salida (float vector[])
{
    int i;

    for (i=0; i < MAX; i++)
    {
        printf ("%f ", vector[i]);

    }

}

