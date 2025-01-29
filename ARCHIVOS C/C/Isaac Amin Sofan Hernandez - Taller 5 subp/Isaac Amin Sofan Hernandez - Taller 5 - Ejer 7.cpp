// Taller 5 Ejercicio 7 subprogramas
// Autor Isaac Am�n Sof�n Hern�ndez
// se desea seleccionar un atleta para un marat�n internacional. Para seleccionarlo este debe haber terminado la marat�n anterior, en un tiempo determinado:
//los tiempos son 150 minutos para hombre menores de 40 a�os; 175 minutos para hombres con una edad mayor � igual a 40 a�os y 180 minutos para mujeres.
//los datos a introducir son: sexo (M � F), edad y tiempo efectuado en su maraton anterior.
#include <stdio.h> //librerias
#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
void atletaOptimo (char, float, float); //declaro el subprograma
main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	char sexo;//variables a usar en el programa principal
	float edad, tiempo; //variables a usar en el programa principal
	printf("Seleccione el sexo del atleta:\n");//pido el sexo del atleta
	printf("Masculino, teclee M ");//opcion para hombre
	printf("\nFemenino, teclee F \n");//opcion para mujer
	scanf("%c", &sexo);//almaceno el sexo del atleta
	printf("\nD�gite la edad del atleta: ");//pido la edad del atleta
	scanf("%f", &edad);//almaceno la edad del atleta
	printf("\nD�gite el tiempo del maraton anterior: ");//pido el tiempo del maraton anterior del atleta
	scanf("%f", &tiempo);//almaceno el tiempo del maraton anterior
	system("CLS");//limpiar pantalla
	atletaOptimo(sexo, edad, tiempo);//invoco subprograma que establece si un atleta cumple conlos requisitos de selecci�n
	getch();
}
void atletaOptimo(char sexoAtleta, float edadAtleta, float tiempoAtleta)//subprograma que establece si un atleta cumple conlos requisitos de selecci�n
{
	switch(sexoAtleta)
	{
		case 'M': case 'm': if(edadAtleta<40) //si es hombre y menor de 40 a�os
							{
								if(tiempoAtleta<=150)//si el tiempo anterior es menos de 150 min
								{
									printf("\nCumple con los requisitos de selecci�n");//ok
								}
								else
								{
									printf("\nNo cumple con los requisitos de selecci�n");//no ok
								}
							} 
							else
							{
								if(edadAtleta>=40)//si el atleta es mayor de 40 a�os
								{
									if(tiempoAtleta<=175)//si el tiempo anterior es menos de 175 min
									{
										printf("\nCumple con los requisitos de selecci�n");//ok
									}
									else
									{
										printf("\nNo cumple con los requisitos de selecci�n");//no ok
									}
								}
							}
			break;
		case 'F': case 'f': if(edadAtleta>=40)//si el atleta es mayor de 40 a�os
							{
								if(tiempoAtleta<=180)//si es mujer y el tiempo anterior es menos de 180 min
								{
									printf("\nCumple con los requisitos de selecci�n");//OK
								}
								else
								{
								printf("\nNo cumple con los requisitos de selecci�n");//NO OK
								}
							}
							else
							{
								printf("\nNo cumple con los requisitos de selecci�n");//NO OK
							}
							
			break;
		default: printf("\n******* Opci�n Incorrecta *******");	//seleccion de sexo incorrecta
	}
}
