// Taller 5 Ejercicio 5 subprogramas
// Autor Isaac Amín Sofán Hernández
// Elaborar un algoritmo para que calcule la nota definitiva de un estudiante de funtamentos de programacion. se debe leer las sgtes notas: seg(seguimiento - 50%),
//parc1(parcial uno - 25%) y parc2(parcial dos - 25%); al final debe impimir un mensaje que indique si ganó o perdió la materia.
#include <stdio.h> //librerias
#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
float calcular (float, float, float); //declaro el subprograma
main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	float parc1, parc2, seg;//declaro la variables a usar en el programa principal
	printf("Dígite la nota del parcial número uno: ");//pido la nota del parcial uno
	scanf("%f", &parc1);// almaceno nota del parcial uno
	printf("\nDígite la nota del parcial número dos: ");//pido la nota del parcial dos
	scanf("%f", &parc2);// almaceno nota del parcial dos
	printf("\nDígite la nota del seguimiento: ");//pido la nota del seguimiento
	scanf("%f", &seg);// almaceno nota seguimiento
	system("CLS");//limpiar pantalla
	calcular(parc1, parc2, seg);//invoco el subprograma que calcula la nota final
}
float calcular (float parcial1, float parcial2, float seguimiento)//subprograma que calcula la nota final
{
	float notaDefinitiva;//declaro la variables a usar en el subprograma
	notaDefinitiva = parcial1 * 0.25 + parcial2 * 0.25 + seguimiento * 0.50; //sumatoria de las notas de acuerdo a los porcentajes
	if(notaDefinitiva > 2.9)//si la sumatoria de las notas alcanza el minimo requerido
	{
		printf("\nEstudiante su nota es %.1f . GANÓ la materia", notaDefinitiva);
	}
	else//si la sumatoria de las notas no alcanza el minimo requerido
	{
		printf("\nEstudiante su nota es %.1f . PERDIÓ la materia", notaDefinitiva);
	}
}
