//Taller 4 Ejercicio # 3 
// Autor Isaac Am�n Sof�n Hern�ndez

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	float num1, num2, num3;
	printf("D�gite el primer n�mero: ");
	scanf("%f", &num1);
	printf("\n D�gite el segundo n�mero: ");
	scanf("%f", &num2);	
	printf("\n D�gite el tercer n�mero: ");
	scanf("%f", &num3);
	if( (num1 < num2 ) && (num1 < num3))
	{
		if(num2 < num3)
		{
			printf("\n Los numeros de menor a mayor son: %.0f %.0f %.0f", num1, num2, num3);
		}
		else
		{
		printf("\n Los numeros de menor a mayor son: %.0f %.0f %.0f", num1, num3, num2);
		}
	}
	else
	{
		if((num2 < num1) && (num2 < num3))
		{
			if(num1 < num3)
			{
				printf("\n Los numeros de menor a mayor son: %.0f %.0f %.0f", num2, num1, num3);
			}
			else
			{
				printf("\n Los numeros de menor a mayor son: %.0f %.0f %.0f", num2, num3, num1);
			}
			
		}
		else
		{
			if((num3 < num1) && (num3 < num2))
			{
				if(num1 < num2)
				{
					printf("\n Los n�meros de menor a mayor son: %.0f %.0f %.0f", num3, num1, num2);
				}
				else
				{
					printf("\n Los n�meros de menor a mayor son: %.0f %.0f %.0f", num3, num2, num1);
				}
			}
		}
	} 
	
	getch();
}
