//16.- Un cuadrado latino de orden N es una matriz cuadrada que 
//en su primera fila contiene los N primeros números naturales y en 
//cada una de las siguientes N-1 filas contiene la rotación de la fila 
//anterior un lugar a la derecha. Realiza un programa que reciba como parámetro
//la dimensión del cuadrado y genere la matriz correspondiente a su cuadrado latino

#include <stdio.h>


#define MAX 10

void rellena (int array[MAX][MAX]);
void salida (int array[MAX][MAX]);

int main ()
{
    
    int array[MAX][MAX];

    rellena (array);
    salida (array);

}


void rellena (int array[MAX][MAX])
{

    int i, j, natur;

        for (i=0; i<MAX; i++)
        {
            natur = 1;

            for (j=i; j<MAX; j++)
            {
                array [i][j] = natur;
                natur++;
            }

            natur = MAX;

            for(j=i-1; j >= 0; j--)

            {
                array [i][j] = natur;
                natur--;
            }
 
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
            printf("%i\t " ,array[i][j]); 
            }
     printf("\n"); 
    }
        
   
            
}
            



