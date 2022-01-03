//20.- Realiza una funcion int cuenta (char * cad, char c) que deuvelva el numero de veces
//que aparece el caracter c en la cadena cad.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50

void leer (char c1[]);
int cuenta (char c1[], char c);

int main ()
{
    char c1[20], c;
    int num;

    leer (c1);

    printf ("Introduce el carácter a buscar\n");
    scanf ("%c", &c);

    num = cuenta (c1, c);

    printf ("El número de veces que %c aparece en %s es de %i veces\n", c, c1, num);
}

void leer (char c1[])
{
    printf ("Introduce la primera cadena (Maximo 20 carácteres)\n");
    fgets(c1,11,stdin);
    fflush(stdin);
}

int cuenta (char c1[], char c)
{
    int i, cont = 1;

    for (i = 0; c1[i] != '\0'; i++)
    {
        if (c1[i] == c)
            cont ++;
    }

    return cont;
}