//Ejercicio # 5 
// Autor Isaac Am�n Sof�n Hern�ndez

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

printf("El salario b�sico es: %.f \n", salarioBasico  );

printf("la retenci�n de la fuente es: %.f \n", retencion);

printf("El salario neto es: %.f \n", salarioNeto );
		
	getch();
}
