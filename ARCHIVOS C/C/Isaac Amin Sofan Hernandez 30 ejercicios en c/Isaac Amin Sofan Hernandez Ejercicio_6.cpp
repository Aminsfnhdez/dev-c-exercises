//Ejercicio # 6 
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	
	int  numNegativo, numPositivo;
	printf("Digite el numero negativo: ");
	scanf("%i", &numNegativo);
	printf(" \n");
	numPositivo = numNegativo * -1;
	
	printf("El número negativo es: %i \n", numNegativo);
	printf(" \n");
	printf("El número positivo es: %i \n", numPositivo);
	
	getch();
}

