// Taller 6 Ejercicio 9 Ciclos
// Autor Isaac Amín Sofán Hernández
// Escriba un algoritmo que lea N números y muestre: El mayor y el número de veces que fue hallado, El porcentaje de números impares.
// Un mensaje que indique la existencia de un múltiplo de 7.
#include <stdio.h> //librerias para ejecucion
#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias para ejecucion
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
#include <string.h>//libreria para 'string'
#include <math.h>//libreria para funciones matematicas
#include <windows.h>//libreria para usar 'Sleep'
void calcular (int); //declaro el subprograma
main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int n;
	printf("Dígite la cantidad números a evaluar: ");
	scanf("%i", &n);
	calcular(n);
	getch();
}
void calcular(int N)
{
	int num, impar, mult_7, cont_mult_7=0, num_may=0, cont_num_may=0, cont_imp=0, porc_imp;
	
	for(int i=1; i<=N; i++)
	{
		printf("Dígite el número %i: ", i);
		scanf("%i", &num);
		if(num_may>=num)
		{
			if(num==num_may)
			{
				cont_num_may = cont_num_may + 1;
			}
			else
			{
				if(num>num_may)
				{
					cont_num_may = 1;
				}
			}
		}
		
		mult_7 = num%7;
		if(mult_7 == 0)
		{
			printf("El número %i es multiplo de 7\n", i);
			cont_mult_7 = cont_mult_7 + 1;
		}
		impar=num%2;
		if(impar!=0)
		{
			cont_imp = cont_imp + 1;
		}
	} 
	
	
	porc_imp = (cont_imp*100)/ N;
	printf("El número mayor es %i, y aparece %i veces", num_may, cont_num_may);
	printf("\nEl porcentaje de números impares es: %i%c", porc_imp, 37);
	printf("\nHay %i números multiplos de 7", cont_mult_7); 
}
