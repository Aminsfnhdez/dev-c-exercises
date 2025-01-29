// Taller 8 Ejercicio 3 Ciclos C++
// Autor Isaac Amín Sofán Hernández
#include <iostream>
#include <stdio.h> //librerias para ejecucion
#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias para ejecucion
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
//#include <string.h>//libreria para 'string'
//#include <math.h>//libreria para funciones matematicas
//#include <windows.h>//libreria para usar 'Sleep'
using namespace std;
void subp(int* vect )
{
	int suma=0;
	float prom;
	for(int j=1; j<=30; j++)
	{
		suma=suma+vect[j];
	}
	prom=suma/10;
	cout<<"La suma del vector es: "<<suma<<endl;
	cout<<"El promedio de los elementos del vector es: "<<prom<<endl;
}
int main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int vect_mult[30]={0}; 
	int x;
	for(int i=1; i<=30; i++)
	{
		x=i%3;
		if(x==0)
		{
			vect_mult[i]=i;
		}
	}
	subp(vect_mult);
	
	getch();
}
