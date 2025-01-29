// Taller 5 Ejercicio 1 subprogramas
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>//libreria para limpiar pantallla
#include <wchar.h>
#include <locale.h>
void mes(int); //declaro la funcion
main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y careacteres especialesen pantalla
	int numero; // declaro la variable que uso en el programa principal
	printf("=== ¿Cuál mes es? ===\n"); // Titulo .....
	printf("Dígite un número del '1' al '12': "); //pido que se ingrese un número
	scanf("%i", &numero); // almaceno el número pedido
	system("CLS");//limpio la pantalla
	mes(numero); //llamo al subprograma
	getch();
}

void mes(int num) //subprograma que devuelve un valor entero e imprime un mensaje en pantalla
{
	switch(num) //de acuerdo al nummero seleccionado da los sgtes valores.
	{
		case 1: printf("El mes que corresponde a '1' es: 'Enero'");
				break;
		case 2: printf("El mes que corresponde a '2' es: 'Febrero'");
				break;		
		case 3: printf("El mes que corresponde a '3' es: 'Marzo'");
				break;		
		case 4: printf("El mes que corresponde a '4' es: 'Abril'");
				break;		
		case 5: printf("El mes que corresponde a '5' es: 'Mayo'");
				break;		
		case 6: printf("El mes que corresponde a '6' es: 'Junio'");
				break;		
		case 7: printf("El mes que corresponde a '7' es: 'Julio'");
				break;
		case 8: printf("El mes que corresponde a '8' es: 'Agosto'");
				break;	
		case 9: printf("El mes que corresponde a '9' es: 'Septiembre'");
				break;			
		case 10: printf("El mes que corresponde a '10' es: 'Octubre'");
				break;
		case 11: printf("El mes que corresponde a '11' es: 'Noviembre'");
				break;
		case 12: printf("El mes que corresponde a '12' es: 'Diciembre'");
				break;								
		default: printf("**** El número debe estar entre '1' y '12' *********");
				break;
	}
}
