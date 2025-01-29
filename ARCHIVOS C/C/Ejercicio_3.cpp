//Ejercicio # 3 
// Autor Isaac Amín Sofán Hernández
# include <stdio.h>
# include <conio.h>

int main()
{	
float pedro, ana, alberto, madre;
	
	printf("Digite la edad de pedro: ");
	scanf ("%f", &pedro);
	
	alberto = (pedro*2/3);
	
	ana = (pedro*4/3);
	madre = pedro+ana+alberto;
	
	printf("\nLa edad de pedro es: %.2f", pedro);
	printf("\nLa edad de alberto es: %.2f", alberto);
	printf("\nLa edad de ana es: %.2f", ana);
	printf("\nLa edad de  la madre es: %.2f", madre);
	
	getch();
	return 0;
}
