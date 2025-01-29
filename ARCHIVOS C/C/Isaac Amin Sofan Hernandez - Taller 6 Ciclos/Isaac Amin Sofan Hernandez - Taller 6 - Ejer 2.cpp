// Taller 6 Ejercicio 2 Ciclos
// Autor Isaac Am�n Sof�n Hern�ndez
// Leer una cantidad 'n' de n�meros y hallar cu�ntos positivos y cu�ntos negativos fueron le�dos.
#include <stdio.h> //librerias para ejecucion
#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias para ejecucion
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
#include <string.h>//libreria para 'string'
#include <math.h>//libreria para funciones matematicas
void calcular (int); //declaro el subprograma
main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int num;
	printf("D�gite la cantidad de numeros a evaluar y le muestro cu�ntos son positivos y cu�ntos son negativos:  ");
	scanf("%i", &num);
	system("CLS");
	calcular(num);
	getch();
}
void calcular(int numero)
{
	int cont=0, acum_pos=0, acum_neg=0; 
	float n;
	while(cont<numero)
	{
		printf("D�gite el n�mero %i: ", cont+1);
		scanf("%f", &n);
		if(n>0)
		{
			acum_pos = acum_pos + 1; 
		}
		else
		{
			if(n<0)
			{
				acum_neg = acum_neg + 1;
			}
		}
		cont = cont + 1;
	}
	system("CLS");
	printf("La cantidad de n�meros positivos es: %i", acum_pos);
	printf("\nLa cantidad de n�meros negativos es: %i", acum_neg);
}

