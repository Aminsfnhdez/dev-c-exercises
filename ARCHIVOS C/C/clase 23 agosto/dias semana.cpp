//Dias de la semana

#include <stdio.h>
#include <conio.h>

main()
{
	int dia;
	printf("Programa que calcula el nombre del d�a seg�n su numero de d�a (Digite un numero del 1 al 7) \n");
	scanf("%i",&dia);

	switch(dia)
	{
		case 1: printf("El d�a es LUNES");
				break;
		case 2: printf("El d�a es MARTES");
				break;		
		case 3: printf("El d�a es MIERCOLES");
				break;		
		case 4: printf("El d�a es JUEVES");
				break;		
		case 5: printf("El d�a es VIERNES");
				break;		
		case 6: printf("El d�a es S�BADO");
				break;		
		case 7: printf("El d�a es DOMINGO");
				break;		
		default: printf("**** El numero debe estar entre 1 y 7 *********");
				break;		
		
		
	}
	
}



