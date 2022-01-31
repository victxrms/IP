//Ejercicio 3: Realice una función en C que reciba una cadena de caracteres y compruebe si el balanceo de la cadena 
//es correcto. Por ejemplo, el balanceo de la cadena “(ccc(ccc)cc((ccc(c))))” es correcto, mientras que el de la cadena:
//“)ccc(ccc)cc((ccc(c)))(” no lo es, a pesar de tener el mismo numero de paréntesis. La función deberá devolver 1 si 
//el balanceo es correcto, y O en caso de que no lo sea.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 30

int balanceo (char cad[]);

int main ()
{
    char cad [N], resp;

    printf ("Introduce la cadea de carácteres en la que desees comprobar el balanceo\n");
    fgets (cad, N, stdin);

    resp = balanceo (cad);

    if (resp == 1)
        printf ("La cadena %s está balanceada\n", cad);
    else printf ("La cadena %s no está balanceada\n", cad);
}

int balanceo (char cad[])      //Para que una cadena esté balanceada deberá tener mismo número de
{                               //paréntesis abiertos que cerrados.
    char c;
    int i, aux_op = 0, aux_cl = 0;

    for (i = 0; i < N; i++)
    {
        if (cad[i] == '(')
            aux_op++;
        else if (cad[i] == ')')
            aux_cl++;
    }

    if (aux_op == aux_cl)
        return (1);
    else return (0);
}
