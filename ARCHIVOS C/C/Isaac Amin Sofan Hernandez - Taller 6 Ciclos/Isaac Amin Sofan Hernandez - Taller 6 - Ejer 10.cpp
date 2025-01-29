// Taller 6 Ejercicio 10 Ciclos
// Autor Isaac Amín Sofán Hernández
// Una compañía de aviación vende diariamente 200 tiquetes y ofrece las siguientes rutas: 1. Medellin - Miami. 2. Medellin - Bogota - Roma.
// 3. Medellín – Panamá- Los Ángeles. 4. Medellín – Bogotá - Madrid. 5. Medellín – Miami –Toronto. 6. Medellín – Buenos Aires.
// Hallar cuántos tiquetes fueron vendidos para cada una de las rutas.
#include <stdio.h> //librerias para ejecucion
#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias para ejecucion
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
#include <string.h>//libreria para 'string'
#include <math.h>//libreria para funciones matematicas
#include <windows.h>//libreria para usar 'Sleep'
void tiquetes (int); //declaro el subprograma
main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int num_tiquetes = 200;
	tiquetes(num_tiquetes);
	getch();
}
void tiquetes(int N)
{
	int cont=0, cont_rut_1=0,cont_rut_2=0, cont_rut_3=0, cont_rut_4=0, cont_rut_5=0, cont_rut_6=0, ruta;
	while(cont<N)
	{
		printf("Dígite el número de la ruta por la que se vendió el tiquete: \n1.  Medellin - Miami. \n2. Medellin - Bogota - Roma. \n3. Medellín – Panamá- Los Ángeles. \n4. Medellín – Bogotá - Madrid. \n5. Medellín – Miami –Toronto. \n6. Medellín – Buenos Aires.\n");
		scanf("%i", &ruta);
		switch(ruta)
		{
			case 1: cont_rut_1 = cont_rut_1 + 1;
			break;
			case 2: cont_rut_2 = cont_rut_2 + 1;
			break;
			case 3: cont_rut_3 = cont_rut_3 + 1;
			break;
			case 4: cont_rut_4 = cont_rut_4 + 1;
			break;
			case 5: cont_rut_5 = cont_rut_5 + 1;
			break;
			case 6: cont_rut_6 = cont_rut_6 + 1;
			break;
			default: printf("Ruta incorrecta por favor digitela de nuevo \n");
					cont = cont - 1;
		}
		cont = cont + 1;
		Sleep(1000);
		system("CLS");
	}
	printf("La cantidad de tiquetes vendidos por cada ruta es: \nMedellin - Miami: %i. \nMedellin - Bogota - Roma: %i. \nMedellín – Panamá- Los Ángeles: %i. \nMedellín – Bogotá - Madrid: %i. \nMedellín – Miami –Toronto: %i. \nMedellín – Buenos Aires: %i.", cont_rut_1, cont_rut_2, cont_rut_3, cont_rut_4, cont_rut_5, cont_rut_6);
}
