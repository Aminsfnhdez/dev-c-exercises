//Ejercicio extra 2
// Autor Isaac Am�n Sof�n Hern�ndez

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	
	int annio1, annio2, nmeses, t;
	
	printf("D�gite el primer a�o: ");
	scanf("%i", &annio1);
	printf("\nD�gite el segundo a�o: ");
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
	
	printf("\nEl n�mero de meses entre el a�o %i ", annio1 );
	printf(" y el a�o %i ", annio2 );
	printf(" es: %3i", nmeses );
	
	getch();
}
