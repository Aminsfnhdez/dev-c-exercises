//Taller 4 Ejercicio # 11
// Autor Isaac Am�n Sof�n Hern�ndez

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int x;
	printf("D�gite un n�mero: ");
	scanf("%i", &x);
	if(x>0)
	{
		printf("\n El n�mero %i es positivo", x);
	}
	else
	{
		if(x==0)
		{
			printf("\n El n�mero %i es cero", x);
		}
		else
		{
			if(x<0)
			{
				printf("\n El n�mero %i es negativo", x);
			}
		}
	}
}
