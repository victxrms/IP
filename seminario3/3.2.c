//2.- Realiza tres funciones que tengan como argumento un valor radio, y
//calculen el perímetro de la circunferencia, área del círculo y volumen de la esfera.
//Se debe implementar una función main que haga uso de estas funciones dependiendo de una opción del usuario.

#include <stdio.h>
#include <math.h>
#define pi 3.1459

float per (int r);
float area (int r);
float vol (int r);


int main (){

    int r, opc;
    float sol;

    printf("Introduce el valor del radio de la circunferencia \n");
    scanf ("%i", &r);

    do 
    {
        printf("Que operación deseas realizar? \n 1 - perímetro 2 - área 3 - volumen\n");
        scanf ("%i", &opc);
    } while ((opc != 1) && (opc != 2) && (opc != 3) );
    
    switch (opc)
    {
    case 1:
        sol = per (r);
        printf ("El valor del perímetro es de %.3f \n", sol);
        break;
    case 2:
        sol = area (r);
        printf ("El valor del area es de %.3f \n", sol);        
        break;
    case 3:
        sol = vol (r);
        printf ("El valor del volumen es de %.3f \n", sol);
        break;
    }

}

float per (int r){
    float per;
    per = 2 * pi * r;
    return (per);
}

float area (int r){
    float area;
    area = 2 * pi * pow (r, 2);
    return (area);
}

float vol (int r){
    float vol;
    vol = (4/3) * pi * pow (r, 3);
    return (vol);
} 