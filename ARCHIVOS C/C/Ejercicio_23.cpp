//Ejercicio # 23
// Autor Isaac Amín Sofán Hernández

#include <stdio.h>
#include <conio.h>
#include <wchar.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	
	float tempgf, tempgc;

	printf ("Digite la temperatura en grados fahrenhiet: ");
	scanf ("%f", &tempgf);
	tempgc = 0.55 * (tempgf - 32);
	printf("\n la temparatura en grados fahrenhiet es: %f", tempgf);
	printf("\n La temparatura en grados centigrados es: %f", tempgc);
	
	getch();	
}
