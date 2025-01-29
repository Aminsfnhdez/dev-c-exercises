// Taller 6 Ejercicio 10 Ciclos
// Autor Isaac Am�n Sof�n Hern�ndez
// Una compa��a de aviaci�n vende diariamente 200 tiquetes y ofrece las siguientes rutas: 1. Medellin - Miami. 2. Medellin - Bogota - Roma.
// 3. Medell�n � Panam�- Los �ngeles. 4. Medell�n � Bogot� - Madrid. 5. Medell�n � Miami �Toronto. 6. Medell�n � Buenos Aires.
// Hallar cu�ntos tiquetes fueron vendidos para cada una de las rutas.
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
		printf("D�gite el n�mero de la ruta por la que se vendi� el tiquete: \n1.  Medellin - Miami. \n2. Medellin - Bogota - Roma. \n3. Medell�n � Panam�- Los �ngeles. \n4. Medell�n � Bogot� - Madrid. \n5. Medell�n � Miami �Toronto. \n6. Medell�n � Buenos Aires.\n");
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
	printf("La cantidad de tiquetes vendidos por cada ruta es: \nMedellin - Miami: %i. \nMedellin - Bogota - Roma: %i. \nMedell�n � Panam�- Los �ngeles: %i. \nMedell�n � Bogot� - Madrid: %i. \nMedell�n � Miami �Toronto: %i. \nMedell�n � Buenos Aires: %i.", cont_rut_1, cont_rut_2, cont_rut_3, cont_rut_4, cont_rut_5, cont_rut_6);
}
