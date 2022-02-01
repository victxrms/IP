//Un restaurante tiene interés en informatizar las reservas de su comedor. Debido al protocolo COVID-19 el 
//número de mesas y comensales está limitado y el restaurante ha decidido establecer cuatro turnos de comida 
//para compensar las pérdidas del negocio. Los dos primeros turnos son para el horario de comidas y los dos 
//últimos para el horario de cenas. El número máximo de mesas que se pueden ocupar en cada turno es de 25.
//Cuando se realiza una reserva, se deberá indicar el turno que se desea (1°, 2°, 3° o 4°). Si quedan mesas 
//disponibles según las preferencias del cliente, el "maitre" realizará la reserva almacenando para esa mesa 
//y turno, el nombre y apellidos del comensal que realiza la reserva, el número de teléfono y el número total 
//de comensales. Al finalizar el servicio, se almacenará también el importe de la factura de la mesa.
//El gestor del restaurant desea tener almacenada la información de las reservas realizadas por cada día del 
//mes (suponiendo un mes de 30 días y que el restaurante no cierra nunca). Se supone que al comenzar el mes 
//todas las mesas de todos los turnos se inicializan poniendo el número de comensales a cero.
//Suponiendo que la información de las reservas del mes ya está almacenada en la estructura se pide:

#include <stdio.h>
#include <string.h>

//a) Diseña la estructura necesaria (en pseudocódigo y en lenguaje C) para almacenar adecuadamente los datos 
//de las reservas.

    typedef struct 
    {
        char nombre[10];
        char apellidos[20];
        int telf;
        int comen;
        float cuenta;
    }mesa;

    typedef struct
    {
        mesa mes_v[25];
    }turno;

    typedef struct
    {
        turno turn_v[4];
    }dia;

    dia dia_v[30];

/*

    registro: mesa
        cadena nombre
        cadena apellidos
        entero telf
        entero comen
        real cuenta
    fin_registro

    registro: turno
        vector de [25] de mesa: mes_v
    fin_registro

    registro: dia
        vector de [4] de turno: turn_v
    fin_registro

    vector de [30] de dia: dia_v

*/

//b) Diseña un procedimiento en pseudocódigo que reciba como parámetro la estructura diseñada en el apartado 
//interior y escriba cuál es el día del mes y en qué tipo de turno (comida o cena) ha habido mayor número de 
//comensales. El procedimiento también deberá escribir por pantalla el número de mesas que se han quedado 
//libres por día y turno (1, 2, 3 o 4).

/*

    Algoritmo maximo 

        // Cabecera: (E vector dia_v)
        // Precondición: Recibe un vector de [30] de dia con sus respectivos datos rellenados previamente.
        // Postcondición: Escribe por pantalla el dia del mes y en que turno ha habido un mayor numero de comensales
        //                además de el número de mesas libres por día y turno.

        procedimiento proc_max (E vector de dia: )
            var: i, j, k, l, max = 0, maxd, maxt, mesas = 0;
        inicio
            desde i <- 1 hasta 30 hacer
                desde j <- 1 hasta 4 hacer
                    desde k <- 1 hasta 25 hacer
                        si dia_v[i].turno_v[j].mesa[j].comen > 0
                        mesas++;
                        si dia_v[i].turno_v[j].mesa[j].comen > max
                        max = dia_v[i].turno_v[j].mesa[j].comen
                        maxd = i
                        maxt = j
                        fin_si
                    fin_desde
                    escribir ("El numero de mesas libres para el turno %i el día %i es de: %i mesas", j, i, 25-mesas)
                fin_desde
            fin_desde
            segun sea (maxt) hacer
                1:  escribir ("El día que mas comensales han habido ha sido el %i en la comida", maxd)
                2:  escribir ("El día que mas comensales han habido ha sido el %i en la comida", maxd)
                3:  escribir ("El día que mas comensales han habido ha sido el %i en la cena", maxd)
                4:  escribir ("El día que mas comensales han habido ha sido el %i en la cena", maxd)
        fin procedimiento

*/


//c) Diseña una función en lenguaje C que reciba como parámetros la estructura anterior, el apellido de un 
//comensal y el número de turno (1, 2, 3 o 4) y escriba en un fichero el total facturado por las mesas reservadas 
//por dicho comensal a lo largo del mes en dicho turno.

void fact (char *nomb, int tur);

void fact (char *nomb, int tur)
{
    FILE *fp;
    int i, j, k;
    float tot = 0;

    if ((fp = fopen ("factura.txt", "w+")) != NULL)
    {
        for (i = 0; i < 30; i++)
            for (k = 0; k < 25; k++)
            if (strcmp (dia_v[i].turn_v[tur].mes_v[k].nombre, nomb) == 0)
            tot += dia_v[i].turn_v[tur].mes_v[k].cuenta;

        fprintf ("El total del comensal %s a lo largo del mes para el turno seleccionado es de %.2f\n", nomb, tot);
    }
}






