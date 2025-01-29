//Taller 4 Ejercicio # 10
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL,"");
	int div, y, num, mult, cuadrado, cubo;
	printf("Dígite un número: ");
	scanf("%i", &num);
	y = 2;
	div = num / y;
	mult = (div * y) - num;
	if(mult==0)
	{
		cuadrado = pow(num, 2);
		printf("\n El número %i es par, por lo que elevado al cuadrado es: %i", num, cuadrado);
			
	}
	else
	{
		cubo = pow(num, 3);
		printf("\n El número %i es impar, por lo que elevado al cubo es: %i", num, cubo);
		
	}
	
}
