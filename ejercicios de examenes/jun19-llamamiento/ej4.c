//EJERCICIO 4: Escribe la sentencia para definir: 
//Un tipo enumerado que se llame lógico y contenga las constantes V y F.
//Una variable f como un puntero a función (función que recibe un puntero a entero y una matriz de 2 filas y 3 columnas, y no devuelva nada). 
//Una variable v como un vector de 10 punteros a entero. 
//Una variable p_v como un puntero a un vector de 8 punteros a float.
//Una variable c como una cadena de caracteres que pueda contener una cadena de longitud 10.

//  a)

enum logico
{
    V = 1,
    F = 0
};

//  b)

void (*f)(int *a, int b[2][3]);

//  c)

int *v[10];

//  d)

float (*p_v)[8];

//  e)

char c[10];


