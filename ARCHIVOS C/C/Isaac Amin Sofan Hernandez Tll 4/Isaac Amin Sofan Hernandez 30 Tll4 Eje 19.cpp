//Taller 4 Ejercicio # 19
// Autor Isaac Am�n Sof�n Hern�ndez

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");

	int area, valorMetro, formaDePago, valorPropiedad, cuotaInicial, descuento, cuotaInicialConDesc, cuotaInicialConRecar, recargo;
	printf("D�gite el �rea en metros cuadrados de la propiedad: ");
	scanf("%i", &area);
	printf("\n D�gite el valor por metro cuadrado: ");
	scanf("%i", &valorMetro);
	printf("\n La forma de pago con tarjeta de cr�didto  = 1, o en efectivo = 2: ");
	scanf("%i", &formaDePago);
	if(formaDePago==1)
	{
		valorPropiedad = area * valorMetro;
		cuotaInicial =20 * valorPropiedad / 100;
		descuento = 10 * cuotaInicial / 100;
		cuotaInicialConDesc = cuotaInicial - descuento;
		printf("\n El precio de venta de la propiedad es: %i", valorPropiedad);
		printf("\n La cuota inicial es de %i , el descuento por forma de pago es de %i . El valor total de la cuota inicial es de: %i", cuotaInicial, descuento, cuotaInicialConDesc);
	}
	else
	{
		valorPropiedad = area * valorMetro;
		cuotaInicial =20 * valorPropiedad / 100;
		recargo = 8 * cuotaInicial / 100;
		cuotaInicialConRecar = cuotaInicial + recargo;
		printf("\n El precio de venta de la propiedad es: %i", valorPropiedad);
		printf("\n La cuota inicial es de %i , el recargo por forma de pago es de %i . El valor total de la cuota inicial es de: %i", cuotaInicial, recargo, cuotaInicialConRecar);
	}
		
 	
}

