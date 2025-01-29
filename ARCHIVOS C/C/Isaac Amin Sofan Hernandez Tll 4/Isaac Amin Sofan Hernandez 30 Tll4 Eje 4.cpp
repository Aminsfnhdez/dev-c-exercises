//Taller 4 Ejercicio # 4 
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	float num1, num2, num3, num4;
	printf("Dígite el primer número: ");
	scanf("%f", &num1);
	printf("\n Dígite el segundo número: ");
	scanf("%f", &num2);	
	printf("\n Dígite el tercer número: ");
	scanf("%f", &num3);
	printf("\n Dígite el cuarto número: ");
	scanf("%f", &num4);
	if((num1>num2) && (num1>num3) && (num1>num4))
	{
		printf("\n El número mayor es: %.0f", num1);
	}
	else
	{
		if((num2>num1) && (num2>num3) && (num2>num4))
		{
			printf("\n El número mayor es: %.0f", num2);
		}
		else
		{
			if((num3>num1) && (num3>num2) && (num3>num4))
			{
				printf("\n El número mayor es: %.0f", num3);
			}
			else
			{
				if((num4>num1) && (num4>num2) && (num4>num3))
				{
					printf("\n El número mayor es: %.0f", num4);
				}
			}
		}
	}
	
	getch();
}

