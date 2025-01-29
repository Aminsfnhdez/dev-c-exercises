//Dias de la semana

#include <stdio.h>
#include <conio.h>

main()
{
	int dia;
	printf("Programa que calcula el nombre del día según su numero de día (Digite un numero del 1 al 7) \n");
	scanf("%i",&dia);

	switch(dia)
	{
		case 1: printf("El día es LUNES");
				break;
		case 2: printf("El día es MARTES");
				break;		
		case 3: printf("El día es MIERCOLES");
				break;		
		case 4: printf("El día es JUEVES");
				break;		
		case 5: printf("El día es VIERNES");
				break;		
		case 6: printf("El día es SÁBADO");
				break;		
		case 7: printf("El día es DOMINGO");
				break;		
		default: printf("**** El numero debe estar entre 1 y 7 *********");
				break;		
		
		
	}
	
}



