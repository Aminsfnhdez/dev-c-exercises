//Ejercicio extra 1
// Autor Isaac Am�n Sof�n Hern�ndez

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
// programa que calcula entre dos numeros el mayor

main()
{
	setlocale(LC_ALL,"");
	int a, b;
	
	printf("D�gite el primer n�mero a comparar: ");
	scanf("%i", &a);
	printf("\nD�gite el sugundo n�mero a comparar: ");
	scanf("%i", &b);
	
	if (a>b)
	{
		printf("\nEl primer n�mero es mayor que el segundo n�mero");
	}
	else
	{
		printf("\nEl segundo n�mero es mayor o igual al primer n�mero");
	}
	getch();
	
}
