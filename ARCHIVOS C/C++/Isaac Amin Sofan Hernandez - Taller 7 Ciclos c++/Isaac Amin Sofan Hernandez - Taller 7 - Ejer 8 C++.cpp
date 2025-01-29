// Taller 7 Ejercicio 8 Ciclos C++
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
void funcion (float);
int main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	float x;
	char op='s';
	while(op=='s')
	{
		cout<<"Para Y=3x, por favor ingrese el valor de 'x'"<<endl;
		cin>>x;
		funcion(x);
		cout<<"\n¿desea continuar? \nSi, Teclee 's' \nNo, Teclee 'n'"<<endl;
		cin>>op;
		system("CLS");
	}
	
	getch();
}
void funcion (float X)
{
	float y;
	y = 3 * X;
	cout<<"El valor de 'y' de la funcion y=3x, con x="<<X<<" es: "<<y<<endl;
}
