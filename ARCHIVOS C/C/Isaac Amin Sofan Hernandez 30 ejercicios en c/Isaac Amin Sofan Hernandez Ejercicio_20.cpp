//Ejercicio # 20
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	
	float exaMate,tarea1Mate, tarea2Mate, tarea3Mate, porcExaMate, porcTareasMate;
	float promTotalTareasMate, promExaMate,notaFinalMate;
	float exaFis,tarea1Fis, tarea2Fis, porcExaFis, porcTareasFis, promTotalTareasFis;
	float promExaFis,notaFinalFis;
	float exaQui,tarea1Qui, tarea2Qui, tarea3Qui, porcExaQui, porcTareasQui, promTotalTareasQui;
	float promExaQui,notaFinalQui;
	
	porcExaMate = 90;
	porcTareasMate = 10;
	printf("Dígite la nota de la tarea uno de matemáticas: ");
	scanf("%f", &tarea1Mate);
	printf("\n Dígite la nota de la tarea dos de matemáticas: ");
	scanf("%f", &tarea2Mate);
	printf("\n Dígite la nota de la tarea tres de matemáticas: ");
	scanf("%f", &tarea3Mate);
	printf("\n Dígite la nota del examen de matemáticas: ");
	scanf("%f", &exaMate);
	promTotalTareasMate = (tarea1Mate + tarea2Mate + tarea3Mate)/3 * (porcTareasMate / 100);
	promExaMate = exaMate * (porcExaMate / 100);
	notaFinalMate = promTotalTareasMate + promExaMate;
	printf("\n La calificacion final de matemáticas e: %.2f",notaFinalMate);
	
	porcExaFis = 80;
	porcTareasFis = 20;
	printf("\n Dígite la nota de la tarea uno de física: ");
	scanf("%f", &tarea1Fis);
	printf("\n Dígite la nota de la tarea dos de física: ");
	scanf("%f", &tarea2Fis);
	printf("\n Dígite la nota de la tarea dos de física: ");
	scanf("%f", &exaFis);
	promTotalTareasFis = (tarea1Fis + tarea2Fis)/2 * (porcTareasFis / 100);
	promExaFis = exaFis * (porcExaFis / 100);
	notaFinalFis = promTotalTareasFis + promExaFis;
	printf("\n La calificación final de física es: %.2f", notaFinalFis);
	
	porcExaQui = 85;
	porcTareasQui = 15;
	printf("\n Dígite la nota de la tarea uno de química: ");
	scanf("%f", &tarea1Qui);
	printf("\n Dígite la nota de la tarea dos de química: ");
	scanf("%f", &tarea2Qui);
	printf("\n Dígite la nota de la tarea tres de química: ");
	scanf("%f", &tarea3Qui);
	printf("\n Dígite la nota del examen de química: ");
	scanf("%f", &exaQui);
	promTotalTareasQui = (tarea1Qui + tarea2Qui + tarea3Qui)/3 * (porcTareasQui / 100);
	promExaQui = exaQui * (porcExaQui / 100);
	notaFinalQui = promTotalTareasQui + promExaQui;
	printf("\n La calificacion final de matemáticas e: %.2f",notaFinalQui);
	
	
	
	
	getch();	
}
