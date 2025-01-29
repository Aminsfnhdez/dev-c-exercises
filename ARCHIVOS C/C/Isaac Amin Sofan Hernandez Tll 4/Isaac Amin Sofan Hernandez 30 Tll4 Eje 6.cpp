//Taller 4 Ejercicio # 6 
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int num1, num2, num3, mult1, mult2, mult3, div, y;
	printf("Dígite el primer número: ");
	scanf("%i", &num1);
	printf("\n Dígite el segundo número: ");
	scanf("%i", &num2);
	printf("\n Dígite el tercer número: ");
	scanf("%i", &num3);
	y = 7;
	div = num1 / y;
	mult1 = (div * y) - num1;
	if(mult1==0)
	{
		printf("\n  El número que es multiplo de 7 es: %i", num1);
	}
	else
	{
		div = num2 / y;
		mult2 = (div * y) - num2;
		if(mult2==0)
		{
		printf("\n El número que es multiplo de de 7 es: %i", num2);	
		}
		else
		{
			div = num3 / y;
			mult3 = (div * y) - num3;
			if(mult3==0)
			{
				printf("\n El número que es multiplo de 7 es: %i", num3);
			}
			else
			{
				printf("\n Ninguno de los números es multiplo de 7");
			}
		}
	
	}
	
	
}
