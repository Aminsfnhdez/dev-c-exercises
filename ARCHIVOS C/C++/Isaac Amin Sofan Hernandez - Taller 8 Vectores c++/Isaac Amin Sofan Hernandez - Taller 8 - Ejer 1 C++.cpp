// Taller 8 Ejercicio 1 Ciclos C++
// Autor Isaac Am�n Sof�n Hern�ndez
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
void vector (int n)
{
	int vect[n];
	for(int i=0; i<n; i++)
	{
		cout<<"Digite el n�mero "<<i+1<<" del vector."<<endl;
		cin>>vect[i];
	}
	system("CLS");
	cout<<"Los n�meros del vector son: ";
	for(int j=0; j<n; j++)
	{
		cout<<vect[j]<<" ";
	}
}
int main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int num=5;
	vector(num);
	getch();
}
