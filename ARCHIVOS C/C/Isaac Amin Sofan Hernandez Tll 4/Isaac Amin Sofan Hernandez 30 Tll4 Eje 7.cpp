//Taller 4 Ejercicio # 7 
// Autor Isaac Am�n Sof�n Hern�ndez

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int edad, cedula;
	printf("D�gite su edad: ");
	scanf("%i", &edad);
	if(edad > 18)
	{
		printf("D�gite su cedula: ");
		scanf("%i", &cedula);
		printf("\n su cedula es %i y usded puede votar", cedula);
	}
	else
	{
		printf("Usted no puede votar");
	}
	getch();
}
