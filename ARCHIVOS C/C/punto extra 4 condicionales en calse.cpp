//Ejercicio en clase
// Autor Isaac Am�n Sof�n Hern�ndez

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL,"");
	
	float raiz, numero;
	printf("D�gite un n�mero: ");
	scanf("%f", &numero);
	
	if(numero >= 0)
	{
		raiz = sqrt(numero); //pow(numero, o.5) // raiz = numero ^(1/2);
		printf("\n La ra�z cuadrada de %.2f es: %.2f", numero, raiz);
	}
	else
	{
		printf("\n El n�mero %.2f tiene ra�z imag�naria ", numero);
	}
}
