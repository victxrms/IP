//6.- Escribe un programa que lea por teclado un carácter 
//y muestre en pantalla el código ASCII del mismo así como el carácter siguiente alfabéticamente.


#include <stdio.h>

int main(){

    char c;

    printf("Introduce un carácter\n");
    scanf ("%c", &c);

    printf ("El código ASCII del carácter %c es %d y el siguiente carácter es %c ", c, c, c++);

    return 0;


}