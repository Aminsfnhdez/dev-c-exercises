// Ejercicio 1 subprogramas
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
float volumen(float, float, float); //declaro la funcion
main()
{
	setlocale(LC_ALL,"");
	float an, al, pr, vol; //declaro la variables que utilizo en el programa principal
	printf("Dígite el ancho, la altura y la profundidad para hallar el volumen \n"); //pido la tres dimensiones
	scanf("%f %f %f", an, al, pr); //capturo las tres dimensiones
	vol = volumen(an, al, pr); //hago el llamado a la función a la que le envio las tres dimensiones y el valor  que retorna me lo guarda en vol
	printf("\n el volumen es: %.0f", vol); // muestra el volumen


	getch();
}

float volumen(float ancho, float altura, float profundidad) // funcion volumen que devuelve un float
{
	return ancho*altura*profundidad; // retorno el valor de una vez sin necesidad de utilizar otra variable, proque es un calculo sencillo
}
