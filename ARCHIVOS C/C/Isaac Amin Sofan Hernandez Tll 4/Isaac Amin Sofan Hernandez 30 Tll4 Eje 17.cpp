//Taller 4 Ejercicio # 17
// Autor Isaac Am�n Sof�n Hern�ndez

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int codPro, numArtVend, valorArt, desc, valorSinDesc, valorDesc, valorConDesc;
	printf("D�gite el c�digo del producto: ");
	scanf("%i", &codPro);
	printf("\n D�gite el valor del articulo: ");
	scanf("%i", &valorArt);
	printf("\n D�gite el n�mero de articulos vendidos: ");
	scanf("%i", &numArtVend);
	if(numArtVend>=50)
	{
		desc = 10 * valorArt / 100; 
		valorSinDesc = valorArt * numArtVend;
		valorConDesc = (valorArt - desc) * numArtVend;
		valorDesc = valorSinDesc - valorConDesc;
		printf("\n El c�digo del producto es: %i", codPro);
		printf("\n El Valor total de la venta es: %i. Menos el descuento de %i, el valor total apagar es: %i", valorSinDesc,  valorDesc, valorConDesc);	
	}
	else
	{
		valorSinDesc = valorArt * numArtVend;
		printf("\n El c�digo del producto es: %i", codPro);
		printf("\n El valor total a pagar es: %i", valorSinDesc);
	}
	
}
