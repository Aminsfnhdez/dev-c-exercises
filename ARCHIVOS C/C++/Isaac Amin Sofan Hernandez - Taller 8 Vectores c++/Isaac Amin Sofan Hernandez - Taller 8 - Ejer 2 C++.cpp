// Taller 8 Ejercicio 2 Ciclos C++
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
void pares (int num)
{
	int x;
	int vect_par[num]={0};
	for( int i=1; i<=num; i++)
	{
		x=i%2;
		if(x==0)
		{
			vect_par[i]=i;
		}
	}
	cout<<"los números pares desde 1 hasta "<<num<<" son: "<<endl;
	for(int j=1; j<=num; j++)
	{
		if(vect_par[j]!=0)
		{
			cout<<vect_par[j]<<" ";
		}
	}
	
}
int main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int n;
	char op='s';
	do
	{
		cout<<"Digite hasta que número se generarán los pares"<<endl;
		cin>>n;
		pares(n);
		//getch();
		cout<<endl;
		system("pause");
		system("CLS");
		cout<<"\n¿Desea continuar? \nSi, Teclee 'S' \nNo, Teclee 'N'"<<endl;
		cin>>op;
		system("CLS"); 
	}while(op=='s');
	
	getch();
}
