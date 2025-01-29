// Taller 6 Ejercicio 4 Ciclos
// Autor Isaac Amín Sofán Hernández
// En un grupo de 100 estudiantes de la materia matemáticas, se debe averiguar y mostrar lo siguiente:
// Calificación más alta, calificacion promedio, cuantos ganaron, cuantos perdieron ( < 3.0)
// De cada estudiante, se lee su nombre y la calificación de la materia matematicas. Tambien se le debe mostrar al estudiante, un mesaje que le indique si ganó o perdió la materia 
#include <stdio.h> //librerias para ejecucion
#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias para ejecucion
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
#include <string.h>//libreria para 'string'
#include <math.h>//libreria para funciones matematicas
#include <windows.h>//libreria para usar 'Sleep'
//void promedio (int); //declaro el subprograma
main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	char nombre[100];
	int cont_gan=0, cont_perd=0, suma=0;
	float nota, promedio, nota_alt=0;
	for(int cont=1; cont<=100; cont++)
	{
		printf("Dígite el nombre del estudiante %i: ", cont);
		scanf("%s", &nombre);
		printf("Dígite la nota del estudiante %i: ", cont);
		scanf("%f", &nota);
		if(nota_alt<nota)
		{
			nota_alt = nota;
		}
		suma = suma + nota;
		if(nota >= 3)
		{
			cont_gan = cont_gan + 1;
			printf("\nEl estudiante %s ganó la materia", nombre);
		}
		else
		{
			cont_perd = cont_perd + 1;
			printf("\nEl estudiante %s perdió la materia", nombre);
		}
		Sleep(2000);
		system("CLS");
	}
	system("CLS");
	promedio = suma/3;
	printf("\nLa cantidad de estudiantes que ganaron la materia es: %i", cont_gan);
	printf("\nLa cantidad de estudiantes que perdieron la materia es: %i", cont_perd);
	printf("\nLa calificación más alta es: %.1f", nota_alt);
	printf("\nLa calificación promedio es: %.1f", promedio);
	getch();
}


