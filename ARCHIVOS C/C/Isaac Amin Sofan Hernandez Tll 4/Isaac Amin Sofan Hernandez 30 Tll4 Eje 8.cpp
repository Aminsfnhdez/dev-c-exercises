//Taller 4 Ejercicio # 8
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int x, sum, posi, m;
	printf("Dígite un número: ");
	scanf("%i", &x);
	if(x>0)
	{
		sum = x + 10;
		printf("\n El número %i mas 10 es igual a: %i", x, sum);
	}
	else
	{
		m = -1;
		posi = x * (x * m);
		printf("\n El número %i multiplicado por su positivo es: %i", x, posi);
	}
}

