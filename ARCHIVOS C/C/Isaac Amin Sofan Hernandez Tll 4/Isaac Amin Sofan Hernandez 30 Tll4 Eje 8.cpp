//Taller 4 Ejercicio # 8
// Autor Isaac Am�n Sof�n Hern�ndez

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int x, sum, posi, m;
	printf("D�gite un n�mero: ");
	scanf("%i", &x);
	if(x>0)
	{
		sum = x + 10;
		printf("\n El n�mero %i mas 10 es igual a: %i", x, sum);
	}
	else
	{
		m = -1;
		posi = x * (x * m);
		printf("\n El n�mero %i multiplicado por su positivo es: %i", x, posi);
	}
}

