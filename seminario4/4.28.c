//28.- Se dispone de la información relativa a 100 estaciones meteorológicas diferentes 
//repartidas por una determinada área geográfica. Conocemos el nombre de las estaciones y 
//la cantidad de lluvia en litros/m2 que recogieron durante el año pasado en cada uno de los 12 meses. 
//Implementa la estructura adecuada para almacenar dicha información. Realiza las funciones necesarias 
//para determinar en qué punto llovió más y en cual menos y la cantidad media de agua recogida en las 
//estaciones meteorológicas durante cada mes.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 2
#define M 3
#define MAX 5000

    typedef struct 
    {
        char  name[10];
        int lluvia[M];

    }meteo;

void maximo (meteo vect[]);
void minimo (meteo vect[]);
void media (meteo vect[]);

int main ()
{
    meteo v_meteo[N];
    int i, j;

    for (i=0; i <= N; i++)
    {
        printf ("Introduce el nombre de la estación\n");
        fgets (v_meteo[i].name, 9, stdin);
        fflush (stdin);
        
        for (j = 0; j <= M; j++)
        {
            printf ("Introduce la cantidad de litros/m2 en en el mes %i\n", j);
            scanf ("%i", &v_meteo[i].lluvia[j]);
            fflush (stdin);
        }
    }

     maximo (v_meteo);
     minimo (v_meteo);
     media (v_meteo);

}


void maximo (meteo vect [])
{
   
    int i, j, meteo_aux = 0, mes_aux = 0, max = 0;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            if (vect[i].lluvia[j] > max)
            {
                max = vect[i].lluvia[j];
                meteo_aux = i;
                mes_aux = j;
            }

        }
    }

    printf ("El punto donde más ha llovido fue %s en el mes %i\n", vect[meteo_aux].name, mes_aux);
}

void minimo (meteo vect [])
{
    int i, j, meteo_aux = 0, mes_aux = 0, min = MAX;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            if (vect[i].lluvia[j] < min)
            {
                min = vect[i].lluvia[j];
                meteo_aux = i;
                mes_aux = j;
            }
        }
    }

    printf ("El punto donde menos ha llovido fue en el mes %i en %s\n", mes_aux, vect[meteo_aux].name);
}

void media (meteo vect [])
{
    float media[M], mes_aux[M] = {0};
    int i, j;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            mes_aux [j] = vect[i].lluvia[j] + mes_aux[j];
        }
    }

    for (i = 0; i < M; i++)
    {
        media[i] = (mes_aux[i] / M);
        printf ("La media de lluvias en el mes %i fue de %.2f litros/m2\n", i, media[i]);
    }
        
}