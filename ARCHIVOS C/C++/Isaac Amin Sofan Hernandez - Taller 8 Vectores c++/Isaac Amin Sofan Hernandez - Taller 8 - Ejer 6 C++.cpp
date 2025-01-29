// Taller 8 Ejercicio 6 Ciclos C++
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
void busqueda(float* vect)
{
	float num;
	int par=0, impar=0, pos=0, neg=0, cero=0, x;
	for(int j=1; j<=10; j++)
	{
		x=vect[j];
		if(((x%2)==0) && (vect[j]!=0))
		{
			par++;
		}
		else
		{
			impar++;
		}
		
		if((vect[j]>0) && (vect[j]!=0))
		{
			pos++;
		}
		else
		{
			if((vect[j]<0) && (vect[j]!=0))
			{
				neg++;
			}
			
		}
		
		if(vect[j]==0)
		{
			cero++;
		}
	}
	cout<<"la cantidad de números pares ingresados en el vector es: "<<par<<endl;
	cout<<"la cantidad de números impares ingresados en el vector es: "<<impar<<endl;
	cout<<"la cantidad de números positivos ingresados en el vector es: "<<pos<<endl;
	cout<<"la cantidad de números negativos ingresados en el vector es: "<<neg<<endl;
	cout<<"la cantidad de veces que se ingreso el número '0' (cero) en el vector es: "<<cero<<endl;
}
int main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int tamano;
	float num, vector[10]={0};
	for(int i=1; i<=10; i++)
	{
		cout<<"Digite el elmento "<<i<<" de 10 del vector"<<endl;
		cin>>num;
		vector[i]=num;
	}
	busqueda(vector);
	getch();
}
