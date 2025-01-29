//Ejercicio # 10 
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	float porcentajeDescuento, descuento, valorCompra, valorFinal;
	porcentajeDescuento = 15;
	printf("Dígite el valor total de la compra: ");
	scanf("%f", &valorCompra);
	descuento = valorCompra * (porcentajeDescuento/100);
	valorFinal = valorCompra - descuento;
	printf("\n El valor de compra es: %.2f", valorCompra);
	printf("\n El valor del descuento es: %.2f", descuento);
	printf("\n El pago final de la compra es: %.2f", valorFinal);
		
	getch();
}
