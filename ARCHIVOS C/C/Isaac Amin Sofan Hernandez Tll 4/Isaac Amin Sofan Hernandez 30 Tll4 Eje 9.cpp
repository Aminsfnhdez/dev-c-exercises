//Taller 4 Ejercicio # 9
// Autor Isaac Am�n Sof�n Hern�ndez

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int  x, soltero, casada, ceduHombre,ceduMujer, edad;
	printf("Si es hombre marque 1, si es mujer marque 2: ");
	scanf("%i", &x);
	if(x==1)
	{
		printf("\n Hombre d�gite su edad: ");
		scanf("%i", &edad);
		if(edad>18)
		{
			printf("\n Hombre d�gite su c�dula: ");
			scanf("%i", &ceduHombre);
			printf("\n Si es soltero marque 1 sino marque 2: ");
			scanf("%i", &soltero);
			if(soltero==1)
			{
				printf("\n Cumple con los requisitos y su c�dula es: %i", ceduHombre);
			}
			else
			{
				printf("\n No cumple con lo pedido");
			}
		}
		else
		{
			printf("\n No cumple con lo pedido");
		}
	}
	else
	{
		printf("\n Mujer d�gite su edad: ");
		scanf("%i", &edad);
		if(edad>18)
		{
			printf("\n Mujer d�gite su c�dula: ");
			scanf("%i", &ceduMujer);
			printf("\n Si es casada marque 1 sino marque 2: ");
			scanf("%i", &casada);
			if(casada==1)
			{
				printf("\n Cumple con los requisitos, su c�dula es %i y su edad es %i", ceduMujer, edad);
			}
			else
			{
				printf("\n No cumple con lo pedido");
			}
		}
		else
		{
			printf("\n No cumple con lo pedido");
		}
	}
	
}
