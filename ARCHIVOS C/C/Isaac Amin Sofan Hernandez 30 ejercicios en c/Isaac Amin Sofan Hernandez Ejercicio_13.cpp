//Ejercicio # 13 
// Autor Isaac Amín Sofán Hernández
//masa = (presion * volumen) '/' (0.37 * (temperatura + 460))

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	
	float presion, volumen, temperatura, masa;
	
	printf("Dígite el valor de la presión: ");
	scanf("%f", &presion);
	printf("\n Dígite el valor del volumen: ");
	scanf("%f", &volumen);
	printf("\n Dígite el valor de la temperatura: ");
	scanf("%f", &temperatura);
	masa = (presion * volumen) / ((temperatura + 460) * 0,37);
	printf("\n La masa del aire es: %.2f", masa);
	
	getch();
}

