// Taller 6 Ejercicio 1 Ciclos
// Autor Isaac Am�n Sof�n Hern�ndez
// Leer una cantidad 'n' de n�meros y hallar cu�ntos son m�ltiplos de 3.
#include <stdio.h> //librerias para ejecucion
#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias para ejecucion
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
#include <string.h>//libreria para 'string'
#include <math.h>//libreria para funciones matematicas
int multiplos (int); //declaro el subprograma
main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int n, resultado;
	printf("D�gite una cantidad de numeros y le muestro cuantos son multiplos de 3:  ");
	scanf("%d", &n);//la 'd' tambien sirve para enteros
	resultado = multiplos(n);
	system("CLS");
	printf("De los %d n�meros digitados %d son m�ltiplos de 3", n, resultado);
	getch();
}
int multiplos(int N)
{
	int contador=0, numero, conmul3=0;
	while(contador<N)
	{
		printf("D�gite el n�mero %d: ", contador+1);// ' contador+1' para presentacion
		scanf("%d", &numero);
		if(numero%3 == 0)
		{
			conmul3 = conmul3 + 1;
		}
		contador = contador + 1;
		
	}
	return conmul3;
}
