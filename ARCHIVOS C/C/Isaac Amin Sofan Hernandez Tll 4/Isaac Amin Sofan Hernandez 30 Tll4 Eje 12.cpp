//Taller 4 Ejercicio # 12
// Autor Isaac Am�n Sof�n Hern�ndez

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int x, y;
	printf("D�gite el primer n�mero: ");
	scanf("%i", &x);
	printf("\n D�gite el segundo n�mero: ");
	scanf("%i", &y);
	if((x>0) || (y>0))
	{
		printf("\n Los n�meros son: %i %i", x, y);
	}
	else
	{
		printf("\n Ninguno de los dos n�meros es positivo");
	}
	
	
	
}
