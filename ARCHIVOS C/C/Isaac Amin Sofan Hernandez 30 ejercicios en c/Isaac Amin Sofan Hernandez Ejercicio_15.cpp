//Ejercicio # 15 
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	
	float oldSalario, newSalario, incremento, valorIncremento;
	incremento = 25;
	printf("Dígite el valor del salario antiguo: ");
	scanf("%f", &oldSalario);
	valorIncremento =oldSalario * (incremento / 100);
	newSalario = oldSalario + valorIncremento;
	printf("\n El salario del antiguo salario es: %.2f", oldSalario);
	printf("\n El valor del incremento es: %.2f", valorIncremento);
	printf("\n El valor del nuevo salrio es: %.2f", newSalario);
	
	
	getch();
}
