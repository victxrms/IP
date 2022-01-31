//EJERCICIO 5: Suponiendo la función f cuya cabecera es la siguiente: 	char f (int a, double b, char * c) 
//a) Define pf como un puntero a una función del tipo f. 
//b) Escribe la instrucción para hacer que pf apunte a f. 
//c) Escribe las instrucciones necesarias para ejecutar la función f a través de pf.

// Apartado a)

char (*pf)(int a, double b, char *c);

// Apartado b)

pf = f;

// Apartado c)

char exec;
exec = (*pf)(7, 0.54, "ip:(");