//Taller 4 Ejercicio # 4 
// Autor Isaac Am�n Sof�n Hern�ndez

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	float num1, num2, num3, num4;
	printf("D�gite el primer n�mero: ");
	scanf("%f", &num1);
	printf("\n D�gite el segundo n�mero: ");
	scanf("%f", &num2);	
	printf("\n D�gite el tercer n�mero: ");
	scanf("%f", &num3);
	printf("\n D�gite el cuarto n�mero: ");
	scanf("%f", &num4);
	if((num1>num2) && (num1>num3) && (num1>num4))
	{
		printf("\n El n�mero mayor es: %.0f", num1);
	}
	else
	{
		if((num2>num1) && (num2>num3) && (num2>num4))
		{
			printf("\n El n�mero mayor es: %.0f", num2);
		}
		else
		{
			if((num3>num1) && (num3>num2) && (num3>num4))
			{
				printf("\n El n�mero mayor es: %.0f", num3);
			}
			else
			{
				if((num4>num1) && (num4>num2) && (num4>num3))
				{
					printf("\n El n�mero mayor es: %.0f", num4);
				}
			}
		}
	}
	
	getch();
}

