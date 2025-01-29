//Ejercicio # 7 
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL,"");
	
	float radio, area, llongitud, pi;
	printf("Dígite el radio del circulo: ");
	scanf("%f", &radio);
	pi = 3.1416;
	area =  pi * pow(radio,2);
	llongitud =  2 *radio * pi;
	
	printf("\n El área del círculo es: %.1f ", area);
	printf("\n La longitud del cículo es: %.1f", llongitud) ; 
	
getch();
}
