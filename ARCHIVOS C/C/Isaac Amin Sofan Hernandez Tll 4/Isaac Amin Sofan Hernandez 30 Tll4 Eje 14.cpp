//Taller 4 Ejercicio # 14
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int horas, dest, horasConDescuen, horasParaDesc, valorFijo, valorHora, desc, valorTotal;
	valorHora = 1000;
	desc = 20;
	printf("¿Por cuantas uso el auto? ");
	scanf("%i", &horas);
	if(horas>10)
	{
		horasParaDesc = horas - 10;
		dest = (valorHora * desc / 100);
		horasConDescuen = (valorHora - dest) * horasParaDesc;
		valorFijo = 10 * valorHora;
		valorTotal = valorFijo + horasConDescuen;
		printf("\n El valor fijo por 10 horas es %i y las horas con descuento son %i El valor total es: %i", valorFijo, horasParaDesc, valorTotal);
		
	}
	else
	{
		valorTotal = horas * valorHora;
		printf("\n El vallor total es: %i", valorTotal);
	}
	
	
		
}
