// Taller 7 Ejercicio 4 Banderas
// Autor Isaac Amín Sofán Hernández
#include <stdio.h> //librerias para ejecucion
#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias para ejecucion
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
#include <string.h>//libreria para 'string'
#include <math.h>//libreria para funciones matematicas
//#include <windows.h>//libreria para usar 'Sleep'
void elecciones (int); //declaro el subprograma
main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int votacion;
	char bandera = 's';
	while(bandera == 's')
	{
	
		printf("Digite su voto.\nPedro, teclee '1' \nPablo, teclee '2' \nMartha, teclee '3' \nJuan, teclee '4' \nVoto en Blanco, teclee '5'\n");
		scanf("%i", &votacion);
		elecciones(votacion);
		getch();
		system("CLS");
		printf("\n¿Desea continuar? \nSi, teclee 'S' \nNo, teclee 'N'\n");
		scanf("%s", &bandera);
	}
	getch();
}
void elecciones (int voto)
{
	int cont1=0, cont2=0, cont3=0, cont4=0, cont5=0, total=0;
	while((voto>0) && (voto<6))
	{
		switch(voto)
		{
			case 1: cont1 = cont1 + 1;
					break;
			case 2: cont2 = cont2 + 1;
					break;
			case 3: cont3 = cont3 + 1;
					break;
			case 4: cont4 = cont4 + 1;
					break;
			default: cont5 = cont5 + 1;								
		}
		system("CLS");
		printf("digite su voto.\nPedro, teclee '1' \nPablo, teclee '2' \nMartha, teclee '3' \nJuan, teclee '4' \nVoto en Blanco, teclee '5'\n");
		scanf("%i", &voto);
	}
	total = cont1 + cont2 + cont3 + cont4 + cont5;
	if((cont1>cont2) && (cont1>cont3) && (cont1>cont4) && (cont1>cont5))
	{
		printf("\nEl candidato ganador es: Pedro.");
	}
	else
	{
		if((cont2>cont3) && (cont2>cont4) && (cont2>cont5))
		{
			printf("\nEl candidato ganador es: Pablo.");
		}
		else
		{
			if((cont3>cont4) && (cont3>cont5))
			{
				printf("\nEl candidato ganador es: Martha.");
			}
			else
			{
				if((cont4>cont5))
				{
					printf("\nEl candidato ganador es: Juan.");
				}
				else
				{
					if((cont5>cont4))
					{
						printf("\nGanó el voto en blanco.");
					}
					else
					{
						printf("\nEmpate Técnico.");
					}
				}
			}
		}
	}	
	printf("\nEl número de votos que obtuvo cada candidato es: \n1.Pedro: %i \n2.Pablo: %i \n3.Martha: %i \n4.Juan: %i \n5.Voto en Blanco: %i \nEl número total de votantes es: %i", cont1, cont2, cont3, cont4, cont5, total);
	
}
