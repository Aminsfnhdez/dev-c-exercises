// Reto 4
// Autor Isaac Am�n Sof�n Hern�ndez

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int duraLlama, diaLlma, turnoLlama, totalPago, min;
	printf("M�s chisme menos dinero");
	printf("\n D�gite los minutos que dur� la llamada: ");
	scanf("%i", &duraLlama);
	if((duraLlama>0) && (duraLlama<=5))
	{
		printf("\n En qu� jornada realiz� la llamada ");
		printf("\n Matutino = 1, vespertino (de 6:30 a 9:30 pm) = 2, domingo = 3 \n");
		scanf("%i", &turnoLlama);
		switch(turnoLlama)
		{
			case 1: totalPago = duraLlama * (100 * 1.15);
					printf("\n El total a pagar, por la duraci�n de la llamada y por el tipo de jornada es: %i", totalPago);
					break;
			case 2: totalPago = duraLlama * (100 * 1.10);
					printf("\n El total a pagar, por la duraci�n de la llamada y por el tipo de jornada es: %i", totalPago);
					break;
			case 3: totalPago = duraLlama * (100 * 1.03);
					printf("\n El total a pagar, por la duraci�n de la llamada y por el tipo de jornada es: %i", totalPago);
					break;		
			default: printf("\n Opci�n Incorrecta");				
		}
	}	
	else
	{
		if((duraLlama>5) && (duraLlama<=8))
		{
			printf("\n En qu� jornada realiz� la llamada ");
			printf("\n Matutino = 1, vespertino (de 6:30 a 9:30 pm) = 2, domingo = 3 \n");
			scanf("%i", &turnoLlama);
			min = duraLlama - 5;
			switch(turnoLlama)
			{
				case 1: totalPago = (((5 *  100) + (min * 80 )) * 1.15);
						printf("\n El total a pagar, por la duraci�n de la llamada y por el tipo de jornada es: %i", totalPago);
						break;
				case 2: totalPago = (((5 *  100) + (min * 80 )) * 1.10);
						printf("\n El total a pagar, por la duraci�n de la llamada y por el tipo de jornada es: %i", totalPago);
						break;
				case 3: totalPago = (((5 *  100) + (min * 80 )) * 1.03);
						printf("\n El total a pagar, por la duraci�n de la llamada y por el tipo de jornada es: %i", totalPago);
						break;		
				default: printf("\n Opci�n Incorrecta");				
			}
		}
		else
		{
			if((duraLlama>8) && (duraLlama<=10))
			{
					printf("\n En qu� jornada realiz� la llamada ");
					printf("\n Matutino = 1, vespertino (de 6:30 a 9:30 pm) = 2, domingo = 3 \n");
					scanf("%i", &turnoLlama);
					min = duraLlama - 8;
					switch(turnoLlama)
					{
						case 1: totalPago = (((5 *  100) + (3 * 80) + (min * 70 )) * 1.15);
								printf("\n El total a pagar, por la duraci�n de la llamada y por el tipo de jornada es: %i", totalPago);
								break;
						case 2: totalPago = (((5 *  100) + (3 * 80) + (min * 70 )) * 1.10);
								printf("\n El total a pagar, por la duraci�n de la llamada y por el tipo de jornada es: %i", totalPago);
								break;
						case 3: totalPago = (((5 *  100) + (3 * 80) + (min * 70 )) * 1.03);
								printf("\n El total a pagar, por la duraci�n de la llamada y por el tipo de jornada es: %i", totalPago);
								break;		
						default: printf("\n Opci�n Incorrecta");				
					}
			}
			else
			{
				if(duraLlama>10)
				{
					printf("\n En qu� jornada realiz� la llamada ");
					printf("\n Matutino = 1, vespertino (de 6:30 a 9:30 pm) = 2, domingo = 3 \n");
					scanf("%i", &turnoLlama);
					min = duraLlama - 10;
					switch(turnoLlama)
					{
						case 1: totalPago = (((5 *  100) + (3 * 80) + (2 * 70) + (min * 50 )) * 1.15);
								printf("\n El total a pagar, por la duraci�n de la llamada y por el tipo de jornada es: %i", totalPago);
								break;
						case 2: totalPago = (((5 *  100) + (3 * 80) + (2 * 70) + (min * 50 )) * 1.10);
								printf("\n El total a pagar, por la duraci�n de la llamada y por el tipo de jornada es: %i", totalPago);
								break;
						case 3: totalPago = (((5 *  100) + (3 * 80) + (2 * 70) + (min * 50 )) * 1.03);
								printf("\n El total a pagar, por la duraci�n de la llamada y por el tipo de jornada es: %i", totalPago);
								break;		
						default: printf("\n Opci�n Incorrecta");
					}
				}
			}
		}
	}
}

	
	
	


