//Ejercicio # 18 
// Autor Isaac Am�n Sof�n Hern�ndez

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	
	int lunes, miercoles, viernes, tiempoTotal;
	printf("D�gite el tiempo del lunes: ");
	scanf("%i", &lunes);
	printf("\n D�gite el tiempo del miercoles: ");
	scanf("%i", &miercoles);
	printf("\n D�gite el tiempo del viernes: ");
	scanf("%i", &viernes);
	tiempoTotal = (lunes + miercoles + viernes) / 3 ;
	printf("\n El promedio de tiempo es: %i", tiempoTotal);
	
	getch();
}
