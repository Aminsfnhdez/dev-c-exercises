//Ejercicio # 25
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL,"");
	
	float grados, ngrados, radianes, nradianes;
	
	grados = 180;
	radianes = 3,1416;
	printf("Dígite la catidad de grados a convertir: ");
	scanf("%f", &ngrados);
	nradianes = (ngrados * radianes) / grados;
	printf("\n La cantidad de grados es: %.2f", ngrados);
	printf("\n La catidad de radianes es: %.2f", nradianes);
	
	
	getch();
}



