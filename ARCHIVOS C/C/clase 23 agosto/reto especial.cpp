
// Reto Especial
// Autor Isaac Amín Sofán Hernández
/* Algoritmo que al recibir una palabra la muestra en pantalla y se dice si es nombre propio o no */
#include <stdio.h> //librerias
#include <conio.h> //librerias
#include <wchar.h> //librerias
#include <locale.h> //librerias
#include <string.h> //librerias
#include <ctype.h> //librerias
main()
{
	setlocale(LC_ALL,"");
	char palabra[100],  palabra3; //pongo 'palabra' como una cadena de caracteres y 'palabra3' como caracter 

	printf("Por favor ingrese una palabra: ");  //pido al usuario que ingrese la 'palabra'
	scanf("%s", &palabra); //leo y almaceno a 'palabra'
	
		
	palabra3 = palabra[0]; //se le asigna a 'palabra3' el valor de la primera letra o caracter de  'palabra'.
	
	if((palabra3 >= 'a') && (palabra3<='z') ) //aqui la primera letra es minuscula
	{
		printf("\n la palabra: '%s' no es un nombre propio", palabra); //muestro en pantalla la 'palabra' y digo que no es nombre propio.
	}
	else
	{
		if((palabra3 >= 'A') && (palabra3 <= 'Z')) //aqui la primera letra es mayuscula
		{
			printf("\n la palabra:'%s' es un nombre propio", palabra);  //muestro en pantalla la 'palabra' y digo que es nombre propio.
		}
	}
	
	
	getch();
}

