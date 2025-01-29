// Taller 7 Ejercicio 1 Ciclos
// Autor Isaac Amín Sofán Hernández
#include <stdio.h> //librerias para ejecucion
#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias para ejecucion
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
#include <string.h>//libreria para 'string'
#include <math.h>//libreria para funciones matematicas
#include <windows.h>//libreria para usar 'Sleep'
int factorial (int); //declaro el subprograma
main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int n, facto; 
	char op ='s';
	while(op == 's')
	{
		printf("Digite el término hasta donde desea generar el factorial: ");
		scanf("%i", &n);
		facto = factorial(n);
		printf("\nEl factorial de %i es: %i ", n, facto);
		printf("\nDesea continuar. \nSi, Teclee 's' \nNo, Teclee 'n' \n");
		scanf("%s", &op);
	}
	getch();
}
int factorial(int N)
{
	int con, fac=1;
	if(N==0)
	{
		fac = 1;
	}
	else
	{
		for(con=1; con<=N; con++)
		{
			fac = fac * con;
		}
	}
	return fac;
}
