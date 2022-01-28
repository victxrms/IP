//34.- Escribe un programa que cree un fichero de texto que no existe y almacene información en él.
//Lo he complicao un poco la verdad

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    FILE *fp;

    if ((fp = fopen ("prueba.txt", "w+")) != NULL)
    {
        char text[20], c;
        int resp;
        
        printf ("Introduce la información que desees\n");
        printf("Introduce el carácter * para finalizar\n");
        while ((c=getchar())!='*')
        fputc(c,fp);
        fclose (fp);

        do
        {

        printf ("¿Que deseas hacer a continuación?\n");
        printf ("[1] SEGUIR ESCRIBIENDO \\ [2] ELIMINAR ARCHIVO \\ [3] SALIR\n");
        scanf ("%i", &resp);
            
        switch (resp)
        {
        case 1:
            if ((fopen ("prueba.txt", "a")) != NULL)
            {
                printf ("Introduce la información que desees\n");
                printf("Introduce el carácter * para finalizar\n");
                while ((c=getchar())!='*')
                fputc(c,fp);
            }
            else printf ("Apertura incorrecta\n");
            fclose (fp);
            break;

        case 2:
            if (remove ("prueba.txt") == 0)
            printf ("El fichero se ha eliminado satisfactoriamente\n");
            else printf ("No se ha podido eliminar el fichero\n");
            break;

        case 3:
            break;
        
        default:
            break;
        }

        } while (resp != 3);

        
    } else printf ("Apertura incorrecta\n");
}