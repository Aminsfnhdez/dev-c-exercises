// Taller 8 Ejercicio 8 Ciclos C++
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
float estudiantes[20]={0};
void nota_alta()
{
	float mayor=0;
	for(int i=0; i<20; i++)
	{
		if(estudiantes[i]>mayor)
		{
			mayor=estudiantes[i];
		}
	}
	cout<<"la nota mas alta es: "<<mayor<<endl;
}
void nota_baja()
{
	float menor=10;
	int x;
	for(int i=0; i<20; i++)
	{
		if(estudiantes[i]<menor)
		{
			menor=estudiantes[i];
			x=i+1; 
		}
	}
	cout<<"El alumno # "<<x<<" tiene la nota mas baja es: "<<menor<<endl;
}
void perdieron()
{
	int cont=0;
	for(int i=0; i<20; i++)
	{
		if(estudiantes[i]<3)
		{
			cont++;
		}
	}
	cout<<"la contidad de estudiantes que perdieron es: "<<cont<<endl;
}
void promedio()
{
	float prom, suma;
	for(int i=0; i<20; i++)
	{
		suma=suma+estudiantes[i];
	}
	prom=suma/5;
	cout<<"El promedio del grupo es: "<<prom<<endl;
}
int main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	float num;
	for(int i=0; i<5; i++)
	{
		cout<<"Digite la nota del estudiante # "<<i+1<<endl;
		cin>>num;
		estudiantes[i]=num;
	}
	nota_alta();
	nota_baja();
	perdieron();
	promedio();
	getch();
}
