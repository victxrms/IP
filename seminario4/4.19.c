//19.- Implementa un programa que dadas dos cadenas de caracteres, a través de un menú de opciones, 
//realice las siguientes operaciones:
//  1.- Comparación cadenas.
//  2.- Copia de la primera sobre la segunda 
//  3.- Concatenación de ambas cadenas
//  4.- Cálculo de la longitud de las cadenas


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50

void leer (char c1[], char c2[]);
void menu (char c1[], char c2[]);



int main ()
{
    char c1[23], c2[11];

    leer (c1, c2);

    menu (c1, c2);

}

void leer (char c1[], char c2[])
{
    printf ("Introduce la primera cadena (Maximo 10 carácteres)\n");
    fgets(c1,11,stdin);
    fflush(stdin);
    printf ("Introduce la segunda cadena (Maximo 10 carácteres)\n");
    fgets(c2,11,stdin);
    fflush(stdin);

}

void menu (char c1[], char c2[])
{
    int resp, cmp, tam1, tam2;

 do 
{

    printf ("Elige del menú la operación que deseas realizar\n");
    printf ("[1] Comparación de cadenas \n[2] Copia de la primera sobre la segunda \n");
    printf ("[3] Concatenación de cadenas \n[4] Cálculo de la longitud de las cadenas \n");
    printf ("[0] Salir\n");
    scanf ("%i", &resp);

    switch (resp)
    {
    case 1:
        cmp = strcmp (c1, c2);
        if (cmp > 0)
            printf ("La cadena 1 es mayor que la 2\n");
        else if (cmp == 0)
                printf ("Ambas cadenas son iguales\n");
                else printf ("La cadena 2 es mayor que la 1\n");
        break;
    
    case 2:
        
        printf ("La copia ha resultado en %s\n", strcpy (c2, c1));
        break;

    case 3:
        strcat(c1, c2);
        printf ("La concatenación de c2 en c1 es %s\n", c1);
        break;

    case 4:
        tam1 = strlen (c1);
        tam2 = strlen (c2);
        printf ("La longitud de la cadena 1 es %i y de la cadena 2 es %i\n", tam1, tam2);
        break;
    }

 } while (resp != 0);


}

