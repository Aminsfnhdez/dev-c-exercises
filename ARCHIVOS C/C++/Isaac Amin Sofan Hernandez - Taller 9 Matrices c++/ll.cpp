#include<iostream>
#include<conio.h>
using namespace std;
int matriz1[3][3];
int matriz2[3][3];
int i,j,aux;
main()
{
	cout<<"llenando matriz1"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		
		{
			cout<<"digite el elemento de en la posicion "<<i<<" en la columna "<<j<< " de la matriz 1"<<endl;
			cin>>matriz1[i][j];
		}
	}
	
	cout<<"mostrar matriz 1"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<matriz1[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<"llenando matriz2"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		
		{
			cout<<"digite el elemento de en la posicion "<<i<<" en la columna "<<j<< " de la matriz 2"<<endl;
			cin>>matriz2[i][j];
		}
	}
	
	cout<<"mostrar matriz 2 "<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<matriz2[i][j]<<"\t";
		}
		cout<<endl;
	}

	cout<<" intercambiando matrices "<<endl<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			aux=matriz1[i][j];
			matriz1[i][j]=matriz2[i][j];
			matriz2[i][j]=aux;
		}
		
	}
	
	cout<<" nuevas matrices"<<endl;
	
	cout<<"mostrar matriz 1"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<matriz1[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<"mostrar matriz 2"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<matriz2[i][j]<<"\t";
		}
		cout<<endl;
	}
}

