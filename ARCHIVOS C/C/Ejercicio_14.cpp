//Ejercicio # 14 
// Autor Isaac Am�n Sof�n Hern�ndez

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	
	float numPulsaciones, edad;
	printf("D�gite la edad de la persona: ");
	scanf("%f", &edad);
	numPulsaciones = (200 - edad) / 10;
	printf("\n  La cantidad de pulsaciones que debe tener esta persona cada 10 segundos: %.2f",numPulsaciones);
	
	getch();
}
