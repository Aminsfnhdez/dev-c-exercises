// Taller 5 Ejercicio 4 subprogramas
// Autor Isaac Am�n Sof�n Hern�ndez
// Dado un capital inicial P equivalente a $800.000, se desea encontrar el valor futuro F para las siguientes tasas de inter�s(i1=0.02, i2=0.08) 
// con per�odos (n1=5, n2=13) respectivamente.    
//Tenga en cuenta que: F = P(1 + i) n.
// F -> valor futuro
// P -> capital inicial
// n -> periodos
// i -> tasa de inter�s
#include <stdio.h> //librerias
#include <conio.h> //librerias
#include <stdlib.h>//libreria para limpiar pantallla
#include <wchar.h> //librerias
#include <locale.h> //librerias
float valorFuturo (float, float); //declaro el subprograma
main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	float valFut, capIni, per; //declaro las variables a usar en el programa principal
	capIni = 800000; //le asigno valor al capital inicial 'capIni' 
	printf("Seleccione el tiempo a transcurrir, para el monto inicial $800.000\n");//se le pide al usuario que escoga el periodo y tasa de inter�s
	printf("cinco a�os con tasa de inter�s de 2%c. teclee '1': \n", 37 );// porcentaje con codigo ASCII
	printf("trece a�os con tasa de inter�s de 8%c. teclee '2': \n", 37);// porcentaje con codigo ASCII
	scanf("%f", &per);//almaceno el periodo y tasa de inter�s
	system("CLS");//limpio la pantalla
	valFut = valorFuturo(per, capIni);//invoco el subprograma que calcula el valor futuro de un capital
	getch();
}
float valorFuturo (float periodo, float capitalInicial) //subprograma que calcula el valor futuro de un capital
{
	float valorFinal; //declaro la variable a usar en el subprograma
	if(periodo == 1)
	{
		valorFinal = capitalInicial * 5 * 1.02; //si periodo es 5 a�os con 2% de inter�s
		printf("\n El valor  final de la inversi�n es: %.1f", valorFinal);
	}
	else
	{
		if(periodo == 2)
		{
			valorFinal = capitalInicial * 13 * 1.08; //si periodo es 13 a�os con 8% de inter�s
			printf("\n El valor  final de la inversi�n es: %.1f", valorFinal);
		}
		else
		{
			printf("\n******* Opci�n incorrepta *******");
		}
	}
}
