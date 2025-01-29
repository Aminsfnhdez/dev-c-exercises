//Taller 4 Ejercicio # 1 
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL,"");
	float a, b, d;
	printf("Dígite el primer número (Dividendo): ");
	scanf("%f", &a);
	printf("\n Digite el segundo número (Divisor): ");
	scanf("%f", &b);
	if(b != 0)
	{
		d = a / b;
		printf("\n La división entre %.2f y %.2f es %.2f ", a, b ,d);
	}
	else
	{
		printf("\n La división no es posible");
	}
	
	getch();	
}
