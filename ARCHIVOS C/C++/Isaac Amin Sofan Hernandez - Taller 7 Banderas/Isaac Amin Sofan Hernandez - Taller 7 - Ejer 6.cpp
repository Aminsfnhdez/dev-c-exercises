// Taller 7 Ejercicio 6 Banderas
// Autor Isaac Amín Sofán Hernández
#include <stdio.h> //librerias para ejecucion
#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias para ejecucion
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
#include <string.h>//libreria para 'string'
#include <math.h>//libreria para funciones matematicas
#include <windows.h>//libreria para usar 'Sleep'
void tablas (int, int); //declaro el subprograma
main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int p, q;
	char op = 's';
	while(op == 's')
	{
		printf("Ingrese dos números y le muestro las tablas de multiplicar desde el número menor hasta el mayor.");
		printf("\nDigite el primer número: ");
		scanf("%i", &p);
		printf("\nDigite el segundo número: ");
		scanf("%i", &q);
		tablas(p,q);
		getch();
		system("CLS");
		printf("\n¿Desea continuar? \nSi, teclee 'S' \nNo, teclee 'N'\n");
		scanf("%s", &op);
	}
	getch();
}
void tablas (int P, int Q)
{
	int cont, n=1;
	if(P<=Q)
	{
		printf("\nlas tablas de multiplicar de %i a %i son: ", P, Q);
		for(cont=P; cont<=Q; cont++)
		{
			for(n=1; n<=10; n++)
			{
				printf("\n%i * %i = %i", cont, n, cont*n);
				Sleep(500);
			}
		}
	}
	else
	{
		printf("\nlas tablas de multiplicar de %i a %i son: ", Q, P);
		for(cont=Q; cont<=P; cont++)
		{
			for(n=1; n<=10; n++)
			{
				printf("\n%i * %i = %i", cont, n, cont*n);
				Sleep(500);
			}
			getch();
		}
	}
}
