//7.- Realiza un programa que imprima el tamaño en bytes de los tipos básicos.

#include <stdio.h>

int main (){

int i, c, d, f;

i = sizeof (int);
c = sizeof (char);
d = sizeof (double);
f = sizeof (float);

printf ("El tamaño de bytes de un entero es de %i bytes\n", i);

printf ("El tamaño de bytes de un carácter es de %i bytes\n", c);

printf ("El tamaño de bytes de un double es de %i bytes\n", d);

printf ("El tamaño de bytes de un float es de %i bytes\n", f);

return 0;

}