// Taller 7 Ejercicio 7 Ciclos C++
// Autor Isaac Amín Sofán Hernández
#include <iostream>
#include <stdio.h> //librerias para ejecucion
#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias para ejecucion
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
#include <string.h>//libreria para 'string'
#include <math.h>//libreria para funciones matematicas
#include <windows.h>//libreria para usar 'Sleep'

using namespace std;
void funcion (int);
int main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int num;
	cout<<"Por favor ingrese la cantidad de números a evaluar."<<endl;
	cin>>num;
	funcion(num);
	getch();
}
void funcion (int cont)
{
	float x, new_x;
	for(int i=0;i<cont;i++)
	{
		cout<<"\nDigite el número "<<i+1<<endl;
		cin>>x;
		if(x<0)
		{
			new_x = pow(x,3);
			cout<<"Para x="<<x<<" su valor al cubo es: "<<new_x<<endl;
		}
		else
		{
			if((x>=0) && (x<=100))
			{
				new_x = pow(x,2);
				cout<<"Para x="<<x<<" su valor al cuadrado es: "<<new_x<<endl;
			}
			else
			{
				if((x>100) && (x<=1000))
				{
				new_x = sqrt(x);
				cout<<"Para x="<<x<<" su raíz cuadrada es: "<<new_x<<endl;
				}
				else
				{
					cout<<"Número ingresado fuera del rango permitido"<<endl;
				}
			}
		}
	}
}
