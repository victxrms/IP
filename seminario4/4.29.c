//32.- Una empresa desea realizar un programa para controlar la permanencia de sus trabajadores en el 
//lugar de trabajo. Para ello debe almacenar la hora de llegada y salida de cada trabajador en horas, 
//minutos y segundos de cada uno de los cinco días laborables de la semana. Además se desea almacenar 
//nombre, apellidos, dni, y salario por hora de cada trabajador. Elige la estructura adecuada para almacenar 
//esta información y realiza las funciones básicas de inicialización e inserción de información.
//Suponiendo que cada trabajador debe contar con una permanencia de 35 horas semanales, se considerarán el 
//resto como horas extra. El programa debe obtener el nombre, apellidos y el salario total de cada uno de 
//los trabajadores considerando un incremento de un 10% del salario por hora para las horas extra. 
//Así como, los nombres y apellidos de todos aquellos trabajadores que contabilicen una permanencia semanal 
//menor a la exigida por la empresa.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 1
#define D 2

typedef struct
{
    int hora;
    int min;
    int seg;

}horario;

typedef struct 
{
    char name[10];
    char apellidos[20];
    float salar_h;
    horario llegada[5];
    horario salida[5];

}trabajador;


void rellena (trabajador trab_v[N]);
void salarios (trabajador trab_v[N]);

int main ()
{
    trabajador trab_v[N];

    rellena (trab_v);

    salarios (trab_v);

}

void rellena (trabajador trab_v[])
{
    int i, j;

    for (i = 0; i < N; i++)
    {
        printf("Introduce el nombre del trabajador con ID %i\n", i);
        fgets(trab_v[i].name, 10, stdin);
        fflush (stdin);
        printf("Introduce los apellidos del trabajador con ID %i\n", i);
        fgets(trab_v[i].apellidos, 10, stdin);
        fflush (stdin);
        printf("Introduce el salario por hora del trabajador con ID %i\n", i);
        scanf ("%f", &trab_v[i].salar_h);
        fflush (stdin);

        for (j = 0; j < D; j++)
        {
            printf("Introduce la hora de llegada  del dia %i del trabajador con ID %i\n", j+1, i);
            scanf ("%i", &trab_v[i].llegada[j].hora);
            fflush (stdin);       
            printf("Introduce el minuto de llegada  del dia %i del trabajador con ID %i\n", j+1, i);
            scanf ("%i", &trab_v[i].llegada[j].min);
            fflush (stdin);          
            printf("Introduce el segundo de llegada  del dia %i del trabajador con ID %i\n", j+1, i);
            scanf ("%i", &trab_v[i].llegada[j].seg);
            fflush (stdin);

            printf("Introduce la hora de salida del dia %i del trabajador con ID %i\n", j+1, i);
            scanf ("%i", &trab_v[i].salida[j].hora);
            fflush (stdin);       
            printf("Introduce el minuto de salida del dia %i del trabajador con ID %i\n", j+1, i);
            scanf ("%i", &trab_v[i].salida[j].min);
            fflush (stdin);          
            printf("Introduce el segundo de salida del dia %i del trabajador con ID %i\n", j+1, i);
            scanf ("%i", &trab_v[i].salida[j].seg);
            fflush (stdin);
        }
    }
}


void salarios (trabajador trab_v[])
{
    int i, j, hor=0, segs = 0, mins = 0;
    float salt = 0;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < 5; j++)
        {
            hor = trab_v[i].salida[j].hora - trab_v[i].llegada[j].hora + hor;
        }

        if (hor >= 35)
            {
                hor = hor - 35;
                salt = (35*trab_v[i].salar_h) + (hor*trab_v[i].salar_h*1.1);
            } else 
                {
                salt = hor * trab_v[i].salar_h;
                printf ("El trabajador con ID %i no ha trabajado las horas minimas, contando asi con un total de %i horas trabajadas", i, hor);
                }

        
        printf ("El salario del trabajador con ID %i es de %.2f\n", i, salt);
    }

}