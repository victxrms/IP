//7.- Escribe un programa que dada una fecha, día, mes y año, compruebe si es una fecha válida o no. 
//(Febrero tiene 29 días si el año es divisible por 4 y no por 100, o es divisible por 400).

#include <stdio.h>

int main (void) {

    int d, m, a;

    printf ("Introduce un día \n");
    scanf ("%i", &d);

    printf ("Introduce un mes (numérico) \n");
    scanf ("%i", &m);


    printf ("Introduce un año \n");
    scanf ("%i", &a);

    if (d > 31 || m > 12)
    printf ("Fecha inválida \n");


if (d == (31 || 30 || 29 || 28) )
    {
    switch (d) {

        case 31: {
        if  (d <= 31 && m != (1 || 3 || 5 || 7 || 8 || 10 || 12))
            printf ("Fecha inválida \n");
        else printf ("Fecha válida \n");
    break;
        }

        case 30: {
        if  (m == (4 || 6 || 9 || 11 ))
            printf ("Fecha válida \n");
        else 
        
        if (m == 2)
            printf ("Fecha inválida \n");
        else printf ("Fecha válida \n");
    break;
        }

        case 29: {
        if  (m == 2 && (a % 400 == 0))
            printf ("Fecha válida \n");
        else printf ("Fecha inválida \n");

        if (m != 2)
            printf ("Fecha válida \n");

    break;
        }

        case 28: {
        if  ( m == 2 && (a % 400 != 0))
            printf ("Fecha válida \n");
        else printf ("Fecha inválida \n");

        if (m != 2)
            printf ("Fecha válida \n");
    break;
        }
        
    }
   
    } 
    else printf ("Fecha válida \n");

}