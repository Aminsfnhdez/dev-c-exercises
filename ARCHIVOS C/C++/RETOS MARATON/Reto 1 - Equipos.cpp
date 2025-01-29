//Isaac Amin Sofan Hernandez
#include<iostream>
#include<conio.h>
#include<locale.h>
#include <wchar.h>
//#include <string.h>
//#include <math.h>
#include <windows.h>
using namespace std;
int n, cont=0, i, j;
main()
{
	setlocale(LC_ALL,""); 
	cout<<"Digite la contidad de equipos que participarán "<<endl;
	cin>>n;
	int local[n],visitante[n];
	for(i=0;i<n;i++)
	{
		cout<<"Digite el valor del uniforme local para el equipo "<<i+1<<endl;
		cin>>local[i];
		cout<<"Digite el valor del uniforme visitante para el equipo "<<i+1<<endl;
		cin>> visitante[i];
	}
	
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
			if(local[j]==visitante[i])
			{
				cont++;
			}
		}
	}
	cout<<endl<<"La cantidad de juegos en los que el equipo local jugó con el uniforme de visitante es: "<<cont;
	getch();
;}
