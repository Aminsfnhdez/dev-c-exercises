//Taller 4 Ejercicio # 20
// Autor Isaac Am�n Sof�n Hern�ndez

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int codigo, numDiasTrabMes, valorDia, porcImpuesto, porcSegSocial, porcPension, salarioMensual;
	int descImpuesto, descSegSocial, descPension, impuesto, segSocial, pension, salarioNeto, subsidio;
	printf("D�gite su c�digo de trabajador: ");
	scanf("%i", &codigo);
	printf("\n D�gite el n�mero de d�as trabajados al mes: ");
	scanf("%i", &numDiasTrabMes);
	if(numDiasTrabMes <= 31)
	{
		printf("\n D�gite el valor del d�a trabajado: ");
		scanf("%i", &valorDia);
		salarioMensual = numDiasTrabMes * valorDia;
		if(salarioMensual >= 1400000)
		{
			porcImpuesto = 2.2 * salarioMensual / 100;
			porcSegSocial = 4 * salarioMensual / 100;
			porcPension = 4 * salarioMensual / 100;
			descImpuesto = 7 * porcImpuesto / 100;
			descSegSocial = 3 * porcSegSocial / 100;
			descPension = 2 * porcPension / 100;
			impuesto = porcImpuesto - descImpuesto;
			segSocial = porcSegSocial - descSegSocial;
			pension = porcPension - descPension;
			salarioNeto = salarioMensual - impuesto - segSocial - pension;
			printf("\n su codigo de empleado es: %i", codigo);
			printf("\n El salario mensual es de: %i", salarioMensual);
			printf("\n La deducci�n de impuestos es: %i. menos el descuento al impuesto de %i , da la deducci�n neta del impuesto de: %i", porcImpuesto, descImpuesto, impuesto);
			printf("\n La deducci�n del seguro social es: %i. menos el descuento al seguro social de %i , da la deducci�n neta del seguro social de: %i", porcSegSocial, descSegSocial, segSocial);
			printf("\n La deducci�n de la pension es: %i. menos el descuento a la pension de %i , da la deducci�n neta de la pension de: %i", porcPension, descPension, pension);
			printf("\n El salario menos deducciones (salario Neto) es: %i", salarioNeto);
 		}
 		else
 		{
 			subsidio = 2 * salarioMensual / 100;
			porcSegSocial = 4 * salarioMensual / 100;
			porcPension = 4 * salarioMensual / 100;
			descSegSocial = 2 * porcSegSocial / 100;
			descPension = 1.5 * porcPension / 100;
			segSocial = porcSegSocial - descSegSocial;
			pension = porcPension - descPension;
			salarioNeto = salarioMensual + subsidio - segSocial - pension;
			printf("\n su codigo de empleado es: %i", codigo);
			printf("\n El salario mensual es de: %i", salarioMensual);
			printf("\n su subsidio es de: %i", subsidio);
			printf("\n La deducci�n del seguro social es: %i. menos el descuento al seguro social de %i , da la deducci�n neta del seguro social de: %i", porcSegSocial, descSegSocial, segSocial);
			printf("\n La deducci�n de la pension es: %i. menos el descuento a la pension de %i , da la deducci�n neta de la pension de: %i", porcPension, descPension, pension);
			printf("\n El salario menos deducciones (salario Neto) es: %i", salarioNeto);
		}
	}
	else
	{
		printf("\n Error ha excedido los d�as del mes");
	}
	
}
