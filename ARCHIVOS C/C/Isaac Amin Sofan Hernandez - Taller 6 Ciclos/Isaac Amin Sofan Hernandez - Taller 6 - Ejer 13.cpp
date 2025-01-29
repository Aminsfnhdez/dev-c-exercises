// Taller 6 Ejercicio 13 Ciclos
// Autor Isaac Amín Sofán Hernández
// Escriba un algoritmo que liquide la matrícula de los 100 estudiantes así: el total a pagar es igual al cargo fijo más el cargo variable. 
// El cargo fijo para todo estudiante es de $12.500 y el cargo variable se calcula multiplicando, el valor crédito por el número de créditos.
// Cada estudiante da los siguientes datos: N° Carnet, valor crédito y número de créditos. 
// De cada estudiante se debe informar: N° Carnet, cargo fijo, cargo variable y el total a pagar de la matrícula.
// El valor mínimo a pagar por cargo variable es de $180.000. Al final, se debe informar un total indicando cuánto suman todas las matrículas calculadas.
#include <stdio.h> //librerias para ejecucion
#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias para ejecucion
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
#include <string.h>//libreria para 'string'
#include <math.h>//libreria para funciones matematicas
#include <windows.h>//libreria para usar 'Sleep'
void matricula (int); //declaro el subprograma
main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int n = 100;
	matricula(n);
	getch();
}
void matricula(int N)
{
	int val_fij=12500, val_var, num_cred, val_cred, num_car, total_matr, acum_matr;
	for(int i=0; i<N;i++)
	{
		printf("Digite el número de Carnet número %i: ", i+1);
		scanf("%i", &num_car);
		printf("\nDigite el número de Créditos a matricular: ");
		scanf("%i", &num_cred);
		printf("\nDigite el valor por Crédito: $");
		scanf("%i", &val_cred);
		val_var = num_cred * val_cred;
		if(val_var<180000)
		{
			val_var = 180000;
		}
		total_matr = val_fij + val_var;
		acum_matr = acum_matr + total_matr;
		printf("\nPara el estudiante con número de Carnet %i \nEl cargo fijo es: $%i \nEl cargo variable es: $%i \nEl Valor de la matricula es: $%i ", num_car, val_fij, val_var, total_matr);
		Sleep(3000);
		system("CLS");			
	}
	printf("El valor total de todas las matriculas es: $%i", acum_matr);
	
}
