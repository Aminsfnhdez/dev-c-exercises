// Taller 6 Ejercicio 12 Ciclos
// Autor Isaac Am�n Sof�n Hern�ndez
// Hacer un algoritmo que lea primero el n�mero total de experimentos de f�sica. Posteriormente, cada uno de estos experimentos tiene los siguientes datos: velocidad inicial, 
// velocidad final y distancia recorrida por un m�vil y est�n relacionados mediante la siguiente f�rmula: Aceleraci�n = (velocidad final - velocidad inicial) / distancia
// Calcular: N�meros de m�viles acelerados (aceleraci�n positiva). Numero de m�viles desacelerados (aceleraci�n negativa). Numero de m�viles sin aceleraci�n (aceleraci�n cero).
// Valor promedio de la aceleraci�n. Valor promedio de la desaceleraci�n.
#include <stdio.h> //librerias para ejecucion
#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias para ejecucion
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
#include <string.h>//libreria para 'string'
#include <math.h>//libreria para funciones matematicas
#include <windows.h>//libreria para usar 'Sleep'
void fisica (int); //declaro el subprograma
main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int n;
	printf("D�gite el n�mero total de experimenros de F�sica: ");
	scanf("%i", &n);
	fisica(n);
	getch();
}
void fisica(int N)
{
	float mov_sin_acc=0, mov_desacc=0, mov_acc=0, velo_ini, velo_fin, dist, acc=0, prom_acc=0, prom_desacc=0, acum_acc=0, acum_desacc=0;
	for(int cont=0; cont<N; cont++)
	{
		printf("\nDigite la velocidad inicial del experimento %i: ", cont+1);
		scanf("%f", &velo_ini);
		printf("\nDigite la velocidad final del experimento %i: ", cont+1);
		scanf("%f", &velo_fin);
		printf("\nDigite la distancia del experimento %i: ", cont+1);
		scanf("%f", &dist);
		acc = (velo_fin - velo_ini) / dist;
		if(acc==0)
		{
			mov_sin_acc = mov_sin_acc + 1;
		}
		else
		{
			if(acc<0)
			{
				mov_desacc = mov_desacc + 1;
				acum_desacc = acum_desacc + acc;
			}
			else
			{
				mov_acc = mov_acc + 1;
				acum_acc = acum_acc + acc;
			}
			
		}
		Sleep(1000);
		system("CLS"); 
	}
	if(mov_acc != 0)
		prom_acc = acum_acc / mov_acc;
	else
		prom_acc = 0;

	if(mov_desacc != 0)
		prom_desacc = acum_desacc / mov_desacc;
	else
		prom_desacc = 0;
		
	printf("El n�mero de m�viles acelerados es: %.0f \nEl n�mero de m�viles desacelerados es: %.0f \nEl n�mero de m�viles sin aceleraci�n es: %.0f \nEl valor promedio de la aceleraci�n es: %.1f \nEl valor promedio de la desaceleraci�n es: %.1f ", mov_acc, mov_desacc, mov_sin_acc, prom_acc, prom_desacc);		
}
