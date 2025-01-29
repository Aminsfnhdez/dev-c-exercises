// Taller 8 Ejercicio 4 Ciclos C++
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
void formula(float* vect)
{
	int j;
	float mayor=0, posicion, suma=0;
	float promedio;
	for(j=1; j<=15;j++)
	{
		suma=suma+vect[j];
		if(vect[j]>mayor)
		{
			mayor=vect[j];
			posicion=j;
		}
	}
	promedio = suma/15;
	cout<<"El mayor valor númerico del vector es: "<<mayor<<", y se encuentra en la posicion "<<posicion<<endl;
	cout<<"El valor promedio ingresado es: "<<promedio<<endl;
}
int main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	float num, vector[15];
	char op='s';
	int j, h;
	do
	{
		for(int i=1; i<=15;i++)
		{
			cout<<"Digite el número "<<i<<" de 15 del vector."<<endl;
			cin>>num;
			h=0;
			for(j=1; j<=15; j++)
			{
				if(vector[j]==num)
				{
					cout<<"Error número repetido, digite otro número"<<endl;
					h=1;
					break;
				}
			}
			if(h!=1)
			{
				vector[i]=num;
				h=0;
			
			}
			else
			{
				i= i-1;
			}
			
		}
		formula(vector);
		system("pause");
		system("  CLS");
		cout<<"¿Desea continuar? \nSi, Teclee 'S' \nNo, Teclee 'N'"<<endl;
		cin>>op;
	}while(op=='s');
	
	getch();
}
