// Taller 8 Ejercicio 5 Ciclos C++
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
void inverso(int* vect, int tam)
{
	int j;
	cout<<"Los elementos del vector en orden inverso es: "<<endl;
	for(j=0; j<tam; j++)
	{
		cout<<vect[tam-j]<<" ";	
	}
	cout<<endl;
	system("pause");
}
void pos_pares(int* vect, int tam)
{
	int j, suma=0;
	cout<<"Los elementos en las posiciones pares del vector son: "<<endl;
	for(j=1; j<=tam; j++)
	{
		if(j%2==0)
		{
			suma=suma+vect[j];
			cout<<vect[j]<<" ";
		}
	}
	cout<<"\nLa suma de los elementos en las posicines pares del vector es: "<<suma<<endl;
	cout<<endl;
	system("pause");
}
void busca(int* vect, int tam)
{
	int j, cont=0;
	for(j=1; j<=tam; j++)
	{
		if(vect[j]==8)
		{
			cont++;
		}
	}
	cout<<"La cantidad de veces que encontro en número '8' en el vector fue: "<<cont<<endl;
}
int main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int num, tamano;
	cout<<"Digite la dimension del vector"<<endl;
	cin>>tamano;
	int vector[tamano]={0};
	for(int i=1; i<=tamano; i++)
	{
		cout<<"Digite el elemento "<<i<<" de "<<tamano<<" del vector"<<endl;
		cin>>num;
		vector[i]=num;
	}
	
	busca(vector, tamano);
	pos_pares(vector, tamano);
	inverso(vector, tamano);
	getch();
}
