//1.- Realiza una función que reciba como entrada las coordenadas cartesianas
//de un punto del plano(x,y) y devuelva el cuadrante en el que se encuentra el punto 
//(1, 2, 3, 4), debe devolver 0 si se encuentra en un eje.

#include <stdio.h>


int coords (int x, int y);


int main (void){

    int  x, y, sol;

    printf("Ïntroduce un valor para la X \n");
    scanf ("%i", &x);

    printf("Ïntroduce un valor para la y \n");
    scanf ("%i", &y);
    if (x == 0 && y == 0)
        printf ("Las coordenadas se encuentren en el centro del eje \n");
    else
    {
        sol = coords (x, y);
        printf ("Las coordendas %i,%i se encuentran en el %i cuadrante \n", x, y, sol);
    }
    
}


int coords (int x, int y)
{
    if ( (x>0) && (y>0) )
        return (1);
    else if ( (x>0) && (y<0) )
        return (4);
    else if ( (x<0) && (y>0) )
        return (2);
    else if ( (x<0) && (y<0) )
        return (3);

}
