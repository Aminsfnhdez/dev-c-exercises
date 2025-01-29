// Taller 5 Ejercicio 3 subprogramaso
// Autor Isaac Amín Sofán Hernández
//Determinar si un triángulo es Equilátero, Isósceles o Escaleno.
#include <stdio.h> //librerias
#include <conio.h> //librerias
#include <stdlib.h>//libreria para limpiar pantallla
#include <wchar.h> //librerias
#include <locale.h> //librerias
void tipoTriangulo (int, int, int); //declaro el subprograma
main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int lad1, lad2, lad3; //declaro las variables para usar en el programa principal.
	printf("Digite el lado 'UNO' del triangulo: ");//pido al usuario el primer lado del triangulo
	scanf("%i", &lad1);//almaceno el primer lado del triangulo
	printf("\nDigite el lado 'DOS' del triangulo: ");//pido al usuario el segundo lado del triangulo
	scanf("%i", &lad2);//almaceno el segundo lado del triangulo
	printf("\nDigite el lado 'TRES' del triangulo: ");//pido al usuario el tercer lado del triangulo
	scanf("%i", &lad3);//almaceno el tercer lado del triangulo
	system("CLS");//limpiar pantalla
	tipoTriangulo(lad1, lad2, lad3); //invoco el subprograma que determina el tipo de triangulo	
	getch();
}
void tipoTriangulo(int lado1, int lado2, int lado3)//subprograma de tipo procedimiento que determina el tipo de triangulo
{
	if((lado1 == lado2) && (lado1 == lado3) && (lado2 == lado3))//si los tres lados son iguales
	{
		printf("\nDe acuerdo a los lados el triángulo es 'EQUILATERO'");//imprimo en pantalla el tipo de triángulo
	}
	else
	{
		if(((lado1 == lado2) || (lado1 == lado3) || (lado2 == lado3)))//si dos lados son iguales
		{
			printf("\nDe acuerdo a los lados el triángulo es 'ISOSCELES'"); //imprimo en pantalla el tipo de triángulo
		}
		else
		{
			if((lado1 != lado2) && (lado1 != lado3) && (lado2 != lado3))//si todos los lados son diferentes
			{
				printf("\nDe acuerdo a los lados el triángulo es 'ESCALENO'"); //imprimo en pantalla el tipo de triángulo
			}
		}
	}
}

