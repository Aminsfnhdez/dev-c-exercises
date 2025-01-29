//Ejercicio # 29
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL,"");
	
	float e, m, v,d, r;
	printf("Dígite el valor de M: ");
	scanf("%f", &m);
	printf("Dígite el valor de V: ");
	scanf("%f", &v);
	d = m * v;
	r = pow(d,2);
	e = r / 2;
	printf("\n El valor de la energía sinética es: %.1f", d);
	
	getch();	
}
