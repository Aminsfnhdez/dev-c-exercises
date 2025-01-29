// Taller 6 Ejercicio 5 Ciclos
// Autor Isaac Amín Sofán Hernández
// Sumar los 10 primeros números de la serie de Fibonacci
#include <stdio.h> //librerias para ejecucion
#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias para ejecucion
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
#include <string.h>//libreria para 'string'
#include <math.h>//libreria para funciones matematicas
#include <windows.h>//libreria para usar 'Sleep'
int fibonacci (int); //declaro el subprograma
main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int n=10, sumaf;
	sumaf = fibonacci(n);
	printf("La suma de los 10 primeros números de la serie Fibonacci es: %i", sumaf);
	getch();
}
int fibonacci(int N)
{
	int pen, ult=1, f=0, cont=1, acum=1;
	while (cont<N)
	{
		pen = ult;
		f = ult + pen;
		acum = acum + f;
		cont = cont + 1;
	}
	return acum;
}
