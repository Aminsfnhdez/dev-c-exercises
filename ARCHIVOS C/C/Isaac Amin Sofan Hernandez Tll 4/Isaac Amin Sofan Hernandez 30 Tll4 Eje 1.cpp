//Taller 4 Ejercicio # 1 
// Autor Isaac Am�n Sof�n Hern�ndez

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL,"");
	float a, b, d;
	printf("D�gite el primer n�mero (Dividendo): ");
	scanf("%f", &a);
	printf("\n Digite el segundo n�mero (Divisor): ");
	scanf("%f", &b);
	if(b != 0)
	{
		d = a / b;
		printf("\n La divisi�n entre %.2f y %.2f es %.2f ", a, b ,d);
	}
	else
	{
		printf("\n La divisi�n no es posible");
	}
	
	getch();	
}
