//Taller 4 Ejercicio # 18
// Autor Isaac Am�n Sof�n Hern�ndez

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	int inversion, tasaInteres, saldoTotal, gananciaIntereses;
	printf("D�gite el valor de la inversion (debe ser menor de 900.000, para poder ser aceptada): ");
	scanf("%i", &inversion);
	if(inversion<=900000)
	{
		printf("\n D�gite el la tasa de interes: ");
		scanf("%i", &tasaInteres);
		gananciaIntereses = inversion * tasaInteres / 100;
		if(gananciaIntereses > 100000)
		{
			saldoTotal = gananciaIntereses + inversion;
			printf("\n La inversion base %i mas ganancia de intereses %i , da un saldo total de: %i", inversion, gananciaIntereses, saldoTotal);
		}
		else
		{
			printf("\n Los interes no generaron suficientes ganancias por lo que el saldo total es: %i", inversion);
		}
	}
	else
	{
		printf("\n El valor de la inversi�n excede el l�mite permitido");
	}	
	
}
