//Ejercicio # 27
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL,"");
	
	float x1, x2, yy1, yy2, d, d2;
	printf("Dígite el valor de x1: ");
	scanf("%f", &x1);	
	printf("\n Dígite el valor de x2: ");
	scanf("%f", &x2);
	printf("\n Dígite el valor de y1: ");
	scanf("%f", &yy1);
	printf("\n Dígite el valor de y2: ");
	scanf("%f", &yy2);
	d = ((pow(x1, 2) - pow(x2, 2)) + (pow(yy1, 2) - pow(yy2, 2)));
	d2 = pow(d, 2);
	printf("\n La distancia entre los puntos es: %.1f", d2);

	getch()	;
}

