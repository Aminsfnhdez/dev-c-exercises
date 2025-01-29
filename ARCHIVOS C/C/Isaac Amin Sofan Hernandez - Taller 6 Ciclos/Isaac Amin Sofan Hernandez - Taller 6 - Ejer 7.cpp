// Taller 6 Ejercicio 7 Ciclos
// Autor Isaac Amín Sofán Hernández
// Leer la edad de una cantidad 'n' de personas e informe cuántos son mayores de 25 años, cuántos son menores de edad, porcentaje de menores y la edad promedio.
#include <stdio.h> //librerias para ejecucion
#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias para ejecucion
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
#include <string.h>//libreria para 'string'
#include <math.h>//libreria para funciones matematicas
#include <windows.h>//libreria para usar 'Sleep'
void edad (int); //declaro el subprograma
main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int n;
	printf("Dígite la cantidad de personas a evaluar: ");
	scanf("%i", &n);
	edad(n);
	getch();
}
void edad (int num)
{
	int edad, cont=0, cont_may=0, cont_men=0, cont_med=0, acum_edad=0;
	float promedio, porc_men;
	while(cont<num)
	{
		printf("Dígite la edad la persona %i: ", cont + 1);
		scanf("%i", &edad);
		if(edad>25)
		{
			printf("\nLa persona %i tiene mas de 25 años de edad", cont + 1);
			cont_may = cont_may + 1;
		}
		if(edad<18)
		{
			printf("\nLa persona %i es menor de edad", cont + 1);
			cont_men = cont_men + 1;
		}
		if((edad>18) && (edad<25))
		{
			printf("\nLa persona %i tiene entre 19 y 24 años", cont + 1);
			cont_med = cont_med + 1;
		}
		acum_edad = acum_edad + edad;
		cont = cont + 1;
		Sleep(2000);
		system("CLS");
	}
	promedio = acum_edad / num;
	porc_men = (cont_men * 100) / num;
	printf("Hay %i personas menores de edad", cont_men);
	printf("\nHay %i personas que tienen entre 19 y 24 años de edad", cont_med);
	printf("\nHay %i personas mayores de 25 años edad", cont_men);
	printf("\nEl promedio de las edades es: %.0f", promedio);
	printf("\nEl porcentaje de menores es: %.1f%c", porc_men, 37);
}
