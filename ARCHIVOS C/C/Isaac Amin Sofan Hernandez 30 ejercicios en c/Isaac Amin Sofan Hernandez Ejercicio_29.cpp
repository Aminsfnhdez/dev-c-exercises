//Ejercicio # 29
// Autor Isaac Am�n Sof�n Hern�ndez

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL,"");
	
	float e, m, v,d, r;
	printf("D�gite el valor de M: ");
	scanf("%f", &m);
	printf("D�gite el valor de V: ");
	scanf("%f", &v);
	d = m * v;
	r = pow(d,2);
	e = r / 2;
	printf("\n El valor de la energ�a sin�tica es: %.1f", d);
	
	getch();	
}
