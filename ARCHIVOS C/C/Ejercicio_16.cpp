//Ejercicio # 16 
// Autor Isaac Am�n Sof�n Hern�ndez

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	
	float porcGinecologia, porcTraumatologia, porcPediatria, presupuestoAnual;
	float presupuestoGinecologia, presupuestoTraumatologia, presuestoPediatria;
	
	porcGinecologia = 40;
	porcTraumatologia = 30;
	porcPediatria = 30;
	
	printf("D�gite el valor del presupuesto total anual: ");
	scanf("%f", &presupuestoAnual);
	presupuestoGinecologia = presupuestoAnual * (porcGinecologia / 100);
	presupuestoTraumatologia = presupuestoAnual * (porcTraumatologia / 100);
	presuestoPediatria = presupuestoAnual * (porcPediatria / 100);
	printf("\n El presupuesto para Ginecolog�a es: %.2f", presupuestoGinecologia);
	printf("\n El presupuesto para Traumatolog�a es: %.2f", presupuestoTraumatologia);
	printf("\n El presupuesto para Pediatr�a es: %.2f",	presuestoPediatria);

	
	getch();
}
