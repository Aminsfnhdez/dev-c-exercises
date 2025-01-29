//Estructura rara

#include <stdio.h>
#include <conio.h>

main()
{
	bool menor1, menor2, menor3, mayor;
	int num;
	menor1 = false;
	menor2 = false;
	menor3 = false;
	mayor = false;
	printf("Digite un numero entero ");
	scanf("%i",&num);
	switch(num)
	{
		case 0: menor1 = true;
				printf("\n menor1 es: %d ", menor1);
				break;
		case 1: menor2 = true;
				printf("\n menor2 es: %d ", menor2);
				break;	
		case 2: menor3 = true;
				printf("\n menor3 es: %d ", menor3);
				break;
		default: mayor = true;
				printf("\n mayor es: %d", mayor);  					
	}
	/*
	if((let>='a') && (let>='z'))
	{
		printf("\n la palabra no es un nombre propio");// aqui la primera letra es minuscula
	}
	else
	{
		if((let>='a') && (let>='z'))
		{
			printf("\n la palabra %s es un nombre propio", palabra);// aqui la primera letra es mayuscula
		}
	}*/
}
