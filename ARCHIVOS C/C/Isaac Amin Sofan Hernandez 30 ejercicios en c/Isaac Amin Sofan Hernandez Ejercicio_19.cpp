//Ejercicio # 19
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	
	float inver1, inver2, inver3, inverTotal, porcInver1, porcInver2, porcInver3;
	printf("Dígite el valor de la inversión número 1: ");
	scanf("%f", &inver1);
	printf("\n Dígite el valor de la inversión número 2: ");
	scanf("%f", &inver2);
	printf("\n Dígite el valor de la inversión número 3: ");
	scanf("%f", &inver3);
	inverTotal = inver1 + inver2 + inver3;
	porcInver1 = (inver1 / inverTotal) * 100;
	porcInver2 = (inver2 / inverTotal) * 100;
	porcInver3 = (inver3 / inverTotal) * 100;
	printf("\n La inversión total es: %.2f", inverTotal);
	printf("\n El porcentaje de la inversión número 1 es: %.2f",porcInver1);
	printf("\n El porcentaje de la inversión número 2 es: %.2f",porcInver2);
	printf("\n El porcentaje de la inversión número 3 es: %.2f",porcInver3);
	
	getch();
	
}
