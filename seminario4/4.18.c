//18.- Escriba una funcion concatenar

#include <stdio.h>
#include <stdlib.h>
#define MAX 50

void leer (char c1[], char c2[]);
void concatena (char c1[], char c2[]);



int main ()
{
    char c1[23], c2[11];

    leer (c1, c2);

    printf ("La cadena concatenada es %s \n", c1);
    printf ("La cadena concatenada es %s \n", c2);

    concatena (c1, c2);

    printf ("La cadena concatenada es %s \n", c1);

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

void concatena (char c1[], char c2[])
{
    int i,j;
    for(i=0; c1[i]!='\0' ;i++)
        ;
    
    for (j=0; c2[j]!='\0' ;j++, i++)
        c1[i]= c2[j];
    
    c1[i]='\0';
}

