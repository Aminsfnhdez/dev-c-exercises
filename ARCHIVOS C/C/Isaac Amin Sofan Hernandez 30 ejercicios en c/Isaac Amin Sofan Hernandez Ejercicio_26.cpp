//Ejercicio # 26
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL,"");
	
	float ac, t, p, af, aa ;
	printf("Dígite el año actual: ");
	scanf("%f", &aa);
	printf("\n Digite ele año fúturo: ");
	scanf("%f", &af);
	printf("\n Dígite el costo actual: ");
	scanf("%f", &ac);
	printf("\n dígite la tasa de interes: ");
	scanf("%f", &t);
	p = ac * pow(((1+(t/100))),((af-aa)));
	printf("\n En el año %.0f el costo futuro será %.2f ", af, p);	
	getch();
}
