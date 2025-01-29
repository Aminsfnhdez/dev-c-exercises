// Taller 6 Ejercicio 6 Ciclos
// Autor Isaac Am�n Sof�n Hern�ndez
// Leer 'N' n�meros y decir si es primo o no. Para hacer el c�lculo tenga en cuenta que los n�meros deben ser enteros mayores que uno.
#include <stdio.h> //librerias para ejecucion
#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias para ejecucion
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
#include <string.h>//libreria para 'string'
#include <math.h>//libreria para funciones matematicas
#include <windows.h>//libreria para usar 'Sleep'
void primos (int); //declaro el subprograma
main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int numero;
	printf("D�gite la cantidad de numeros a evaluar y le muestro cu�ntos son primos y cu�ntos no son primos:  ");
	scanf("%i", &numero);
	primos(numero);
	getch();
}
void primos( int num)
{
	int cont=0, cont_prim=0, cont_nop=0, nr, mod = 0, g;
	while(cont<num)
	{
		printf("D�gite el n�mero %i, que sea mayor que 1: ", cont + 1);
		scanf("%i", &nr);
		if(nr>1)
		{
			for(int cont_nr = 1; cont_nr<=nr; cont_nr++)
			{
				g = nr%cont_nr;
				if(g==0)
				{
					mod = mod + 1;
				}
				
			}
			if(mod == 2)
			{
				cont_prim = cont_prim + 1;
				printf("\nEl n�mero %i es primo", nr);
			}
			else
			{
				if(mod > 2)
				{
					cont_nop = cont_nop + 1;
					printf("\nEl n�mero %i no es primo", nr);	
				}
			}		
		}
		else
		{
			printf("\n****** Error el n�mero digitado no es mayor que 1 ******\n");
			cont = cont - 1;
		}
		cont = cont + 1;
		mod = 0;
		Sleep(3000);
		system("CLS");
	} 
	printf("La cantidad de n�meros primos es: %i", cont_prim);
	printf("\nLa cantidad de n�meros no primos es: %i", cont_nop);
}

