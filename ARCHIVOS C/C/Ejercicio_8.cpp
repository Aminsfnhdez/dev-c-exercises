//Ejercicio # 8 
// Autor Isaac Am�n Sof�n Hern�ndez

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	
	float horasTrabajoMes, valorHora, porcentajeRetencion, salarioBasico, salarioNeto, retencion;
	float cedula;
	
	printf("D�gite la c�dula del empleado: ");
	scanf("%f", &cedula);
	printf("\n D�gite la cantidad de horas trabajadas: ");
	scanf("%f", &horasTrabajoMes);
	printf("\n D�gite el valor de la hora trabajada: ");
	scanf("%f", &valorHora);
	printf("\n D�gite el porcentaje de retenci�n: ");
	scanf("%f", &porcentajeRetencion);
	
	salarioBasico = (horasTrabajoMes * valorHora);
	retencion = salarioBasico * (porcentajeRetencion/100);
	salarioNeto = salarioBasico - retencion;
	
	printf("\n El salario b�sico es: %.2f", salarioBasico);
	printf("\n La retenci�n de la fuente es: %.2f ", retencion);
	printf("\n El salario neto es: %.2f", salarioNeto);
		 
	
	getch();
}
