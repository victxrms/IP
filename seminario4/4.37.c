//37.- Realiza un programa que copie un el contenido de un fichero de texto existente en otro y 
//devuelva el número de caracteres, palabras y líneas que contiene el mismo.
//No se porque no funciona la verdad pero bueno, ficheros no es algo ultraimportante en ip (o eso dicen ellos)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rellena (FILE *fp);

int main ()
{
    FILE *orig, *dest;
    int chars = 0, pals = 0, lines = 0;
    char c;

    


    if ((orig = fopen ("origen.txt", "w+")) != NULL)
    {
        if ((dest = fopen ("destino.txt", "w")) != NULL)
        {
            rellena (orig);

            while (!feof(orig))
            {
                c=fgetc(orig);
                fputc (c, dest);
                switch (c)
                {
                case ' ':
                    pals++;
                    chars++;
                    break;
                
                case '\n':
                    lines++;
                    break;
                
                default:
                    chars++;
                    break;
                }
            }

            printf ("Hay un total de %i caracteres, %i palabras y %i líneas\n", chars, pals, lines);

        } else printf("No se ha podido abrir correctamente el archivo destino\n");

    } else printf("No se ha podido abrir correctamente el archivo origen\n");

}

void rellena (FILE *fp)
{
    char c;
        printf ("Introduce la información que desees\n");
        printf("Introduce el carácter * para finalizar\n");
        while ((c=getchar())!='*')
        fputc(c,fp);
}