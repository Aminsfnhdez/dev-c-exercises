// Taller 7 Ejercicio 2 Banderas
// Autor Isaac Amín Sofán Hernández
#include <stdio.h> //librerias para ejecucion
#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias para ejecucion
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
#include <string.h>//libreria para 'string'
#include <math.h>//libreria para funciones matematicas
#include <windows.h>//libreria para usar 'Sleep'
float serie (float); //declaro el subprograma
main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	float numx, resultado;
	char op ='s';
	while(op == 's')
	{
		printf("Digite el valor de 'X', para determinar el valor de F(x) de la serie: ");
		scanf("%f", &numx);
		resultado = serie(numx);
		printf("\nPara X = %.0f, el valor de F(x) es: %.0f", numx, resultado);
		printf("\nDesea continuar. \nSi, Teclee 's' \nNo, Teclee 'n' \n");
		scanf("%s", &op);
	}
	getch();
}
float serie (float x)
{
	float fx=0, i=0, fac=1, ter=1;
	while(i<x)
	{
		fx = fx + ter;
		i = i + 1;
		fac = fac * i;
		ter = pow(x,i)/(fac*pow(-1,i));
	}
	return fx + ter;
}
