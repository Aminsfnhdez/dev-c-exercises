//Taller 4 Ejercicio # 10
// Autor Isaac Am�n Sof�n Hern�ndez

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL,"");
	int div, y, num, mult, cuadrado, cubo;
	printf("D�gite un n�mero: ");
	scanf("%i", &num);
	y = 2;
	div = num / y;
	mult = (div * y) - num;
	if(mult==0)
	{
		cuadrado = pow(num, 2);
		printf("\n El n�mero %i es par, por lo que elevado al cuadrado es: %i", num, cuadrado);
			
	}
	else
	{
		cubo = pow(num, 3);
		printf("\n El n�mero %i es impar, por lo que elevado al cubo es: %i", num, cubo);
		
	}
	
}
