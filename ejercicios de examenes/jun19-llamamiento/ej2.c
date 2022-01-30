//Siguiendo TODOS los pasos del proceso de creación de un programa e indicando detalladamente lo que se hace en 
//cada uno, escriba un programa que determine si un numero de tarjeta de crédito es valido o no. 
//Para ello, se utilizaran los siguientes pasos: 
//1 — Los dígitos de las posiciones pares se quedaran igual. Los dígitos que ocupen las posiciones impares se 
//multiplicaran por dos, si el resultado es mayor que 9, se Ie restara 9. 
//2 — Se sumaran todos los valores obtenidos a través del paso 1, si el resultado es múltiplo de 10, el numero es 
//valido, sino no lo será. Por ejemplo, el numero 4OI32O02 0977 4812 es un numero valido.

/*

Primero hacemos el programa en pseudocódigo ya que asi lo requieren los pasos de la creación de un programa, 
para posteriormente trasladarlo a nuestro lenguaje de confianza, C.

Algoritmo verif
    principal

        var 
        vector de entero [16]: numtarj
        entero i, aux, sumatot = 0

        Inicio

        desde i <- 0 hasta 16 hacer i++
            escribir ("Escribe el número:", i)
            leer (numtarj[i])

        desde i <- 1 hasta 16 hacer i++
            si (i = 1) ó (i mod 2 != 0)
                entonces
                aux <- numtarj[i] * 2
                si (aux > 9)
                    aux - 9
                fin_si
                sumatot <- sumatot + aux
            fin_si
        sumatot <- sumatot + numtarj[i]
        fin_desde

        si (sumatot mod 10 = 0)
            escribir ("La tarjeta es válida")
        si_no escribir ("La tarjeta no es válida")
    
    fin_principal
fin_algoritmo

*/


#include <stdio.h>

int main ()
{
    int numtarj[16], i, aux, sumtot = 0;

    for (i = 0; i < 16; i++)
    {
        printf ("Introduce el numero %i de la tarjeta: ", i);
        scanf ("%i", numtarj[i]);
    }

        for (i = 0; i < 16; i++)
    {
        if ((i = 1) || (i % 2 != 0))
        {
            aux = numtarj[i] * 2;
            if (aux > 9)
                aux -= 9;
            sumtot += aux;
        }

        sumtot += numtarj[i];
    }
        if (sumtot % 10 == 0)
            printf ("El numero de tarjeta es válido\n");
        else printf ("El número de tarjeta no es válido\n");

}
