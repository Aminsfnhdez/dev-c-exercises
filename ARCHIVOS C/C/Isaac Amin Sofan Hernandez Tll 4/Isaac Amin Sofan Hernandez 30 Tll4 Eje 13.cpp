//Taller 4 Ejercicio # 13
// Autor Isaac Am�n Sof�n Hern�ndez

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int num, cont, neg;
	printf("D�gite un n�mero: ");
	scanf("%i", &num);
	neg = -1;
	if(num>0)
	{
		cont = num * neg;
		printf("\n El n�mero %i es positivo y su contrario es: %i", num, cont);	
	}
	else
	{
		if(num==0)
		{
			printf("\n El n�mero %i es cero por lo que no tiene positivo ni negativo", num);
		}
		else
		{
			cont = num * neg;
			printf("\n El n�mero %i es negativo y su contrario es: %i", num, cont);
		}
	}
	
}
