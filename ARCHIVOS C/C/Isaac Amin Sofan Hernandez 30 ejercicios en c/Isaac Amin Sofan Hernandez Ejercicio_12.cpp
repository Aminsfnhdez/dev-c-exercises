//Ejercicio # 12 
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	
	float cantidadPesos, unidadColombiana, valorDolar, equivalenciaDolar;
	
	valorDolar = 3,248;
	unidadColombiana = 1;
	printf("Dígite la cantidad de pesos colombianos a convertir: ");
	scanf("%f", &cantidadPesos);
	equivalenciaDolar = cantidadPesos * valorDolar;
	printf("\n El valor del peso es: %.2f", unidadColombiana);
	printf("\n El valor del Dollar es: %.2f", valorDolar);
	printf("\n El valor de pesos a canvertir es: %.2f", cantidadPesos);
	printf(" su equivalencia en Dollar es: %.2f ", equivalenciaDolar);
	printf( " pesos");
	
	
	getch();
}
