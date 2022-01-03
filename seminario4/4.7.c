//7.- Realiza un programa que, dado un vector con 15 números enteros distintos, 
//identifique si los valores que el usuario introduzca a continuación, están o no 
//contenidos en el vector indicando la posición del elemento en caso de existir. 
//El programa finalizará cuando se introduzca un valor 0.


#include <stdio.h>

#define MAX 15

void leer (int vector[]);
void busqueda (int vect []);

int main ()
{

    int vector[MAX];

    leer (vector);

    busqueda (vector);

}


void busqueda(int vect [])
{

    int i, num;

    do
    {
        printf("Introduce un numero\n");
        scanf ("%i", &num);

        for (i=0; i < MAX; i++)
    {
        if (vect[i] == num)
        printf ("El numero %i existe y se encuentra en la posicion %i\n", num, i);

    } 


    }while (num!=0);

}


void leer (int vector[])
{

    int i;

    for (i=0; i < MAX; i++)
    {
        printf ("Introduce un elemento para la posicion %i\n", i);
        scanf ("%i", &vector[i]);

    }

}
