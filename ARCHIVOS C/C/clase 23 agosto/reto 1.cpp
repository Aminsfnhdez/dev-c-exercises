// Reto 1
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int precioInicial, tipo, tamano, precioTotal;
	printf("Dígite el precio Inicial del producto: ");
	scanf("%i", &precioInicial);
	printf("\n Seleccione el Tipo de fruta. Tipa A = 1, Tipo B = 2: ");
	scanf("%i", &tipo);
	if(tipo == 1)
	{
		printf("\n seleccione el tamaño de la fruta. Tamaño 1 = 1, Tamaño 2 = 2: ");
		scanf("%i", &tamano);
		if(tamano == 1)
		{
			precioTotal = precioInicial + 2000;
			printf("\n El precio final de la fruta es: %i", precioTotal);
		}
		else
		{
			if(tamano == 2)
			{
				precioTotal = precioInicial + 3000;
				printf("\n El precio final de la fruta es: %i", precioTotal);	
			}
			else
			{
				printf("\n Opción invalida");
			}
		}
	}
	else
	{
		if(tipo == 2)
		{
			printf("\n seleccione el tamaño de la fruta. Tamaño 1 = 1, Tamaño 2 = 2: ");
			scanf("%i", &tamano);
			if(tamano == 1)
			{
			precioTotal = precioInicial - 3000;
			printf("\n El precio final de la fruta es: %i", precioTotal);
			}
			else
			{
				if(tamano == 2)
				{
				precioTotal = precioInicial - 5000;
				printf("\n El precio final de la fruta es: %i", precioTotal);	
				}
				else
				{
				printf("\n Opción invalida");
				}
			}
		}
		else
		{
			printf("\n Opción invalida");
		}
	}
	
	
}
