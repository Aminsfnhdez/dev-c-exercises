//Ejercicio extra 3
// Autor Isaac Am�n Sof�n Hern�ndez

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	
	bool a , b , c, d, c;
	
	a = true;
	b = false;
	c = false;
	d = true;
	e = false;
		
	if(a )
	{
		if(b)
		{
			printf("\nsecci�n de instrucciones n�mero 1");
			continue;
		}
		else
		{
			if(c)
			{
				printf("\n secci�n de intrucciones n�mero 2");
				continue;
			}
			else
			{
				printf("\n secci�n de intrucciones n�mero 3");
				continue;
			}
		}
		
		else
		printf("\n secci�n de intrucciones n�mero 4");
		continue;
		{
			if(d)
			{
				if(e)
				{
					printf("\n secci�n de intrucciones n�mero 5");
					continue;
				}
				else
				{
					printf("\n secci�n de intrucciones n�mero 6");
					continue;
				}
			}
			else
			{
				printf("\n secci�n de intrucciones n�mero 7");
			}
		}
	}
	getch();
}
