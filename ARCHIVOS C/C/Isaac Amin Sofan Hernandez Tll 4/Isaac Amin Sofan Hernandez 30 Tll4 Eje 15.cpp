//Taller 4 Ejercicio # 15
// Autor Isaac Am�n Sof�n Hern�ndez

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int codigo, salario, valorHora, horasTrabajadas, horaAumento, horasConRecargo, valorFijo; 
	printf("D�gite su c�digo de empleado: ");
	scanf("%i", &codigo);
	printf("\n D�gite el valor de la hora trabajada: ");
	scanf("%i", &valorHora);
	printf("\n D�gite el n�mero de horas que trabajo esta semana: ");
	scanf("%i", &horasTrabajadas);
	
	if(horasTrabajadas>48)
	{
		horasConRecargo = horasTrabajadas - 48;
		horaAumento = ((35 * valorHora / 100) + valorHora) * horasConRecargo;
		valorFijo = valorHora * 48;
		salario = valorFijo + horaAumento;
		printf("\n El valor fijo semanal es %i , las horas con recargo son %i y el valor del salario semanal es: %i", valorFijo, horasConRecargo, salario);
	}
	else
	{
		salario = horasTrabajadas * valorHora;
		printf("\n El valor del salario semanal es: %i", salario);
	}
	
}
