//10.-Realiza un programa para calcular el coeficiente del binomio utilizando dos funciones. 
//Una de las funciones deberá recibir los valores de n y k como parámetros y devolverá el valor del binomio. 
//Para ello, deberá hacer uso de la función factorial que devolverá el valor 
//el factorial a través de un puntero (sin usar la sentencia return)


#include <stdio.h>

int solut (int n, int k, int rest);
void fact (int* fact);

int main (){

    int n, k, rest;
    int sol;

    printf ("Introduce un valor para n \n");
    scanf ("%i", &n);

    printf ("Introduce un valor para k \n");
    scanf ("%i", &k);

    rest = n - k;

    sol = solut (n, k, rest);

    printf ("El valor del coeficiente del binomio es %i \n", sol);

    return 0;
}


int solut (int n, int k, int rest)
{

    int sol;

    fact (&n);
    fact (&k);
    fact (&rest);

    sol = n / (k * rest);

    return sol;
}

void fact (int* fact)
{

    int i, n;

    n = 1;

    for (i = 2; i <= *fact; i++)
    {
       n = n * i;
    }    
    
    *fact = n;
}
