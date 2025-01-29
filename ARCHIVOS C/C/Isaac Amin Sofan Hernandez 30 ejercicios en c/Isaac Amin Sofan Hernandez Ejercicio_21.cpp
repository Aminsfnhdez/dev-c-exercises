//Ejercicio # 21
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	
	int distancia , velocidad, tiempo;
	
	distancia = 80;
	tiempo = 5;
	
	velocidad = distancia / tiempo;
	
	printf("La velocidad es: %i", velocidad);

	getch();
}
