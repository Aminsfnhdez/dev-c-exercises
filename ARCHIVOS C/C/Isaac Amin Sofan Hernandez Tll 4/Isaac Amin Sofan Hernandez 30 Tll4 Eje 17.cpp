//Taller 4 Ejercicio # 17
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int codPro, numArtVend, valorArt, desc, valorSinDesc, valorDesc, valorConDesc;
	printf("Dígite el código del producto: ");
	scanf("%i", &codPro);
	printf("\n Dígite el valor del articulo: ");
	scanf("%i", &valorArt);
	printf("\n Dígite el número de articulos vendidos: ");
	scanf("%i", &numArtVend);
	if(numArtVend>=50)
	{
		desc = 10 * valorArt / 100; 
		valorSinDesc = valorArt * numArtVend;
		valorConDesc = (valorArt - desc) * numArtVend;
		valorDesc = valorSinDesc - valorConDesc;
		printf("\n El código del producto es: %i", codPro);
		printf("\n El Valor total de la venta es: %i. Menos el descuento de %i, el valor total apagar es: %i", valorSinDesc,  valorDesc, valorConDesc);	
	}
	else
	{
		valorSinDesc = valorArt * numArtVend;
		printf("\n El código del producto es: %i", codPro);
		printf("\n El valor total a pagar es: %i", valorSinDesc);
	}
	
}
