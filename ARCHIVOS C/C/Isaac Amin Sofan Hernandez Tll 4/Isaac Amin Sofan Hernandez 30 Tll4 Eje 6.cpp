//Taller 4 Ejercicio # 6 
// Autor Isaac Am�n Sof�n Hern�ndez

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int num1, num2, num3, mult1, mult2, mult3, div, y;
	printf("D�gite el primer n�mero: ");
	scanf("%i", &num1);
	printf("\n D�gite el segundo n�mero: ");
	scanf("%i", &num2);
	printf("\n D�gite el tercer n�mero: ");
	scanf("%i", &num3);
	y = 7;
	div = num1 / y;
	mult1 = (div * y) - num1;
	if(mult1==0)
	{
		printf("\n  El n�mero que es multiplo de 7 es: %i", num1);
	}
	else
	{
		div = num2 / y;
		mult2 = (div * y) - num2;
		if(mult2==0)
		{
		printf("\n El n�mero que es multiplo de de 7 es: %i", num2);	
		}
		else
		{
			div = num3 / y;
			mult3 = (div * y) - num3;
			if(mult3==0)
			{
				printf("\n El n�mero que es multiplo de 7 es: %i", num3);
			}
			else
			{
				printf("\n Ninguno de los n�meros es multiplo de 7");
			}
		}
	
	}
	
	
}
