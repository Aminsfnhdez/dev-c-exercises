//Taller 9 Ejercicio 2 Matrices C++
//Isaac Amin Sofan Hernandez
#include<iostream>
#include<conio.h>
#include<locale.h>
#include <wchar.h>
//#include <string.h>
//#include <math.h>
#include <windows.h>
using namespace std;
int matriz[100][100]={0}, n_filas, m_columnas, i, j, valor;
void llenar()
{
	cout<<"\t\t\t\t === INGRESANDO MATRIZ ==="<<endl;
	for(i=0; i<n_filas; i++)
	{
		for(j=0; j<m_columnas; j++)
		{
			cout<<"Digite el valor de la fila "<<i<<" columna "<<j<<endl;
			cin>>matriz[i][j];
		}
	}
	cout<<"\n\t\t\t\t === MATRIZ INGRESANDA ===\n"<<endl;
	getch();
}
void original()
{
	cout<<"\n\t\t\t\t === MATRIZ ORIGINAL ===\n"<<endl;
	for(i=0; i<n_filas; i++)
	{
		for(j=0; j<m_columnas; j++)
		{
			cout<<matriz[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"\n\t\t\t\t === MATRIZ ORIGINAL MOSTRANDA ===\n"<<endl;
	getch();
}
void multiplicar()
{
	cout<<"\n\t\t\t\t === MULTIPLICANDO MATRIZ ===\n"<<endl;
	for(i=0; i<n_filas; i++)
	{
		for(j=0; j<m_columnas; j++)
		{
			matriz[i][j] = matriz[i][j] * valor;
		}
	}
	Sleep(2000);
	cout<<"\n\t\t\t\t === MATRIZ MULTIPLICADA ===\n"<<endl;
	getch();
}
void mostrar()
{
	cout<<"\n\t\t\t\t === MOSTRANDO MATRIZ MULTIPLICADA ===\n"<<endl;
	for(i=0; i<n_filas; i++)
	{
		for(j=0; j<m_columnas; j++)
		{
			cout<<matriz[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"\n\t\t\t\t === MATRIZ MULTIPLICADA MOSTRANDA ===\n"<<endl;
	getch();
}
main()
{
	setlocale(LC_ALL,"");
	cout<<"Digite la cantidad de N filas que tendrá la matriz"<<endl;
	cin>>n_filas;
	cout<<"Digite la cantidad de M columnas que tendrá la matriz"<<endl;
	cin>>m_columnas;
	cout<<"Digite el valor por el que se multiplicará la matriz"<<endl;
	cin>>valor;
	llenar();
	original();
	multiplicar();
	mostrar();
	getch();
}

