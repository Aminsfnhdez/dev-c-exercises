//Ejercicio # 22
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	
	float pulgadas, centimetro;
	printf("Dígite el valor de pulgadas: ");
	scanf("%f", &pulgadas);
	centimetro = pulgadas * 2,54;
	printf("EL valor en centrimetros es: %.2f", centimetro);

	getch();
}
