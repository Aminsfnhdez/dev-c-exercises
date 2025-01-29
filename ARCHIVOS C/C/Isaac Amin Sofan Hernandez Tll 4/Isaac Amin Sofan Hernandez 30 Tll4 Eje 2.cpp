//Taller 4 Ejercicio # 2 
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL,"");
	float a, b;
	printf("Dígite el número al que desea sacar raíz cuadrada: ");
	scanf("%f", &a);
	if(a > 0)
	{
		b = sqrt(a);
		printf("\n La raíz cuadrada de %.0f es: %.2f", a, b);
	}
	else
	{
		printf("\n El número %.0f tiene raíz imagínaria",a);
	}
	getch();	
}
