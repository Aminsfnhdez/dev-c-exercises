//Taller 9 Ejercicio 1 Matrices C++
//Isaac Amin Sofan Hernandez
#include<iostream>
#include<conio.h>
#include<locale.h>
#include <wchar.h>
//#include <string.h>
//#include <math.h>
//#include <windows.h>
using namespace std;
int matriz[100][100]={0}, filas, columnas, i, j;
void por_filas()
{
	for(i=0; i<filas; i++)
	{
		for(j=0; j<columnas; j++)
		{
			cout<<"Ingrese el valor para la fila "<<i<<" columna "<<j<<endl;
			cin>>matriz[i][j];
		}
	}
	cout<<"\t\t ==== MOSTRANDO MATRIZ ===="<<endl;
	for(i=0; i<filas; i++)
	{
		cout<<endl;
		for(j=0; j<columnas; j++)
		{
			
			cout<<matriz[i][j]<<"\t";
		}
	}
	cout<<"\n\t\t ==== MATRIZ MOSTRANDA ===="<<endl;
}
void por_columnas()
{
	for(i=0; i<columnas; i++)
	{
		for(j=0; j<filas; j++)
		{
			cout<<"Ingrese el valor para la columna "<<i<<" fila "<<j<<endl;
			cin>>matriz[j][i];
		}
	}
	cout<<"\t\t ==== MOSTRANDO MATRIZ ===="<<endl;
	for(i=0; i<filas; i++)
	{
		cout<<endl;
		for(j=0; j<columnas; j++)
		{
			
			cout<<matriz[i][j]<<"\t";
		}
	}
	cout<<"\n\t\t ==== MATRIZ MOSTRANDA ===="<<endl;
}
void menu()
{
	int op=0;
	
	do
	{
		cout<<"Para llenar la matriz por filas, Teclee '1'"<<endl;
		cout<<"Para llenar la matriz por columnas, Teclee '2'"<<endl;
		cout<<"Para salir, Teclee '3'"<<endl;
		cin>>op;
		switch(op)
		{
			case 1: por_filas();
					break;
			case 2: por_columnas();
					break;		
		}
	}while(op<3);
}
main()
{
	setlocale(LC_ALL,"");
	
	cout<<"Digite la cantidad de filas que tendrá la matriz"<<endl;
	cin>>filas;
	cout<<"Digite la cantidad de columnas que tendrá la matriz"<<endl;
	cin>>columnas;
	menu();
}
