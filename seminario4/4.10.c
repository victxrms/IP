//10.- Realiza un programa que dada una matriz cuadrada de números reales, 
//obtenga una segunda matriz traspuesta de la primera, escribiendo el resultado por pantalla.


#include <stdio.h>

#define MAX 3

void leer (int array[MAX][MAX]);
void salida (int array[MAX][MAX]);

int main ()
{
    

    int array[MAX][MAX];

    leer (array);

    salida (array);


}


void leer (int array[MAX][MAX])
{

    int i, j;

    for (i=0; i < MAX; i++)
        for (j=0; j < MAX; j++)
        {
        printf ("Introduce un elemento para la posicion %i, %i \n", i, j);
        scanf ("%i", &array[i][j]);
        }

}

void salida (int array[MAX][MAX])
{
    int i, j;

    printf ("\n\n");

    for (i=0; i < MAX; i++)
    {
            for (j=0; j < MAX; j++)
            { 
            printf("%i\t " ,array[j][i]); 
            }
     printf("\n"); 
    }
        
   
            
}
            



