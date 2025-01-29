// Reto 2
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int renBus, numEstudiantes, totalPago, cobroPorEstudiante, cobroEstudiantes;
	renBus = 400000;
	printf("Dígite el número de estudiantes: ");
	scanf("%i", &numEstudiantes);
	if(numEstudiantes >= 100)
	{
		cobroEstudiantes = numEstudiantes * 65000;
		cobroPorEstudiante = cobroEstudiantes / numEstudiantes;
		totalPago = renBus + cobroEstudiantes;
		printf("\n Por la renta del bus es: %i", renBus);
		printf("\n El cobro por es estudiantes es %i , por %i estudiantes es: %i", cobroPorEstudiante, numEstudiantes, cobroEstudiantes);
		printf("\n El total a pagar por el viaje es: %i", totalPago);
	}
	else
	{
		if((numEstudiantes>=50) && (numEstudiantes<=99))
		{
			cobroEstudiantes = numEstudiantes * 70000;
			cobroPorEstudiante = cobroEstudiantes / numEstudiantes;
			totalPago = renBus + cobroEstudiantes;
			printf("\n Por la renta del bus es: %i", renBus);
			printf("\n El cobro por es estudiantes es %i , por %i estudiantes es: %i", cobroPorEstudiante, numEstudiantes, cobroEstudiantes);
			printf("\n El total a pagar por el viaje es: %i", totalPago);
		}
		else
		{
			if((numEstudiantes<50) && (numEstudiantes > 0)) 
			{
				cobroEstudiantes = numEstudiantes * 95000;
				cobroPorEstudiante = cobroEstudiantes / numEstudiantes;
				totalPago = renBus + cobroEstudiantes;
				printf("\n Por la renta del bus es: %i", renBus);
				printf("\n El cobro por es estudiantes es %i , por %i estudiantes es: %i", cobroPorEstudiante, numEstudiantes, cobroEstudiantes);
				printf("\n El total a pagar por el viaje es: %i", totalPago);
			}
			else
			{
				if(numEstudiantes<=0)
				{
					printf("\n El número de estudiantes es invalido");
				}
			}
		}
	}	
}
