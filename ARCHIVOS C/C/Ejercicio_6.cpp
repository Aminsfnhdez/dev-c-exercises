//Ejercicio # 6 
// Autor Isaac Am�n Sof�n Hern�ndez

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
	
	printf("El n�mero negativo es: %i \n", numNegativo);
	printf(" \n");
	printf("El n�mero positivo es: %i \n", numPositivo);
	
	getch();
}

