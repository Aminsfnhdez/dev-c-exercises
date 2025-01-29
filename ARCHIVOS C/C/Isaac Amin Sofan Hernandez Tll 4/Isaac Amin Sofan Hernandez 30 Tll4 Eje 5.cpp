//Taller 4 Ejercicio # 5 
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int x, y, z;
	printf("Dígite el primer número ´x´: ");
	scanf("%i", &x);
	printf("\n Dígite el segundo número ´y´: ");
	scanf("%i", &y);	
	printf("\n Dígite el tercer número ´z´: ");
	scanf("%i", &z);
	if(x==y)
	{
		printf("\n Los números ´x´ y ´y´ hacen pareja");
	}
	else
	{
		if(x==z)
		{
			printf("\n Los números ´x´ y ´z´ hacen pareja");
		}
		else
		{
			if(y==z)
			{
				printf("\n Los números ´y´ y ´z´ hacen pareja");
			}
		}
	}
	
	
	
}
