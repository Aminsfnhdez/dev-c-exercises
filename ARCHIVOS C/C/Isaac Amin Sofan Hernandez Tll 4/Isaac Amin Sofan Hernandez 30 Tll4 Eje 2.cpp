//Taller 4 Ejercicio # 2 
// Autor Isaac Am�n Sof�n Hern�ndez

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL,"");
	float a, b;
	printf("D�gite el n�mero al que desea sacar ra�z cuadrada: ");
	scanf("%f", &a);
	if(a > 0)
	{
		b = sqrt(a);
		printf("\n La ra�z cuadrada de %.0f es: %.2f", a, b);
	}
	else
	{
		printf("\n El n�mero %.0f tiene ra�z imag�naria",a);
	}
	getch();	
}
