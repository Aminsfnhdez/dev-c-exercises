//Ejercicio extra 2
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	
	int annio1, annio2, nmeses, t;
	
	printf("Dígite el primer año: ");
	scanf("%i", &annio1);
	printf("\nDígite el segundo año: ");
	scanf("%", &annio2);
	
	if(annio1>annio2)
	{
		t = annio1 - annio2;
		nmeses = t * 12;
	}
	else
	{
		t = annio2 - annio1;
		nmeses = t * 12;
	}
	
	printf("\nEl número de meses entre el año %i ", annio1 );
	printf(" y el año %i ", annio2 );
	printf(" es: %3i", nmeses );
	
	getch();
}
