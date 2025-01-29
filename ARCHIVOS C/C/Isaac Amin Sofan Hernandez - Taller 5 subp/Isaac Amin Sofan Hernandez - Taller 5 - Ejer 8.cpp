// Taller 5 Ejercicio 8 subprogramas
// Autor Isaac Amín Sofán Hernández
// una frutería ofrece las manzanas con descuento según el número de mazanas compradas:
//de 0 a 2 -- 0%, de 3 a 5 -- 10%, de 6 a 10 -- 15%, de 11 en adelante 20%.
#include <stdio.h> //librerias
#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
int descuentoPorManzanas (int, int); //declaro el subprograma
main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int manz, precio;//variables a usar en el programa principal
	float total_a_pagar;//variables a usar en el programa principal
	printf("Dígite el número de manzanas compradas: ");//pido la cantidad de manzanas compradas
	scanf("%i", &manz);//almaceno la cantidad de manzanas
	printf("\nDígite por precio manzana: ");//pido el precio por manzana
	scanf("%i", &precio);//almaceno el precio por manzana
	system("CLS");//limpio pantalla
	total_a_pagar = descuentoPorManzanas(manz, precio);//invoco el subprograma que calcula el valor a pagar por las manzanas
	printf("\nEl total a pagar es: $%.0f", total_a_pagar);//muestro el valor a pagar
	getch();
}
int descuentoPorManzanas(int manzanas, int precioManz)//subprograma tipo funcion que calcula el valor a pagar por las manzanas
{
	float descuento, total;//variables a usar en el subprograma
	if((manzanas >=0) && (manzanas<=2))//si se compra entre 0 a 2 manzanas
	{
		descuento = 0;//el descuento es
	}
	else
	{
		if((manzanas >=3) && (manzanas<=5))//si se compra entre 3 a 5 manzanas
		{
			descuento = 0.10;//el descuento es
		}
		else
		{
			if((manzanas >=6) && (manzanas<=10))//si se compra entre 6 a 10 manzanas
			{
				descuento = 0.15;//el descuento es
			}
			else
			{
				if(manzanas >=11)//si se compra de 11 manzanas en adelante
				{
					descuento = 0.20;//el descuento es
				}
			}
			
		}
			
	}
	total = (precioManz - (precioManz * descuento)) * manzanas;//precio por manzana menos descuesto, por la cantidad total de manzanas es el total a pagar
	return total;//se retorna el total a pagar.
}
