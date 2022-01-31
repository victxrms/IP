//EJERCICIO 1: En el mundo hay muchos deportes peculiares: Chess Boxing, Spikeball, kabaddi. 
//Así que el departamento de ingeniería informática de la UCA ha decidido hacer el suyo. 
//El deporte en cuestión consistirá en el lanzamiento de botellas, donde participarán un total de 60 participantes 
//(siendo las 30 primeras de la categoría femenina y los 30 últimos de la categoría masculina); 
//serán 5 lanzamientos: el primero con una botella de 0.25 L, el segundo con una de 0.5L, 
//el tercero con una de 1L, el cuarto con una de 1.5 L y por último se lanzará una botella de 5 L 
//Se desea almacenar el nombre del participante(cadena), su categoría (carácter: F/M), sus lanzamientos 
//con cada botella, el peso de cada botella, y la puntuación total de cada lanzamiento. (siendo este último 
//calculado como el producto de el peso de cada botella y la distancia del lanzamiento realizado). 
//a) Diseña la estructura adecuada en c y en pseudocódigo. 
//b) Diseña n procedimiento que reciba la estructura rellenada y calcule la puntuación total de cada prueba 
//c) Diseña una función en c que reciba la estructura rellenada, un carácter indicando la categoría y un peso de botella. 
//La función debe enseñar por pantalla el mejor lanzamiento para esa categoría.


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Apartado a) - Pseudocódigo

/*

    registro: lanz
        real: peso
        real: puntxpeso
        real: puntot

    fin_registro

    registro: participante
        cadena: nombre
        caracter: cat
        vector de [5] de lanzamiento: lanz_v
    fin_registro

    vector de [60] de participante: part_v

*/

// Apartado a) - C

typedef struct 
{
    float peso;
    float puntxpeso;
    float puntot;

}lanz;

typedef struct
{
    char nombre[10];
    char cat;
    lanz lanz_v[5];

}participante;

participante part_v[60];

/* Apartado b) 

Cabecera:   procedimiento tot (E participante part_v)
Precondición: Recibe la estructura rellena 
Postcondición: Calcula la puntuación total de cada lanzamiento

procedimiento tot (E participante: part_v)
    var:
    entero i, j
        inicio
        desde i <- 1 hasta 60 hacer
            desde j <- 1 hasta 5 hacer
                part_v[i].lanz[j].puntot <- part_v[i].lanz[j].puntxpeso * part_v[i].lanz[j].peso
            fin_desde
        fin_desde
fin_procedimiento


*/

// Apartado c)

void lanztot (participante part_v[], char cat, float pes)
{
    int i, j, maxpart, auxpart[5];
    float max[5];

    switch (cat)
    {
    case 'M':
        i = 0;
        maxpart = 30;
        break;
    case 'F':
        i = 30;
        maxpart = 60;
        break;
    
    default:
        break;
    }

    for (i; i < maxpart; i++)
    {
        for (j = 0; j < 5; j++)
        {
            part_v[i].lanz_v[j].puntot = part_v[i].lanz_v[j].puntxpeso * part_v[i].lanz_v[j].peso;
            if (part_v[i].lanz_v[j].puntot > max[j])
            {
                auxpart[j] = i;
                max[j] = part_v[i].lanz_v[j].puntot;
            }

        }
    }

    for (i = 0; i < 5; i++)
    {
        printf ("El lanzamiento de la categoría %c en el peso %i con mejor es puntuación es %s con un total de %f puntos", cat, i, part_v[auxpart[i]].nombre, part_v[auxpart[i]].lanz_v[auxpart[i]].puntot);
    }

}
