// Taller 5 Ejercicio 6 subprogramas
// Autor Isaac Amín Sofán Hernández
// Un alamacen de ventas de ropa tiene las siguientes promociones para sus clientes, las cuales consisten en lo sgte (pago en efectivo = E, 
//pago con tarjeta de crédito = T):
//a) para ventas menores ó iguales a 100.000, con pago en efectivo se hace un descuento del 20% y si es con tarjeta de crédito se hace el 10%.
//b) para ventas mayores 100.000 y menor o iguales a 200.000, con pago en efectivo se hace un descuesto del 30%, con tarjeta de crédito se hace el 15%.
//c) para ventas mayores a 200.000, con pago en efectivo se hace un descuento del 40% y con tarjeta de crédito se hace el 20%.
// indique el valor del descuesto y el total a pagar.
#include <stdio.h> //librerias
#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
float compra (char, float); //declaro el subprograma
main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	char pago;//variables a usar en el programa principal
	float venta;//variables a usar en el progrma principal
	printf("Digite la forma de pago: ");//pido la forma de pago
	printf("\nEfectivo, teclee 'E'");//pago en efectivo
	printf("\nTarjeta de crédito, teclee 'T'\n");//pago con tarjeta de crédito
	scanf("%c", &pago);//almaceno la forma de pago
	printf("Dígite el valor vendido: ");// pido el total de la venta
	scanf("%f", &venta);//almaceno el total de la venta
	system("CLS");//limpiar pantalla
	compra(pago, venta);//invoco al subprograma que calcula el total a pagar
	getch();
}
float compra (char formaPago, float valorVenta)//subprograma que calcula el total a pagar
{
	float descuento, total;//variables a usar en el subprograma
	switch(formaPago)//de acuerdo de la forma de pago
	{
		case 'e': case 'E': if(valorVenta <= 100000) //si paga con efectivo un monto de 100mil o menos
							{
								descuento = valorVenta * 0.20;//descuento por compra
							}
							else
							{
								if((valorVenta>100000) && (valorVenta<=200000))//si paga con efectivo un monto entre 100mil y 200mil
								{
									descuento = valorVenta * 0.30;//descuento por compra
								}
								else
								{
									if(valorVenta>200000)//si paga con efectivo un monto de 200mil o mas
									{
										descuento = valorVenta * 0.40;//descuento por compra
									}		
								}
							}
		break;
		case 't': case 'T': if(valorVenta <= 100000)//si paga con tarjeta un monto de 100mil o menos
							{
								descuento = valorVenta * 0.10;//descuento por compra
							}
							else
							{
								if((valorVenta>100000) && (valorVenta<=200000))//si paga con tarjeta un monto entre 100mil y 200mil
								{
									descuento = valorVenta * 0.15;//descuento por compra
								}
								else
								{
									if(valorVenta>200000)//si paga con efectivo un monto de 200mil o mas
									{
										descuento = valorVenta * 0.20;//descuento por compra
									}		
								}
							}
		break;
		default : printf("******* Opción de pago Incorrepta *******");//si selecciona un forma de pago incorrecta
	}
	total = valorVenta - descuento;//valor total a pagar menos descuesto
	printf("\nEl valor de la venta es: %.0f", valorVenta);//muestra el valor de venta
	printf("\nEl valor a pagar es: %.0f", total);//muestra el total a pagar menos descuesto 
	printf("\nEl descuento por la forma de pago es: %.0f", descuento); //muestra el valor del descuento
}
