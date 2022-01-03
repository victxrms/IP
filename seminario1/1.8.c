//8.- Realiza un programa que pida por teclado dos números enteros e 
//imprima en pantalla su suma, resta, multiplicación, división y resto (modulo) de la división. 
//Si la operación no es conmutativa, también se mostrará el resultado, invirtiendo los operandos.

#include <stdio.h>

int main (){

    int x, y, div1, div2, suma, resta1, resta2, mult, mod1, mod2;
  

    printf ("Introduce un número entero\n");
    scanf ("%i", &x);

    printf ("Introduce un número entero\n");
    scanf ("%i", &y);

    suma = x + y;

    resta1 = x - y;

    resta2 = y - x;

    mult = x*y;

    div1 = x / y;

    div2 = y / x;

    mod1 = x % y;

    mod2 = y % y;

    printf (" La suma de ambos es %i \n La resta de X - Y es %i\n La resta de Y - X es %i\n La multiplicación de ambos es %i \
    \n La división de X entre Y es %i\n La división de Y entre X es %i\n El módulo de la división de X entre Y es %i \
    \n El módulo de la división de Y entre X es %i\n", suma, resta1, resta2, mult, div1, div2, mod1, mod2);

    return 0;
}