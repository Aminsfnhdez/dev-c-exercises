//Ejercicio # 19
// Autor Isaac Am�n Sof�n Hern�ndez

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	
	float inver1, inver2, inver3, inverTotal, porcInver1, porcInver2, porcInver3;
	printf("D�gite el valor de la inversi�n n�mero 1: ");
	scanf("%f", &inver1);
	printf("\n D�gite el valor de la inversi�n n�mero 2: ");
	scanf("%f", &inver2);
	printf("\n D�gite el valor de la inversi�n n�mero 3: ");
	scanf("%f", &inver3);
	inverTotal = inver1 + inver2 + inver3;
	porcInver1 = (inver1 / inverTotal) * 100;
	porcInver2 = (inver2 / inverTotal) * 100;
	porcInver3 = (inver3 / inverTotal) * 100;
	printf("\n La inversi�n total es: %.2f", inverTotal);
	printf("\n El porcentaje de la inversi�n n�mero 1 es: %.2f",porcInver1);
	printf("\n El porcentaje de la inversi�n n�mero 2 es: %.2f",porcInver2);
	printf("\n El porcentaje de la inversi�n n�mero 3 es: %.2f",porcInver3);
	
	getch();
	
}
