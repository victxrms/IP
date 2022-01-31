//EJERCICIO 6: Mediante el uso de funciones, hacer los siguientes apartados: 

//a) Crea una función que defina una matriz de enteros y la rellene 
//b) En otra función calcula la media de los números en la matriz que no estén en la diagonal. 
//c) En otra función escribe por pantalla el número de números que estén dentro de la matriz y sean 
//superior al de la media. 
//d) En otra función crea un vector dinámico que guarde todos los números que estén dentro de la matriz 
//y sea superior a la media. 
//e) En otra función crea un fichero binario que escriba el vector.

#include <stdio.h>
#include <stdlib.h>

#define M 5
#define N 5

void rellena (int mat[][N]);
int media (int mat[][N]);
int num_media (int mat[][N], int m);
void vec_media (int mat[][N], int m, int n, int vec[]);
void vec_fich (int mat[][N], int vec[], int n);

int main ()
{
    int mat[M][N], med, n, *vec;

    rellena (mat);
    med = media (mat);
    n = num_media(mat, med);
    if ((vec = (int*)malloc(n * sizeof(int))) != NULL)
    {
        vec_media (mat, med, n, vec);
        vec_fich (mat, vec, n);
    }else printf ("No se ha podido reservar correctamente la memoria necesaria\n");

}

void rellena (int mat[][N])
{
    int i, j;

    for (i = 0; i < M; i++)
        for (j = 0; j < N; j++)
        {
            printf ("Introduce el elemento para la posición %i,%i", i, j);
            scanf ("%i", &mat[i][j]);
        }
}

int media (int mat[][N])
{
    int i, j, sum = 0, cont = 0, media;

    for (i = 0; i < M; i++)
        for (j = 0; j < N; j++)
        {
           if (i != j)
           {
               sum += mat[i][j];
               cont++;
           }
        }
    media = sum / cont;

    return (media);
}

int num_media (int mat[][N], int m)
{
     int i, j, cont = 0;

    for (i = 0; i < M; i++)
        for (j = 0; j < N; j++)
        {
           if (mat[i][j] > m)
           cont++;
        }
    printf ("El número de números superiores a la media (%i) es de %i\n", m, cont);
    return (cont);
}

void vec_media (int mat[][N], int m, int n, int vec[])
{
     int i, j, h, cont = 0;

    for (h = 0; h < n; h++)
        for (i = 0; i < M; i++)
            for (j = 0; j < N; j++)
            {
            if (mat[i][j] > m)
            vec[h] = mat[i][j];
            }
}

void vec_fich (int mat[][N], int vec[], int n)
{
    FILE *fp;

    if ((fp = fopen ("vec.txt", "wb+")) != NULL)
    {
        fwrite (&vec[0], sizeof (int), n, fp);
    }else printf ("No se ha podido abrir correctamente el archivo\n");
}