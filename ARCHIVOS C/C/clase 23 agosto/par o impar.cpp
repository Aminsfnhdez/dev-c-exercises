//Si es par sumar +10 si es impar multiplicar por 3

#include <stdio.h>
#include <conio.h>

main()
{
	int numero, valor;
	printf("Digite un numero entero ");
	scanf("%i",&numero);
	valor = numero % 2;
	
switch(valor)
{
	case 0: printf("Al numero %i se suma 10: %i", numero, numero+10);
			break;
	case 1: printf("Al numero %i se multiplica por tres: %i ", numero, numero*3);
			break;
	
}
	
}
