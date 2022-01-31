//EJERCICIO 4: Introduce 2 cadenas de caracteres, habiendo reservado memoria dinámica anteriormente
//y siendo pedido el tamaño de las cadenas al reservar memoria, una vez introducidas deberás concatenar 
//(juntar) las cadenas, en la cadena 1 sin emplear las funciones de string.h. 

#include <stdio.h>
#include <stdlib.h>

int main ()         // segmentation fault no se porque :/
{
    int c1, c2, i = 0, cont, tot;
    char *cad1, *cad2;

    printf ("Introduce la longitud de la primera cadena\n");
    scanf ("%i", &c1);
    fflush(stdin);
    c1 = c1 + 1;
    printf ("Introduce la longitud de la segunda cadena\n");
    scanf ("%i", &c2);
    fflush(stdin);
    c2 = c2 + 1;

    cad1 = (char*)malloc(c1*sizeof(char));
    cad2 = (char*)malloc(c2*sizeof(char));

    printf ("Introduce la primera cadena\n");
    fgets (cad1, c1, stdin);
    fflush(stdin);
    printf ("Introduce la segunda cadena\n");
    fgets (cad2, c2, stdin);
    fflush(stdin);

    tot = c1+c2+2;

    cad1 = (char*)realloc(cad1, tot*sizeof(char));

    for (cont = c1; c1 < c1 + c2; cont++)
    {
        cad1[cont] = cad2[i];
        i++;
    }

    printf ("La nueva cadena es %s", cad1);
}
