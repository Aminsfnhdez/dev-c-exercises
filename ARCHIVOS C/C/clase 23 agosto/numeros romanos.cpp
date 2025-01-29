//Números romanos
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int num;
	printf("Programa que calcula el la equivalencia del numero entero del 1 al 10 en números Romanos \n");
	printf("Dígite un número del 1 al 10: ");
	scanf("%i",&num);

	switch(num)
	{
		case 1: printf("El numero 1 en romano es 'I'");
				break;
		case 2: printf("El numero 2 en romano es 'II'");
				break;		
		case 3: printf("El numero 3 en romano es 'III'");
				break;		
		case 4: printf("El numero 4 en romano es 'IV'");
				break;		
		case 5: printf("El numero 5 en romano es 'V'");
				break;		
		case 6: printf("El numero 6 en romano es 'VI'");
				break;		
		case 7: printf("El numero 7 en romano es 'VII'");
				break;
		case 8: printf("El numero 8 en romano es 'VIII'");
				break;
		case 9: printf("El numero 9 en romano es 'IX'");
				break;
		case 10:printf("El numero 10 en romano es 'X'");
				break;								
		default: printf("**** El numero debe estar entre 1 y 10 *********");
				break;			
	}
}
