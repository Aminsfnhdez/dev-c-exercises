//Ejercicio # 9 
// Autor Isaac Am�n Sof�n Hern�ndez

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	
	float capital, porcentajeGanancia, capitalMes, ganancia;
	
	porcentajeGanancia = 2;
	printf("D�gite el capital a invertir: ");
	scanf("%f", &capital);
	ganancia = capital * (porcentajeGanancia/100);
	capitalMes = capital + ganancia;
	printf("\n El capital invertido es: %.2f", capital);
	printf("\n La ganancia por inversi�n es: %.2f", ganancia);
	printf("\n El capital d�spues de un mes es: %.2f", capitalMes);	
	
	
	getch();
}
