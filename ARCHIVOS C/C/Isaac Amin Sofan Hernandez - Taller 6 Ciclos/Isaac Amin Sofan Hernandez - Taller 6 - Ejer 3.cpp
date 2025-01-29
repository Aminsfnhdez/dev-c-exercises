// Taller 6 Ejercicio 3 Ciclos
// Autor Isaac Amín Sofán Hernández
// Hallar la suma de los números enteros del 1 a 100 y hallar el valor promedio.
#include <stdio.h> //librerias para ejecucion
#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias para ejecucion
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
#include <string.h>//libreria para 'string'
#include <math.h>//libreria para funciones matematicas
//void promedio (int); //declaro el subprograma
main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int  suma = 0;
	float promedio;
	for(int cont=0; cont <= 100; cont++)
	{
		suma = suma + cont; 
	}
	promedio = suma / 100;
	printf("La suma de los numeros enteros del 1 a 100 es: %i", suma);
	printf("\nEl promedio de la suma de los numeros enteros del 1 a 100 es: %.0f", promedio);
	getch();
}


