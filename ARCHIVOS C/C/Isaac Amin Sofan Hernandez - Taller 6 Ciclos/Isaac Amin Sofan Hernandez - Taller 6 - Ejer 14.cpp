// Taller 6 Ejercicio 14 Ciclos
// Autor Isaac Amín Sofán Hernández
// Se tienen los datos de 30 trabajadores: por cada trabajador se tiene nombre, código, estado civil, sexo, el valor de la hora y el número de horas trabajadas en el mes. 
// Hallar el salario neto de cada trabajador y mostrarlo, teniendo en cuenta que si el salario básico mensual es > = 750.000 se le hace una retención para impuestos del 5% 
// y del 3% para seguridad social; si es < 750.000 solo se le hace una retención del 2% para seguridad social. Además, hallar: porcentaje de mujeres, el promedio de salario
// básico y el total de retención para seguridad social.
#include <stdio.h> //librerias para ejecucion
#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias para ejecucion
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
#include <string.h>//libreria para 'string'
#include <math.h>//libreria para funciones matematicas
#include <windows.h>//libreria para usar 'Sleep'
void trabajador (int); //declaro el subprograma
main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int n = 30;
	trabajador(n);
	getch();
}
void trabajador (int N)
{
	char nombre[100], sexo[1], est_civ;
	float cod, val_hora, horas_mes, val_neto, val_sal, acum_ret_seg=0, prom_muj, prom_sal, cont_muj=0, ret_imp, ret_seg, acum_sal=0;
	
	for(int i=0; i<N; i++)
	{
		printf("Digite el nombre del trabajador número %i: ", i+1);
		scanf("%s", &nombre);
		printf("\nDigite el código del trabajador número %i: ", i+1);
		scanf("%f", &cod);
		printf("\nDigite el estado civil del trabajador número %i: ", i+1);
		scanf("%s", &est_civ);
		printf("\nSeleccione el sexo del trabajador número %i: \nM para masculino \nF para femenino \n", i+1);
		scanf("%s", &sexo);
		printf("\nDigite el número de horas laboradas al mes por el trabajador número %i: ", i+1);
		scanf("%f", &horas_mes);
		printf("\nDigite el valor de la hora laborada por el trabajador número %i: ", i+1);
		scanf("%f", &val_hora);
		val_sal = horas_mes * val_hora;
		if (val_sal>=750000)
		{
			ret_imp = val_sal * 0.05;
			ret_seg = val_sal * 0.03;
			val_neto = val_sal - ret_imp - ret_seg;
		}
		else
		{
			ret_seg = val_sal * 0.02;
			val_neto = val_sal - ret_seg;
		}
		acum_ret_seg = acum_ret_seg + ret_seg;
		acum_sal = acum_sal + val_sal;
		if((sexo[0] == 'm') || (sexo[0] == 'M'))
		{
			cont_muj = cont_muj + 1;
		}
		printf("\nPara el trabajador %s, con código %.0f \nSalario mensual: %.0f \nTotal Retención: %.0f \nSalario Neto: %.0f \n", nombre, cod, val_sal, ret_imp + ret_seg, val_neto);
		Sleep(3000);
		system("CLS");
	}
	prom_muj = (cont_muj * 100) / N;
	prom_sal = acum_sal / N;
	printf("El porcetaje de mujeres es: %.0f%c", prom_muj, 37);
	printf("\nEl promedio del Salario Básico es: %.0f", prom_sal);
	printf("\nEl Total de la Retención de Seguridad Social para los %i trabajadores es: %.0f", N, prom_sal);
}
