//Taller 4 Ejercicio # 12
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int x, y;
	printf("Dígite el primer número: ");
	scanf("%i", &x);
	printf("\n Dígite el segundo número: ");
	scanf("%i", &y);
	if((x>0) || (y>0))
	{
		printf("\n Los números son: %i %i", x, y);
	}
	else
	{
		printf("\n Ninguno de los dos números es positivo");
	}
	
	
	
}
