//Ejercicio extra 3
// Autor Isaac Amín Sofán Hernández

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
			printf("\nsección de instrucciones número 1");
			continue;
		}
		else
		{
			if(c)
			{
				printf("\n sección de intrucciones número 2");
				continue;
			}
			else
			{
				printf("\n sección de intrucciones número 3");
				continue;
			}
		}
		
		else
		printf("\n sección de intrucciones número 4");
		continue;
		{
			if(d)
			{
				if(e)
				{
					printf("\n sección de intrucciones número 5");
					continue;
				}
				else
				{
					printf("\n sección de intrucciones número 6");
					continue;
				}
			}
			else
			{
				printf("\n sección de intrucciones número 7");
			}
		}
	}
	getch();
}
