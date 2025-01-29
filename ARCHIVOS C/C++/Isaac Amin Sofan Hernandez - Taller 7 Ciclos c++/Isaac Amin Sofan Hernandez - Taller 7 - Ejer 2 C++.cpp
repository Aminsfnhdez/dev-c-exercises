// Taller 7 Ejercicio 2 Ciclos C++
// Autor Isaac Amín Sofán Hernández
#include <iostream>
#include <stdio.h> //librerias para ejecucion
#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias para ejecucion
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
#include <string.h>//libreria para 'string'
#include <math.h>//libreria para funciones matematicas
#include <windows.h>//libreria para usar 'Sleep'

using namespace std;
void gasolinera (int, char, float);
int main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int clase_ser;
	char jornada;
	float precio;
	cout<<"Digite el tipo de servicio prestado \nTanqueo, Teclee 1 \nEncerado, Teclee 2 \nCambio de Aceite, Teclee 3 \nRevisión Motor, Teclee 4 \n";
	cin>>clase_ser;
	cout<<"\nDigite la jornada en la que se prestó el servicio \nMañana, Teclee 'M' \nTarde, Teclee 'T'\n";
	cin>>jornada;
	cout<<"\nDigite el valor del Servicio: ";
	cin>>precio;
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
						default : cout<<"\n******* Jornada Incorrecta *******\n";
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
						default : cout<<"\n******* Jornada Incorrecta *******\n";
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
						default : cout<<"\n******* Jornada Incorrecta *******\n";
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
						default : cout<<"\n******* Jornada Incorrecta *******\n";
					}
					break;
			default:	cout<<"\n******* Clase de Servicio Incorrecto *******\n";	
		}
		cout<<"Digite el tipo de servicio prestado \nTanqueo, Teclee '1'\nEncerado, Teclee '2' \nCambio de Aceite, Teclee '3' \nRevisión motor, Teclee '4' \n";
		cin>>servicio;
		cout<<"\nDigite la jornada en la que se prestó el servicio \nMañana, Teclee 'M' \nTarde, Teclee 'T'\n";
		scanf("%s", &jorna);
		cout<<"\nDigite el valor del Servicio: ";
		cin>>valor;
	}while((servicio>0) && (servicio<5));
	cout<<"\nEl valor producido por el servicio 1 es:"<<total_serv_1<<"\nEl valor producido por el servicio 2 es: "<<total_serv_2<<"\nEl valor producido por el servicio 3 es: "<<total_serv_3<<"\nEl valor producido por el servicio 4 es: "<<total_serv_4;
	cout<<"\nEl número de veces que se prestó cada servicio es:\nServicio 1: "<<serv_1<<"\nServicio 2:"<<serv_2<<"\nServicio 3: "<<serv_3<<"\nServicio 4: serv_4";
	if((serv_1>serv_2) && (serv_1>serv_3) && (serv_1>serv_4))
	{
		cout<<"\nEl servicio que más se prestó fue el servicio 1, ";
		if(cont_am_1>cont_pm_1)
		{
			cout<<"y se prestró en la jornada de la mañana";
		}
		else
		{
			cout<<"y se prestró en la jornada de la tarde";
		}
	}
	else
	{
		if((serv_2>serv_3) && (serv_3>serv_4))
		{
			cout<<"\nEl servicio que más se prestó fue el servicio 2, ";
			if(cont_am_2>cont_pm_2)
			{
				cout<<"y se prestró en la jornada de la mañana";
			}
			else
			{
				cout<<"y se prestró en la jornada de la tarde";
			}
		}
		else
		{
			if(serv_3>serv_4)
			{
				cout<<"\nEl servicio que más se prestó fue el servicio 3, ";
				if(cont_am_3>cont_pm_3)
				{
					cout<<"y se prestró en la jornada de la mañana";
				}
				else
				{
					cout<<"y se prestró en la jornada de la tarde";
				}
			}
			else
			{
				cout<<"\nEl servicio que más se prestó fue el servicio 4, ";
				if(cont_am_4>cont_pm_4)
				{
					cout<<"y se prestró en la jornada de la mañana";
				}
				else
				{
					cout<<"y se prestró en la jornada de la tarde";
				}
			}
		}
	}
}
