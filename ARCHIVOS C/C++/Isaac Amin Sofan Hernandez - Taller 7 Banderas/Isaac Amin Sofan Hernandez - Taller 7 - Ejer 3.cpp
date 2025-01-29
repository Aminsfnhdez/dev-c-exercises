// Taller 7 Ejercicio 3 Banderas
// Autor Isaac Amín Sofán Hernández
#include <stdio.h> //librerias para ejecucion
//#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias para ejecucion
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
#include <string.h>//libreria para 'string'
#include <math.h>//libreria para funciones matematicas
//#include <windows.h>//libreria para usar 'Sleep'
void gasolinera (int, char, float); //declaro el subprograma
main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int clase_ser;
	char jornada;
	float precio;
	printf("Digite el tipo de servicio prestado \nTanqueo, Teclee 1 \nEncerado, Teclee 2 \nCambio de Aceite, Teclee 3 \nRevisión Motor, Teclee 4 \n");
	scanf("%i", &clase_ser);
	printf("\nDigite la jornada en la que se prestó el servicio \nMañana, Teclee 'M' \nTarde, Teclee 'T'\n");
	scanf("%c", &jornada);
	printf("\nDigite el valor del Servicio: ");
	scanf("%f", &precio);
	gasolinera(clase_ser, jornada, precio);
	getch();
}
void gasolinera (int servicio, char jorna, float valor)
{
	int serv_1=0, serv_2=0, serv_3=0, serv_4=0, cont_am_1=0, cont_am_2=0, cont_am_3=0, cont_am_4=0, cont_pm_1=0, cont_pm_2=0, cont_pm_3=0, cont_pm_4=0;
	float total_serv_1=0, total_serv_2=0, total_serv_3=0, total_serv_4=0;
	do
	{
		switch(servicio)
		{
			case 1:	total_serv_1 = total_serv_1 + valor;
					serv_1 = serv_1 + 1;
					switch(jorna)
					{
						case 'M': case 'm': cont_am_1 = cont_am_1 + 1;
											break;
						case 'T': case 't': cont_pm_1 = cont_pm_1 + 1;
											break;			
						default : printf("\n******* Jornada Incorrecta *******\n");
					}
					break;							
			case 2: total_serv_2 = total_serv_2 + valor;
					serv_2 = serv_2 + 1;
					switch(jorna)
					{
						case 'M': case 'm': cont_am_2 = cont_am_2 + 1;
											break;
						case 'T': case 't': cont_pm_2 = cont_pm_2 + 1;
											break;			
						default : printf("\n******* Jornada Incorrecta *******\n");
					}
					break;
			case 3: total_serv_3 = total_serv_3 + valor;
					serv_3 = serv_3 + 1;
					switch(jorna)
					{
						case 'M': case 'm': cont_am_3 = cont_am_3 + 1;
											break;
						case 'T': case 't': cont_pm_3 = cont_pm_3 + 1;
											break;			
						default : printf("\n******* Jornada Incorrecta *******\n");
					}
					break;
			case 4:	total_serv_4 = total_serv_4 + valor;
					serv_4 = serv_4 + 1;
					switch(jorna)
					{
						case 'M': case 'm': cont_am_4 = cont_am_4 + 1;
											break;
						case 'T': case 't': cont_pm_4 = cont_pm_4 + 1;
											break;			
						default : printf("\n******* Jornada Incorrecta *******\n");
					}
					break;
			default:	printf("\n******* Clase de Servicio Incorrecto *******\n");	
		}
		printf("Digite el tipo de servicio prestado \nTanqueo, Teclee '1'\nEncerado, Teclee '2' \nCambio de Aceite, Teclee '3' \nRevisión motor, Teclee '4' \n");
		scanf("%i", &servicio);
		printf("\nDigite la jornada en la que se prestó el servicio \nMañana, Teclee 'M' \nTarde, Teclee 'T'\n");
		scanf("%s", &jorna);
		printf("\nDigite el valor del Servicio: ");
		scanf("%f", &valor);
	}while((servicio>0) && (servicio<5));
	printf("\nEl valor producido por el servicio 1 es: %.0f \nEl valor producido por el servicio 2 es: %.0f \nEl valor producido por el servicio 3 es: %.0f \nEl valor producido por el servicio 4 es: %.0f",total_serv_1, total_serv_2, total_serv_3, total_serv_4);
	printf("\nEl número de veces que se prestó cada servicio es:\nServicio 1: %i \nServicio 2: %i \nServicio 3: %i \nServicio 4: %i", serv_1, serv_2, serv_3, serv_4);
	if((serv_1>serv_2) && (serv_1>serv_3) && (serv_1>serv_4))
	{
		printf("\nEl servicio que más se prestó fue el servicio 1, ");
		if(cont_am_1>cont_pm_1)
		{
			printf("y se prestró en la jornada de la mañana");
		}
		else
		{
			printf("y se prestró en la jornada de la tarde");
		}
	}
	else
	{
		if((serv_2>serv_3) && (serv_3>serv_4))
		{
			printf("\nEl servicio que más se prestó fue el servicio 2, ");
			if(cont_am_2>cont_pm_2)
			{
				printf("y se prestró en la jornada de la mañana");
			}
			else
			{
				printf("y se prestró en la jornada de la tarde");
			}
		}
		else
		{
			if(serv_3>serv_4)
			{
				printf("\nEl servicio que más se prestó fue el servicio 3, ");
				if(cont_am_3>cont_pm_3)
				{
					printf("y se prestró en la jornada de la mañana");
				}
				else
				{
					printf("y se prestró en la jornada de la tarde");
				}
			}
			else
			{
				printf("\nEl servicio que más se prestó fue el servicio 4, ");
				if(cont_am_4>cont_pm_4)
				{
					printf("y se prestró en la jornada de la mañana");
				}
				else
				{
					printf("y se prestró en la jornada de la tarde");
				}
			}
		}
	}

	
}

