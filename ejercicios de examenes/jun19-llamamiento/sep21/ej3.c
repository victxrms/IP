//EJERCICIO 3: Un numero cuadrado perfecto es n numero cuya descomposición factorial no tiene ningún 
//factor primo repetido, por ejemplo, el numero 10 es un numero cuadrado perfecto ya que su descomposición es 
//25, en cambio el 8 tiene por descomposición 22* 2, así que no sería cuadrado perfecto. Realice una función 
//en c, que reciba un numero n, y compruebe si es o no cuadrado perfecto devolviendo un 1 en el caso de que, 
//si lo fuera y un 0 si no, además debe enseñar por pantalla la factorización de este. 

#include <stdio.h>
#include <math.h>

int main ()
{
    int num;

    do
    {
        printf ("Introduce un número positivo\n");
        scanf ("%i", &num);
    } while (num <= 0);

    if (primo (num) == 0)
        printf ("El número no es perfecto\n");
    else printf ("El número es perfecto\n");
    
}

int primo (int num)
{
    int fact = 2, cont = 0;

        while (num > 1)
    {
        while (num % fact == 0)
        {
            num /= fact;
            cont ++;
        }
        if (cont > 1)
        {
            printf ("%i ^%i *", fact, cont);
            return (0);
        }    
        else 
        {
            printf ("%i * ");
            return (1);
        }
    }
}