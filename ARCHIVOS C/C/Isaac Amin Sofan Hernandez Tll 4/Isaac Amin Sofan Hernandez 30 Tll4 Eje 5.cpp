//Taller 4 Ejercicio # 5 
// Autor Isaac Am�n Sof�n Hern�ndez

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int x, y, z;
	printf("D�gite el primer n�mero �x�: ");
	scanf("%i", &x);
	printf("\n D�gite el segundo n�mero �y�: ");
	scanf("%i", &y);	
	printf("\n D�gite el tercer n�mero �z�: ");
	scanf("%i", &z);
	if(x==y)
	{
		printf("\n Los n�meros �x� y �y� hacen pareja");
	}
	else
	{
		if(x==z)
		{
			printf("\n Los n�meros �x� y �z� hacen pareja");
		}
		else
		{
			if(y==z)
			{
				printf("\n Los n�meros �y� y �z� hacen pareja");
			}
		}
	}
	
	
	
}
