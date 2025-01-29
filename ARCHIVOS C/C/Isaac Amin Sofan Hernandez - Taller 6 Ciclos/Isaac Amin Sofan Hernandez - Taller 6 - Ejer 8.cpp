// Taller 6 Ejercicio 8 Ciclos
// Autor Isaac Amín Sofán Hernández
// Realizar un algoritmo que genere y sume los números pares comprendidos entre -15 y 2000.
#include <stdio.h> //librerias para ejecucion
#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias para ejecucion
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
#include <string.h>//libreria para 'string'
#include <math.h>//libreria para funciones matematicas
#include <windows.h>//libreria para usar 'Sleep'
//void edad (int); //declaro el subprograma
main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int suma=0, mod;
	printf("Los números pares entre -15 y 2000 son: \n");
	for (int cont = -15; cont <= 2000; cont++ )
	{
		
		mod = cont % 2;
		if(mod == 0)
		{
			suma = suma + cont;
			printf("%i, ", cont);
		}
	}
	printf("\nLa suma de los números pares entre -15 y 2000 es: %i", suma);
	
	getch();
}
