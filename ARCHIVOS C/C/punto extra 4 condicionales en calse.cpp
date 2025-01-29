//Ejercicio en clase
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL,"");
	
	float raiz, numero;
	printf("Dígite un número: ");
	scanf("%f", &numero);
	
	if(numero >= 0)
	{
		raiz = sqrt(numero); //pow(numero, o.5) // raiz = numero ^(1/2);
		printf("\n La raíz cuadrada de %.2f es: %.2f", numero, raiz);
	}
	else
	{
		printf("\n El número %.2f tiene raíz imagínaria ", numero);
	}
}
