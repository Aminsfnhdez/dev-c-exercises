//Ejercicio # 30
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	
	int moneda1, moneda2, moneda3, moneda4, moneda5, moneda6, xmoneda1;
	int xmoneda2, xmoneda3, xmoneda4, xmoneda5, xmoneda6, valorTotalMonedas;
	int mt1, mt2, mt3, mt4, mt5, mt6;
	moneda1 = 2;
	moneda2 = 5;
	moneda3 = 10;
	moneda4 = 20;
	moneda5 = 50;
	moneda6  = 100;	
	printf("Dígite la cantidad de monedas de 2: ");
	scanf("%i", &xmoneda1);
	printf("\n Dígite la cantidad de monedas de 5: ");
	scanf("%i", &xmoneda2);
	printf("\n Dígite la cantidad de monedas de 10: ");
	scanf("%i", &xmoneda3);
	printf("\n Dígite la cantidad de monedas de 20: ");
	scanf("%i", &xmoneda4);
	printf("\n Dígite la cantidad de monedas de 50: ");
	scanf("%i", &xmoneda5);
	printf("\n Dígite la cantidad de monedas de 100: ");
	scanf("%i", &xmoneda6);
	mt1 = moneda1 * xmoneda1;
	mt2 = moneda2 * xmoneda2;
	mt3 = moneda3 * xmoneda3;
	mt4 = moneda4 * xmoneda4;
	mt5 = moneda5 * xmoneda5;
	mt6 = moneda6 * xmoneda6;
	valorTotalMonedas = mt1 + mt2 + mt3 + mt4 + mt5 + mt6;
	printf("\n El valor por concepto de monedas es: %i", valorTotalMonedas);
		
	getch();
}
