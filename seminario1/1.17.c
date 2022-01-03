//17.- Realiza un programa que evalúe un polinomio de grado tres p(x) = ax3 + bx2 + cx + d 
//suponiendo que recibe por teclado, los datos del valor de la variable y los valores de los coeficientes

#include <stdio.h>
#include <math.h>

int main (void){

    int x, a, b, c, d, s;

    printf ("Se va a proceder a evaluar un polinomio de grado de la siguiente forma ax3 + bx2 + cx+ d\n");
    printf ("Introduce un valor para la incógnita X\n");
    scanf ("%i", &x);
    printf ("Introduce valores para los coeficientes a, b, c y d en orden\n");
    scanf ("%i", &a);
    scanf ("%i", &b);
    scanf ("%i", &c);
    scanf ("%i", &d);

    s = (((pow (a, 3)) * x) + ((pow (b, 2)) * x) + (c * x) + x);

    printf ("El valor del polinomio de tercer grado es de %i\n", s);
}