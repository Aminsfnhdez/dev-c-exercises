//Ejercicio # 24
// Autor Isaac Am�n Sof�n Hern�ndez

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL,"");
		
	float  a, b, h;
	printf("D�gite el valor del cateto A: ");
	scanf("%f", &a);
	printf("D�gite el valor del cateto B: ");
	scanf("%f", &b);
	h = sqrt( pow(a, 2) + pow(b,2) );
	printf("\n La hipotenusa del tri�ngulo rect�ngulo es: %.2f", h);
	
	getch();	
}
