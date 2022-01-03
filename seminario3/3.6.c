//6.- Realiza un programa que calcule la intensidad que circula por una resistencia dados R y V. 
//I=V/R suponiendo que la función main del programa sea:
//main()
//{
//float res, vol, intensidad;
//obtener_valores(&res,&vol); 
//intensidad= calcular(res, vol); 
//imprimir_respuesta(intensidad); return 0;
//}

#include <stdio.h>

void obtener_valores (float* res, float* vol);
float intensidad (float res, float vol);
void imprimir_respuesta (float intensidad);

int main (){

    float res, vol, inten;

    obtener_valores (&res, &vol);
    inten = intensidad (res, vol);
    imprimir_respuesta (inten);

    return 0;
}

void obtener_valores (float* res, float* vol) {

    printf ("Introduce el valor de la resistencia \n");
    scanf ("%f", res);


    printf ("Introduce el valor del voltaje \n");
    scanf ("%f", vol);

}



float intensidad (float res, float vol){
    
    return (vol/res);
}

void imprimir_respuesta (float intensidad){

    printf ("La intensidad es de %f \n", intensidad);


}
