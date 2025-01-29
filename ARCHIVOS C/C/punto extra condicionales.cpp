//Ejercicio extra 1
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
// programa que calcula entre dos numeros el mayor

main()
{
	setlocale(LC_ALL,"");
	int a, b;
	
	printf("Dígite el primer número a comparar: ");
	scanf("%i", &a);
	printf("\nDígite el sugundo número a comparar: ");
	scanf("%i", &b);
	
	if (a>b)
	{
		printf("\nEl primer número es mayor que el segundo número");
	}
	else
	{
		printf("\nEl segundo número es mayor o igual al primer número");
	}
	getch();
	
}
