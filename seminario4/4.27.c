//27.- Se desea almacenar la información relativa a 20 personas. 
//De cada persona se almacena su nombre, apellidos, dni, edad. 
//Implementa la estructura necesaria para almacenar dicha información y 
//realiza las funciones necesarias para la inicialización de la estructura.
//El programa deberá además recibir por teclado el dni de una persona e 
//imprimir su edad utilizando una función cuyo prototipo sea: int busca_persona(personas x[], char *dni)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 2

   typedef struct
    {
        char nombre [10];
        char apellidos [20];
        char dni [10];
        int edad;
    } persona;

void rellena (persona p[]);
int busca_persona(persona p[], char dni[]);

int main ()
{
    char dni[10];
    persona vectP[N];
    int edad;

    rellena (vectP);

    printf ("Introduce el DNI a buscar\n");
    fgets(dni, 11, stdin);
    fflush(stdin);

    edad = busca_persona (vectP, dni);

    if (edad != 0)
        printf ("La edad de la persona es %i\n", edad);
        else printf ("El DNI no existe\n");
    
}

void rellena (persona p[])
{
    int i;
    for (i = 0; i < N; i++)
    {
        printf ("Introduce el nombre de la persona\n");
        fgets (p[i].nombre, 10, stdin);
        fflush(stdin);
        printf ("Introduce los apellidos de la persona\n");
        fgets (p[i].apellidos, 20, stdin);
        fflush(stdin);
        printf ("Introduce el DNI de la persona\n");
        fgets (p[i].dni, 10, stdin);
        fflush(stdin);
        printf ("Introduce la edad de la persona\n");
        scanf ("%i", &(p[i].edad));
        fflush(stdin);
    }
}

int busca_persona (persona p[], char dni[])
{
    int i, aux = 0;
    for (i = 0; i < N; i++)
    {
        if (strcmp (dni, p[i].dni) == 0)
            aux = p[i].edad;
    }

    return aux;
}