//Ejercicio # 13 
// Autor Isaac Am�n Sof�n Hern�ndez
//masa = (presion * volumen) '/' (0.37 * (temperatura + 460))

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	
	float presion, volumen, temperatura, masa;
	
	printf("D�gite el valor de la presi�n: ");
	scanf("%f", &presion);
	printf("\n D�gite el valor del volumen: ");
	scanf("%f", &volumen);
	printf("\n D�gite el valor de la temperatura: ");
	scanf("%f", &temperatura);
	masa = (presion * volumen) / ((temperatura + 460) * 0,37);
	printf("\n La masa del aire es: %.2f", masa);
	
	getch();
}

