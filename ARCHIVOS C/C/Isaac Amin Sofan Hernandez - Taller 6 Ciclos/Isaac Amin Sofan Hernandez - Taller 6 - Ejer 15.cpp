// Taller 6 Ejercicio 15 Ciclos
// Autor Isaac Amín Sofán Hernández
// Leer N números y hallar cuántos son múltiplos de 5 y mostrarlos; los que no sean múltiplos sumarlos y mostrar su suma. Además, hallar el valor promedio de todos los 
// números y el porcentaje de positivos.
#include <stdio.h> //librerias para ejecucion
#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias para ejecucion
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
#include <string.h>//libreria para 'string'
#include <math.h>//libreria para funciones matematicas
#include <windows.h>//libreria para usar 'Sleep'
void multiplo (int); //declaro el subprograma
main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int n;
	printf("Digite total de números a calcular: ");
	scanf("%i", &n);
	multiplo(n);
	getch();
}
void multiplo (int N)
{
	float num, cont_mult=0, suma=0, cont_num_pos=0, acum_num=0, cont_no_mult=0, prom, porc_pos;
	int new_num, mod;
	for(int i=0; i<N; i++)
	{
		printf("Digite el número %i: ", i+1);
		scanf("%f", &num);
		new_num = num;
		mod = new_num%5;
		
		if(mod==0)
		{
			cont_mult = cont_mult + 1;
			printf("\nEl número %.0f es multiplo de 5", num);
		}
		else
		{
			cont_no_mult = cont_no_mult + 1;
			suma = suma + num;
			printf("\nEl número %.0f no es multiplo de 5", num);
		}
		
		if(num>0)
		{
			cont_num_pos = cont_num_pos + 1;
		}
		acum_num = acum_num + num;
		Sleep(2000);
		system("CLS");
	}
	prom = acum_num / N;
	porc_pos = (cont_num_pos * 100) / N;
	printf("%.0f números son multiplos de 5", cont_mult);
	printf("\n%.0f números no son multiplos de 5 y su suma es: %.0f", cont_no_mult, suma);
	printf("\nEl valor promedio de todos los números es: %.0f", prom);
	printf("\nEl porcentaje de números positivos es: %.0f%c", porc_pos, 37);
}
