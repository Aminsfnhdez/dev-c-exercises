//Taller 4 Ejercicio # 16
// Autor Isaac Am�n Sof�n Hern�ndez

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int num1, num2;
	printf("D�gite el primer n�mero: ");
	scanf("%i", &num1);
	printf("\n D�gite el segundo n�mero: ");
	scanf("%i", &num2);
	if((num1!=0) && (num1>0) && (num2<0))
	{
		printf("\n El n�mero %i  y el n�mero %i son de diferente signo", num1, num2);
	}
	else
	{
		if((num2!=0) && (num2>0) && (num1<0))
		{
			printf("\n El n�mero %i  y el n�mero %i son de diferente signo", num1, num2);
		}
		else
		{
			printf("\n El n�mero %i  y el n�mero %i no son de diferente signo", num1, num2);
		}
		
	}
}
