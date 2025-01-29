//Ejercicio # 8 
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	
	float horasTrabajoMes, valorHora, porcentajeRetencion, salarioBasico, salarioNeto, retencion;
	float cedula;
	
	printf("Dígite la cédula del empleado: ");
	scanf("%f", &cedula);
	printf("\n Dígite la cantidad de horas trabajadas: ");
	scanf("%f", &horasTrabajoMes);
	printf("\n Dígite el valor de la hora trabajada: ");
	scanf("%f", &valorHora);
	printf("\n Dígite el porcentaje de retención: ");
	scanf("%f", &porcentajeRetencion);
	
	salarioBasico = (horasTrabajoMes * valorHora);
	retencion = salarioBasico * (porcentajeRetencion/100);
	salarioNeto = salarioBasico - retencion;
	
	printf("\n El salario básico es: %.2f", salarioBasico);
	printf("\n La retención de la fuente es: %.2f ", retencion);
	printf("\n El salario neto es: %.2f", salarioNeto);
		 
	
	getch();
}
