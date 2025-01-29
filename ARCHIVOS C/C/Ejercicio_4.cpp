//Ejercicio # 4

#include <stdio.h>
#include <conio.h>

main()
{
float suma, x, y;

	suma = 0;
	x = 20;
	suma = suma + x;
	y = 40;
	x = x + y*y;
	suma = suma + x / y;
	printf("El valor de la suma es: %.1f", suma);	
	getch();
}
