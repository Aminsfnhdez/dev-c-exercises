// Taller 5 Ejercicio 2 subprogramas
// Autor Isaac Amín Sofán Hernández
//Determinar el valor total a pagar por una llamada telefonica.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>//libreria para limpiar pantallla
#include <wchar.h>
#include <locale.h>
int valorLlamada(int, int); //declaro la funcion
main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y careacteres especialesen pantalla
	int tipoLlamada; //declaro las variables para usar en el programa principal 
	int valorAPagar, minutos; //declaro variable - usar el programa 
	printf("Dígite la duración de la llamada "); //pido la duracion de la llamada
	scanf("%i", &minutos);//almaceno la duración de la llamada
	printf("\nDigite el tipo de llamada: si es local, teclee '1' y si es nacional teclee '2' "); //pido que se seleccione el tipo de llamada
	scanf("%i", &tipoLlamada); //almaceno el tipo de llamada
	valorAPagar = valorLlamada(minutos, tipoLlamada); //invoco el subprograma que calcula el valor de la llamada
	system("CLS");//limpio la pantalla
	printf("\n El valor total a pagar por la llamada telefonica es de: %i ", valorAPagar);//imprimo en pantalla el valor total a pagar por la llamada
	getch();
}

int valorLlamada ( int min, int tipLlam)//subprograma de tipo función que cálcula valor de una llamada
{
	int totalP = 0; //declaro la variable que se va a usar en el subprograma
	if (min < 3) //si la llamada dura menos de tres minutos
	{
		totalP = 500; //el total a pagar si la llamada dura menos de 3 minutos
	}
	else //si la llamada dura mas de tres minutos
	{
		switch(tipLlam) //tipo de llamada seleccionada
		{
			case 1: totalP = 500+((min-3)*200); //si la llamada es local 
					break;
			case 2: totalP = 500+((min-3)*300);//si la llamada es nacional
					break;
			default: printf("\n ****** Tipo de llamada incorrecto ****** ");//si se selecciona un tipo de llamada incorrecto				
		}
	}
	return totalP; //retorno el valor de la llamada
}
