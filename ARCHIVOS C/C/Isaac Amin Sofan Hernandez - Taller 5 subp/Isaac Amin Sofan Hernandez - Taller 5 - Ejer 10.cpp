// Taller 5 Ejercicio 10 subprogramas
// Autor Isaac Am�n Sof�n Hern�ndez
// A partir de un valor ingresado de la Hora, n�mero de horas al mes y el nombre del trabajador, se desea obtener el salario neto mensual de un empleado, cuyo trabajo
// se paga por horas mensuales de la sgte forma:
// las horas menores o iguales a 120 se paga normal (a lo que vale la hora)
// las horas por encima de 120, pagar�n como extra (al doble de las normales)
// la deducci�n de los impuestos con base en el salario b�sico, teniendo en cuenta el valor de las horas normales mas el valor de las horas extras (si las hay)
// si el salario b�sico es menor o igual a $380.000, se hace una deducci�n del 10 %
// si el salario b�sico es mayor a $380.000 y menor o igual a $480.000, se hace una deducci�n del 20 %
// si el salario b�sico es mayor a $480.000, se hace una deducci�n del 30 %
#include <stdio.h> //librerias
#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
void salario (char*, float, float); //declaro el subprograma
main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	float valorHora, numHoras;//variables a usar en el programa principal
	char trabajador[100];//variables a usar en el programa principal
	printf("Ingrese el nombre del trabajador: ");//pido el nombre del trabajador
	scanf("%s", &trabajador);//almaceno el nombre del trabajador
	system("CLS");// limpio la pantalla
	printf("D�gite el n�mero horas trabajadas: ");// pido el numero de horas trabajadas
	scanf("%f", &numHoras);//almaceno el numero de horas trabajadas
	system("CLS");//limpio la pantalla
	printf("Ingrese el valor de la hora de trabajo: ");//pido el valor de la hora
	scanf("%f", &valorHora);//almaceno el valor de la hora
	system("CLS");//limpio la pantalla
	salario(trabajador, numHoras, valorHora);//invoco subprograma que calcula el salario
	getch();
}
void salario (char nomTrabajador[100], float numH, float valorH)//subprograma que calcula el salario
{
	float pago, pagoNeto, horaExtra, deduccion;//variables a usar en el subprograma
	if(numH<744)//si no exsede en numero de hora que tiene un mes
	{
		if(numH<=120)//si trabajo 120 horas o menos en el mes
		{
			pago = numH * valorH;//salario sin horas extras
		}
		else
		{
			if(numH>120)//si trabaja mas 120 horas al mes
			{
				horaExtra = numH - 120;//numero de horas extras
				pago = (120 * valorH) + (horaExtra * valorH * 2);//salario base mas pago por horas extras
			}
		}
		if(pago<=380000)//si el salario es 380000 o menos
		{
			deduccion = pago * 0.10;//deducci�n por impuestos
		}
		else
		{
			if((pago>380000) && (pago<=480000))//si el salario esta entre 380001  y 480000
			{
				deduccion = pago * 0.20;//deducci�n por impuestos
			}
			else
			{
				if(pago>480000)// si el salario es 480001 o m�s
				{
					deduccion = pago * 0.30;//deducci�n por impuestos
				}
			}
		}
		pagoNeto = pago - deduccion;//salario menos deducci�n por impuestos
		printf("Al trabajador %s, por %.0f horas trabajadas", nomTrabajador, numH);//muestro el nombre del trbajador y el n�mero de horas trbajadas
		printf("\nSalario Total: %.0f", pago);//muestro el salario total
		printf("\nDeducci�n: %.0f", deduccion);//muestro el valor de la deducci�n por impuestos
		printf("\nSalario Neto: %.0f", pagoNeto);//muestro el salario neto.
	}
	else
	{
		printf("******* Limite de horas trabajadas excedido *******");//si excede el numero de horas que tiene el mes
	}
	
	
}
