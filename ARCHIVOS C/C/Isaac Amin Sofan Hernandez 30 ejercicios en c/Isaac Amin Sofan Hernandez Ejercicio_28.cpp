//Ejercicio # 28
// Autor Isaac Am�n Sof�n Hern�ndez

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	
	float valorKilo, peso, valorTotal;
	printf("D�gite el valor por kilo: ");
	scanf("%f", &valorKilo);
	printf("\n D�gite el peso del articulo: ");
	scanf("%f", &peso);
	valorTotal = valorKilo * peso;
	printf("\n El valor del articulo es: %.1f", valorTotal);	
	
	getch();
}
