// Estas dos lineas sirven para colocar comentarios

#include <stdio.h> //libreria standard input-output header o entrada y salida estandar
#include <conio.h>  

main()
{

printf ("*******  LO QUE APARECE CUANDO SE COMPILA EL PROGRAMA ESCRIBALO EN SU CUARDERNO! ******* \n\n");

printf ("******* Tipos de variables ******* \n\n");

printf ("    ** EJEMPLOS ** \n");
printf ("int a = 10; \n");
printf ("float iva = 19.5; \n");
printf ("string nombre = Poli (poli entre comillas dobles) \n ");
printf ("double num_bacterias = 324568976554591; \n");
printf ("char op1 = 'a'  \n ");

printf ("\n\n *-*-*-*   TAMAÑO DE MEMORIA DE LAS VARIABLES  *-*-*-*-* \n\n");
printf ("La variable de tipo ENTERO ocupa %d bytes de memoria \n", sizeof(int));
printf ("La variable de tipo ENTERO CORTO ocupa %d bytes de memoria \n", sizeof(short int));
printf ("La variable de tipo ENTERO LARGO %d bytes de memoria \n", sizeof(long int));
printf ("La variable de tipo FLOAT %d bytes de memoria \n", sizeof(float));
printf ("La variable de tipo ENTERO CON DECIMAL ocupa %d bytes de memoria \n", sizeof(double));
printf ("La variable de tipo ENTERO LARGO CON DECIMAL ocupa %d bytes de memoria \n", sizeof(long double));
printf ("La variable de tipo CHAR ocupa %d bytes de memoria \n", sizeof(char));
getch();  
}








