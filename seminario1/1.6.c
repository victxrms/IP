//6.- Escribe un programa que lea por teclado un carácter 
//y muestre en pantalla el código ASCII del mismo así como el carácter siguiente alfabéticamente.


#include <stdio.h>

int main(){

    char c, nxt;

    printf("Introduce un carácter\n");      //recibe caracter
    scanf ("%c", &c);                   

    nxt = c + 1;                              //guarda en d el siguiente caracter al introducido

    printf ("El código ASCII del carácter %c es %d y el siguiente carácter es %c \n", c, c, nxt);   //imprime por pantalla el mensaje

    return 0;


}