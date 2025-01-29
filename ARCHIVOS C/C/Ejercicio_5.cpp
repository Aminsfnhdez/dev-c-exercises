//Ejercicio # 5 
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	
float salarioBasico, retencion, salarioNeto, horasTrabajo, valorHora, porcentajeRetencion;

horasTrabajo = 48;
valorHora = 5000;
porcentajeRetencion = 12.5/100;

salarioBasico = (horasTrabajo * valorHora) *4;
retencion = salarioBasico * porcentajeRetencion;
salarioNeto = salarioBasico - retencion;

printf("El salario básico es: %.f \n", salarioBasico  );

printf("la retención de la fuente es: %.f \n", retencion);

printf("El salario neto es: %.f \n", salarioNeto );
		
	getch();
}
