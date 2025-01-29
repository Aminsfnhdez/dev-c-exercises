// Taller 8 Ejercicio 7 Ciclos C++
// Autor Isaac Amín Sofán Hernández
#include <iostream>
#include <stdio.h> //librerias para ejecucion
//#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias para ejecucion
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
//#include <string.h>//libreria para 'string'
//#include <math.h>//libreria para funciones matematicas
//#include <windows.h>//libreria para usar 'Sleep'
using namespace std;//para no tener problemas con 'cout' y 'cin'
float vector[15]={0};
void llenar_vector()
{
	float num;
	for(int i=0; i<15; i++)
	{
		cout<<"Digite el elemento "<<i+1<<" de 15 del vector"<<endl;
		cin>>num;
		vector[i]=num;
	}
	
}
void suma_vector()
{
	float x, suma=0;
	x=vector[0];
	for(int i=0; i<15; i++)
	{
		if((vector[i]>x) && (vector[i]<25))
		{
			cout<<"El elmento "<<i+1<<" del vector con un valor de "<<vector[i]<<" cumple las condiciones"<<endl;
			suma=suma+vector[i];
		}
	}
	cout<<"La suma de los elementos del vector que cumplen las condiciones es: "<<suma<<endl;
}
int main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int op=0;

	while(op<3)
	{
		cout<<"Para ingresar el vector, Teclee '1'"<<endl;
		cout<<"Para realizar la fucion requerida, Teclee '2' "<<endl;
		cout<<"Para salir, Teclee '3'"<<endl;
		cin>>op;
		switch(op)
		{
			case 1: llenar_vector();
					break;
			case 2: suma_vector();
					break;	
			case 3: 
					break;		
			default:cout<<"Error opción Icorrecta, digite un número entre 1 y 3"<<endl;
			op=0;			
		}
	}
	
	getch();
}
