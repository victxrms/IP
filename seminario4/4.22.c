//22.- Escribe una void inversa(char * cadena) que invierta la cadena de caracteres cadena.

#include <stdio.h>
#include <string.h>

#define N 21

void inversa (char * cadena);


int main () 
{
    char c[N];

    printf ("Introduce una cadena de carácteres de hasta 20 caracteres\n");
    fgets (c, 20, stdin);

    inversa (c);

}

void inversa (char * cadena)
{
    char  inversa[20];
    int i, tam;

    tam = strlen (cadena);

    for (i = tam; i>=0; i--)
    {
        inversa[tam-i] = cadena[i];
        printf ("%c", inversa[tam-i]);
    }

}