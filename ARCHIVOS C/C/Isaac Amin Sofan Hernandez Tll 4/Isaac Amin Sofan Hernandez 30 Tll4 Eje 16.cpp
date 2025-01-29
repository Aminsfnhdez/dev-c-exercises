//Taller 4 Ejercicio # 16
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int num1, num2;
	printf("Dígite el primer número: ");
	scanf("%i", &num1);
	printf("\n Dígite el segundo número: ");
	scanf("%i", &num2);
	if((num1!=0) && (num1>0) && (num2<0))
	{
		printf("\n El número %i  y el número %i son de diferente signo", num1, num2);
	}
	else
	{
		if((num2!=0) && (num2>0) && (num1<0))
		{
			printf("\n El número %i  y el número %i son de diferente signo", num1, num2);
		}
		else
		{
			printf("\n El número %i  y el número %i no son de diferente signo", num1, num2);
		}
		
	}
}
