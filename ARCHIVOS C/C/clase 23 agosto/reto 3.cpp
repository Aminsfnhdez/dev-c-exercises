// Reto 3
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	printf("Programa que calcula el valor a pagar por n hamburguesas consumidas, tipo de hamburguesas y forma de pago \n");
	int numHamb, modoPago, totalPagar, hambSimp, hambDob, hambTri, tipoHamb;
	hambSimp = 20000;
	hambDob = 25000;
	hambTri = 28000;
	printf("Dígite la cantidad de hamburguesas consumidas: ");
	scanf("%i", &numHamb);
	printf("\n Seleccione el modo de pago. Efectivo = 1, Tarjeta de crédito = 2: ");
	scanf("%i", &modoPago);
	if(modoPago == 1)
	{
		printf("\n Seleccione el tipo de hamburguesa consumida");
		printf("\n Simple = 1, Doble = 2, Triple = 3: ");
		scanf("%i", &tipoHamb);
		switch(tipoHamb)
		{
			case 1: totalPagar = numHamb * hambSimp;
					printf("\n El valor total a pagar %i hamburguesas simples es: %i", numHamb, totalPagar);
					break;
			case 2: totalPagar = numHamb * hambDob;
					printf("\n El valor total a pagar %i hamburguesas dobles es: %i", numHamb, totalPagar);
					break;
			case 3:	totalPagar = numHamb * hambTri;
					printf("\n El valor total a pagar %i hamburguesas triples es: %i", numHamb, totalPagar);
					break;
			default: printf("\n Opción invalida"); 					
		}
	}
	else
	{
		if(modoPago == 2)
		{
			printf("\n Seleccione el tipo de hamburguesa consumida");
			printf("\n Simple = 1, Doble = 2, Triple = 3: ");
			scanf("%i", &tipoHamb);
			switch(tipoHamb)
			{
				case 1: totalPagar = numHamb * (hambSimp * 1.05);
						printf("\n El valor total a pagar %i hamburguesas simples es: %i", numHamb, totalPagar);
						break;
				case 2: totalPagar = numHamb * (hambDob * 1.05);
						printf("\n El valor total a pagar %i hamburguesas dobles es: %i", numHamb, totalPagar);
						break;
				case 3:	totalPagar = numHamb * (hambTri * 1.05);
						printf("\n El valor total a pagar %i hamburguesas triples es: %i", numHamb, totalPagar);
						break;
				default: printf("\n Opción invalida"); 					
			}
		}
		else
		{
			printf("\n Opción invalida");
		}
	}
	
}
