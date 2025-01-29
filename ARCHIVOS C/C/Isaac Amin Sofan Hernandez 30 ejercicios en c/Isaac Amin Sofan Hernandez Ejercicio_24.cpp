//Ejercicio # 24
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL,"");
		
	float  a, b, h;
	printf("Dígite el valor del cateto A: ");
	scanf("%f", &a);
	printf("Dígite el valor del cateto B: ");
	scanf("%f", &b);
	h = sqrt( pow(a, 2) + pow(b,2) );
	printf("\n La hipotenusa del triángulo rectángulo es: %.2f", h);
	
	getch();	
}
