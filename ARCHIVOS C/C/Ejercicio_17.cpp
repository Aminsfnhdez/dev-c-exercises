//Ejercicio # 17 
// Autor Isaac Am�n Sof�n Hern�ndez

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	
	float precioCompra, precioVenta, incremento, valorIncremento;
	incremento = 0.3;
	printf("D�gite el valor del producto: ");
	scanf("%f", &precioCompra);
	valorIncremento = precioCompra * incremento;
	precioVenta = precioCompra + valorIncremento;
	printf("\n El valor de venta debe ser: %.2f", precioVenta);
	
	getch();
}
