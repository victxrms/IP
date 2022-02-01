//Se dice que un número ambicioso es aquel tal que si sumamos sus divisores propios, y 
//con el resultado de esta suma repetimos el proceso sucesivamente, obtenemos finalmente 
//un número perfecto (aquel que es igual a la suma de sus divisores propios excepto él mismo). 
//Realiza un programa en C que, haciendo uso de funciones, solicite un número al usuario y escriba
//por pantalla si el número es un número ambicioso o no.
//Ejemplo:
//Por ejemplo, 95 es un número ambicioso, porque sus divisores son 1, 5, 19 y tenemos que 1+5+19=25, 
//y los divisores de 25 son 1 y 5, y nuevamente tenemos que 1+5=6, y finalmente 6 es un número perfecto.


#include <stdio.h>
#include <math.h>

int div (int num);

int main ()
{
    int num, res;

    printf ("Introduce un número: ");
    scanf ("%i", &num);

    res = div(num);

    if (res == 1)
        printf ("El número es ambicioso\n");
    else printf ("El número no es ambicioso\n");
}

int div (int num)
{
    int i, sumdiv = 0;

    do
    {
        for (i = 1; i <= sqrt(num); i++)
        {
            if ((num % i) == 0)
            {
                sumdiv += i;
            }

            if (num == sumdiv)
            return (1);
        }      
        div (sumdiv);
    } while (sumdiv >= 1);

    return (0);

}

