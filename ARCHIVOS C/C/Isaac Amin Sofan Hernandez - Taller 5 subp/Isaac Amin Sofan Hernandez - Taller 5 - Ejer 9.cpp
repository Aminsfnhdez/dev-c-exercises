// Taller 5 Ejercicio 9 subprogramas
// Autor Isaac Amín Sofán Hernández
// Determinar el precio de un pasaje de ida y vuelta por avión, conociendo la distancia a recorrer, el número de dias de estancia y sabiendo que,
//si la distancia es superior a 1000 km, y el numero de estancia es superior a 7, la línea aérea le hace un descuento del 30%. el precio por kilometro es de $89.50
#include <stdio.h> //librerias
#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
float pasaje (int, int); //declaro el subprograma
main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int kilometros, dias;//variables a usar en el programa principal
	float total_a_pagar;//variables a usar en el programa principal
	printf("Dígite los kilometros a recorrer en el vuelo de ida y vuelta: ");//pido los kilometros a recorrer por vuelo
	scanf("%i", &kilometros);//almaceno los kilometros
	printf("Dígite los el total de días que se hospedará: ");//pido los dias estancia
	scanf("%i", &dias);//almaceno los dias de estancia
	total_a_pagar = pasaje(kilometros, dias);//invoco el subprograma que calcula el valor de los pasajes
	system("CLS"); //limpio la pantalla
	printf("\nEl valor a pagar por los pasajes es: %.0f", total_a_pagar);//muestro el valor de los pasajes
	getch();	
}
float pasaje (int km, int d)//subprograma que calcula el valor de los pasajes
{
	float total, valorKm;//variables a usar en el subprogrma
	if((km>1000) && (d>7))//si la distancia a recorrer es mayor a 1000 y los dias de estancia es mayor a 7
	{
		valorKm = 89.50 - (89.50 * 0.30);//valor del kilometro con descuento
		total = km * valorKm;//valor pasajes
	}
	else
	{
		valorKm = 89.50;//valor del kilometro sin descuento
		total = km * valorKm;//valor pasajes
	}
	return total;//devuelvo el valor de los pasajes
}
