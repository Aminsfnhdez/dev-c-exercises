// Taller 6 Ejercicio 16 Ciclos
// Autor Isaac Amín Sofán Hernández
// En una empresa se requiere calcular el salario semanal de cada uno de los 100 obreros que laboran en ella; por cada obrero se lee nombre, código, horas trabajadas.
// El salario se obtiene de la siguiente, forma: Si el obrero trabaja 40 horas o menos se le paga $500 por hora. Si trabaja más de 40 horas se le paga $500 por cada una de 
// las primeras 40 horas y $700 por cada hora extra. Diga en un algoritmo, cuánto paga la empresa en total de salarios. El total de horas extras y
// valor pagado por horas extras pagadas.
#include <stdio.h> //librerias para ejecucion
#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias para ejecucion
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
#include <string.h>//libreria para 'string'
#include <math.h>//libreria para funciones matematicas
#include <windows.h>//libreria para usar 'Sleep'
void salario (int); //declaro el subprograma
main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int n = 100;
	salario(n);
	getch();
}
void salario (int N)
{
	char nombre[20];
	int codigo, horas_trab, hora_ext, val_sal, val_total_horas_ext, acum_sal=0, acum_hora_ext=0, acum_hora_extra=0, acum_total_horas=0;
	for(int i=1; i<=N; i++)
	{
		printf("Digite el nombre de trabajador número %i: ", i);
		scanf("%s", &nombre);
		printf("\nDigite el código de trabajador número %i: ", i);
		scanf("%i", &codigo);
		printf("\nDigite el total de horas trabajadas a la semana por parte del trabajador número %i: ", i);
		scanf("%i", &horas_trab);
		if(horas_trab<=40)
		{
			val_sal = horas_trab * 500;
		}
		else
		{
			hora_ext = horas_trab - 40;
			acum_hora_ext = acum_hora_ext + hora_ext;
			val_sal = (40 * 500) + (hora_ext * 700);
		}
		val_total_horas_ext = acum_hora_ext * 700;
		acum_sal = acum_sal + val_sal;
		acum_hora_extra = acum_hora_extra + hora_ext;
		acum_total_horas = acum_total_horas + horas_trab;
		printf("\nEl trabajador %s con código %i tiene un salario samanal de: %i. \nUn total de horas extras de: %i ", nombre, codigo, val_sal, hora_ext);
		Sleep(2000);
		system("CLS");
	}
	
	printf("El total pagado por concepto de salarios es: %i ", acum_sal);
	printf("\nSe pagarón un total de %i horas extra, con un valor de: %i ", acum_hora_ext, val_total_horas_ext);
	
	
}
