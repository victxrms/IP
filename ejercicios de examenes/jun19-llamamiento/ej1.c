//EJERCICIO 1: Se requiere realizar un programa para llevar a cabo
//cierto control sobre los productos de un establecimiento. El número
//máximo de products diferentes en almacén es de 200. De cada
//producto de deberá almacenar su nombre, cantidad que se tiene,
//precio de venta al público y precio de compra al mayorista.
//a) Defina la estructura necesaria en pseudocódigo y en C para
//almacenar dicha información. La reserva de memoria en C deberá
//hacerse de manera dinámica.
//b) Desarrolle una función en C que reciba la estructura y un nombre
//de producto y escriba en un fichero el nombre de dicho producto
//junto a la cantidad existente, o 0 existencias si el producto no existe.
//c) Realice un procedimiento en pseudocódigo que escriba el nombre
//del producto con mayor margen de beneficio.

#include <stdio.h>
#include <stdlib.h>


/*
Apartado a) - Pseudocódigo

registro: prod
    cadena nombre
    entero cant
    real p_venta
    real p_compra
fin_registro

vector de prod de [200]: prod_v
*/

//Apartado a) - C

typedef struct                      
{
    char nombre[20];
    int cant;
    float p_venta;
    float p_compra;

}prod;

void busca (prod *prod_v, char *prod);

int main ()
{
    prod *prod_v;
    char produc[20];

    if ((prod_v = (int*)malloc(200*sizeof(prod))) != NULL)         // Apartado a) - Reserva dinamica de memoria
        printf ("Se han reservado correctamente la memoria necesaria para los 200 primeros productos\n");
    else printf("No se ha podido reservar correctamente la memoria\n");

    printf ("Introduce el producto a buscar\n");
    fgets (produc, 20, stdin);

    busca (prod_v, produc);
}

//Apartado b)

void busca (prod *prod_v, char *produc)
{
    FILE *fp;
    int i, ex = 0;

    if ((fp = fopen ("prod.txt", "w+")) != NULL)
    {
        for (i = 0; i < 200; i++)
        {
            if (strcmp (prod_v[i].nombre, produc) == 0)
            {
                fputs (prod_v[i].nombre, fp);
                fprintf (fp, "%i", prod_v[i].cant);
                ex++;
            }
        }

        if (ex == 0)
        printf ("El producto no existe\n");

    }else printf ("No se ha podido abrir correctamente el archivo\n");
}


/*
Apartado c)

Cabecera: procedimiento proc(prod_v)
Precondición: Recibe el vector de registro prod
Postcondicion: Devuelve el producto con mayor margen de beneficio (coste-venta)

procedimiento proc (vector prod_v)

    var 
    entero i, max <- 0, aux = 0
inicio
    desde i <- 1 hasta  200 hacer i++
        si ((prod_v[i].p_compra - prod_v[i].p_venta) > max)
            max <- prod_[i].p_compra - prod_v[i].p_venta
            aux <- i
        fin_si
    fin_desde

    escribir ("El producto con mayor margen de beneficio es '' con un margen de '' €/ud", prod_v[aux], max )


*/
