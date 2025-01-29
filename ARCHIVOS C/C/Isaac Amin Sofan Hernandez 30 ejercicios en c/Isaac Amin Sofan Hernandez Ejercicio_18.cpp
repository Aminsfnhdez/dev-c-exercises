//Ejercicio # 18 
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	
	int lunes, miercoles, viernes, tiempoTotal;
	printf("Dígite el tiempo del lunes: ");
	scanf("%i", &lunes);
	printf("\n Dígite el tiempo del miercoles: ");
	scanf("%i", &miercoles);
	printf("\n Dígite el tiempo del viernes: ");
	scanf("%i", &viernes);
	tiempoTotal = (lunes + miercoles + viernes) / 3 ;
	printf("\n El promedio de tiempo es: %i", tiempoTotal);
	
	getch();
}
