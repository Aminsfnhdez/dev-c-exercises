// Parcial 18 sep 2019
// Autor Isaac Amín Sofán Hernández
#include <stdio.h> //librerias para ejecucion
#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias para ejecucion
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
#include <string.h>//libreria para 'string'
#include <math.h>//libreria para funciones matematicas
#include <windows.h>//libreria para usar 'Sleep'
void cobro (int); //declaro el subprograma
main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int n;
	printf("Digite el número de dia del mes en el que se realizo la llamada (1 a 31): ");
	scanf("%i", &n);
	if (n<=31)
	{
		cobro(n);
	}
	else
	{
		printf("******* Día del mes incorrecto **********");
	}
	
	getch();
}
void cobro (int N)
{
	int par, sem, min, val_min;
	float desc, valor_llamada, val_tot;
	printf("\nIngrese los minutos que duró la llamada: ");
	scanf("%i", &min);
	printf("\nIngrese el valor por minuto: ");
	scanf("%i", &val_min);
	par = N%2;
	if(par == 0)
	{
		printf("\nPor favor seleccione el dia de la semana en el que se realizo la llamada: \nLunes: Teclee '1' \nMartes: Teclee '2' \nMiercoles: Teclee '3'\nJueves: Teclee '4'\nViernes: Teclee '5'\nSábado: Teclee '6'\nDomingo: Teclee '7'\n");
		scanf("%i", &sem);
		switch(sem)
		{
			case 1: val_tot = min * val_min; //lunes
					desc = val_tot * 0.10;
					valor_llamada = val_tot - desc;
					printf("\nEl costo de la llamada es: %.0f \nMenos un descuento de: %.0f \nEl total a pagar es: %.0f ",val_tot, desc, valor_llamada);
					break;
			case 2: val_tot = min * val_min; //Martes
					desc = val_tot * 0.20;
					valor_llamada = val_tot - desc;
					printf("\nEl costo de la llamada es: %.0f \nMenos un descuento de: %.0f \nEl total a pagar es: %.0f ",val_tot, desc, valor_llamada);		
					break;
			case 3: val_tot = min * val_min; // Miercoles
					desc = val_tot * 0.15;
					valor_llamada = val_tot - desc;
					printf("\nEl costo de la llamada es: %.0f \nMenos un descuento de: %.0f \nEl total a pagar es: %.0f ",val_tot, desc, valor_llamada);
					break;
			case 4: val_tot = min * val_min; // jueves
					desc = val_tot * 0.25;
					valor_llamada = val_tot - desc;
					printf("\nEl costo de la llamada es: %.0f \nMenos un descuento de: %.0f \nEl total a pagar es: %.0f ",val_tot, desc, valor_llamada);
					break;
			case 5: val_tot = min * val_min; // viernes
					desc = val_tot * 0.25;
					valor_llamada = val_tot - desc;
					printf("\nEl costo de la llamada es: %.0f \nMenos un descuento de: %.0f \nEl total a pagar es: %.0f ",val_tot, desc, valor_llamada);
					break;
			case 6: val_tot = min * val_min; // sabado
					desc = val_tot * 0.25;
					valor_llamada = val_tot - desc;
					printf("\nEl costo de la llamada es: %.0f \nMenos un descuento de: %.0f \nEl total a pagar es: %.0f ",val_tot, desc, valor_llamada);		
					break;
			case 7: val_tot = min * val_min; // domingo
					desc = val_tot * 0.25;
					valor_llamada = val_tot - desc;
					printf("\nEl costo de la llamada es: %.0f \nMenos un descuento de: %.0f \nEl total a pagar es: %.0f ",val_tot, desc, valor_llamada);
					break;
			default : printf("\n********* Dia de la semana incorecto *********\n");				
		}
	}
	if(par != 0)
	{
		printf("\nPor favor seleccione el dia de la semana en el que se realizo la llamada: \nLunes: Teclee '1' \nMartes: Teclee '2' \nMiercoles: Teclee '3'\nJueves: Teclee '4'\nViernes: Teclee '5'\nSábado: Teclee '6'\nDomingo: Teclee '7'\n");
		scanf("%i", &sem);
			switch(sem)
		{
			case 1: val_tot = min * val_min; //lunes
					desc = val_tot * 0.07;
					valor_llamada = val_tot - desc;
					printf("\nEl costo de la llamada es: %.0f \nMenos un descuento de: %.0f \nEl total a pagar es: %.0f ",val_tot, desc, valor_llamada);
					break;
			case 2: val_tot = min * val_min; //Martes
					desc = val_tot * 0.20;
					valor_llamada = val_tot - desc;
					printf("\nEl costo de la llamada es: %.0f \nMenos un descuento de: %.0f \nEl total a pagar es: %.0f ",val_tot, desc, valor_llamada);	
					break;	
			case 3: val_tot = min * val_min; // Miercoles
					desc = val_tot * 0.15;
					valor_llamada = val_tot - desc;
					printf("\nEl costo de la llamada es: %.0f \nMenos un descuento de: %.0f \nEl total a pagar es: %.0f ",val_tot, desc, valor_llamada);
					break;
			case 4: val_tot = min * val_min; // jueves
					desc = val_tot * 0.25;
					valor_llamada = val_tot - desc;
					printf("\nEl costo de la llamada es: %.0f \nMenos un descuento de: %.0f \nEl total a pagar es: %.0f ",val_tot, desc, valor_llamada);
					break;
			case 5: val_tot = min * val_min; // viernes
					desc = val_tot * 0.25;
					valor_llamada = val_tot - desc;
					printf("\nEl costo de la llamada es: %.0f \nMenos un descuento de: %.0f \nEl total a pagar es: %.0f ",val_tot, desc, valor_llamada);
					break;
			case 6: val_tot = min * val_min; // sabado
					desc = val_tot * 0.25;
					valor_llamada = val_tot - desc;
					printf("\nEl costo de la llamada es: %.0f \nMenos un descuento de: %.0f \nEl total a pagar es: %.0f ",val_tot, desc, valor_llamada);		
					break;
			case 7: val_tot = min * val_min; // domingo
					desc = val_tot * 0.25;
					valor_llamada = val_tot - desc;
					printf("\nEl costo de la llamada es: %.0f \nMenos un descuento de: %.0f \nEl total a pagar es: %.0f ",val_tot, desc, valor_llamada);
					break;
			default : printf("\n********* Dia de la semana incorecto *********\n");	
		}
    }
	
}
