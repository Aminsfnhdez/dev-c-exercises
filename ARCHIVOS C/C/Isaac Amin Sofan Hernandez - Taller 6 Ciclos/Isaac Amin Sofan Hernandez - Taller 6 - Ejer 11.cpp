// Taller 6 Ejercicio 11 Ciclos
// Autor Isaac Amín Sofán Hernández
// Una oficina de empleo realiza entrevistas cada día a 500 personas. Se desea hallar cuántas mujeres y cuántos hombres son entrevistados, 
// cuál es la suma total de la edad de todas las mujeres, la suma total de la edad de los hombres y el promedio de edad del grupo.
#include <stdio.h> //librerias para ejecucion
#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias para ejecucion
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
#include <string.h>//libreria para 'string'
#include <math.h>//libreria para funciones matematicas
#include <windows.h>//libreria para usar 'Sleep'
void promedio (int); //declaro el subprograma
main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int n = 4;
	promedio(n);
	getch();
}
void promedio (int N)
{
	char sexo[1];
	int cont=0, cont_masc=0, cont_fem=0, acum_edad_masc=0, acum_edad_fem=0, edad; 
	float prom_edad=0, prom_fem, prom_masc;
	while (cont<N)
	{
		printf("Entrevista: %i \n", cont + 1);
		printf("Dígite el sexo de la persona que entrevistó M si es Masculino, F si es Femenino: ");
		scanf("%s", &sexo);
		printf("\nDígite la edad de la persona: ");
		scanf("%i", &edad);
		switch(sexo[0])
		{
			case 'm': case 'M': cont_masc = cont_masc + 1;
								acum_edad_masc = acum_edad_masc + edad;
								break;
			case 'f': case 'F': cont_fem = cont_fem + 1;
								acum_edad_fem = acum_edad_fem + edad;
								break;
			default: printf("\nEl sexo de la persona que ingreso es incorrecto");
					cont = cont - 1;									
		}
		cont = cont + 1;
		sexo[0] = ' ';
		Sleep(1000);
		system("CLS");
	}
	prom_fem = acum_edad_fem / cont_fem;
	prom_masc = acum_edad_masc / cont_masc;
	prom_edad = (acum_edad_fem + acum_edad_masc) / N;
	printf("La cantidad de mujeres entrevistadas es de: %i", cont_fem);
	printf("\nLa cantidad de hombres entrevistados es de: %i", cont_masc);
	printf("\nEl promedio de la edad de las mujeres es de: %.1f", prom_fem);
	printf("\nEl promedio de la edad de los hombres es de: %.1f", prom_masc);
	printf("\nEl promedio de la edad del grupo es de: %.1f", prom_edad);
}
