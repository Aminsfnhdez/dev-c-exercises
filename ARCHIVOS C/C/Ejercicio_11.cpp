//Ejercicio # 11 
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	float parcial1, parcial2, parcial3, porc55, porc30, porc15, trabajoFinal, examenFinal;
	float nota1, nota2, nota3, notaFinal;
	
	porc55 = 55;
	porc30 = 30;
	porc15 = 15;
	
	printf("Dígite la nota del parcial número 1: ");
	scanf("%f", &parcial1);
	printf("\n Dígite la nota del parcial número 2: ");
	scanf("%f", &parcial2);
	printf("\n Dígite la nota del parcial número 3: ");
	scanf("%f", &parcial3);
	printf("\n Dígite la nota del Trabajo final: ");
	scanf("%f", &trabajoFinal);
	printf("\n Dígite la nota del Examen final: ");
	scanf("%f", &examenFinal);
	
	nota1 = ((parcial1 + parcial2 + parcial3)/3) * (porc55/100);
	nota2 = trabajoFinal * (porc15/100);
	nota3 = examenFinal * (porc30/100);
	notaFinal = nota1 + nota2 + nota3 ;
	
	printf("\n La nota final es: %.1f", notaFinal);
	
	getch();
}
