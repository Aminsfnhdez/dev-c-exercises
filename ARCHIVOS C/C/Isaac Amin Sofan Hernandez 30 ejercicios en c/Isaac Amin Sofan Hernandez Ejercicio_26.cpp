//Ejercicio # 26
// Autor Isaac Am�n Sof�n Hern�ndez

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL,"");
	
	float ac, t, p, af, aa ;
	printf("D�gite el a�o actual: ");
	scanf("%f", &aa);
	printf("\n Digite ele a�o f�turo: ");
	scanf("%f", &af);
	printf("\n D�gite el costo actual: ");
	scanf("%f", &ac);
	printf("\n d�gite la tasa de interes: ");
	scanf("%f", &t);
	p = ac * pow(((1+(t/100))),((af-aa)));
	printf("\n En el a�o %.0f el costo futuro ser� %.2f ", af, p);	
	getch();
}
