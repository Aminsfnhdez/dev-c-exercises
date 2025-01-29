//Taller 4 Ejercicio # 11
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int x;
	printf("Dígite un número: ");
	scanf("%i", &x);
	if(x>0)
	{
		printf("\n El número %i es positivo", x);
	}
	else
	{
		if(x==0)
		{
			printf("\n El número %i es cero", x);
		}
		else
		{
			if(x<0)
			{
				printf("\n El número %i es negativo", x);
			}
		}
	}
}
