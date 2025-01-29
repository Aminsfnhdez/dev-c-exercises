#include<iostream>
#include<conio.h>
using namespace std;
int matriz[3][3];
int i,j,x,pos,aux;
void ordenar();
int vector[3];
main()
{
	cout<<"llenando matriz "<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		
		{
			cout<<"digite el elemento de en la posicion "<<i<<" en la columna "<<j<< " de la matriz "<<endl;
			cin>>matriz[i][j];
		}
	}
	
	cout<<"mostrar matriz"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<matriz[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<"odenamiento"<<endl;
	for(i=0; i<3; i++)//filas
	{
		for(j=0;j<3;j++)//columnas
		{
			pos=j;
			aux=matriz[j][i];
			while((pos>0)&&(matriz[pos-1][i]>aux)){
				matriz[pos][i]=matriz[pos-1][i];
				pos--;
			}
			matriz[pos][i]=aux;
		}
	
	}
	
	cout<<"mostrar matriz"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<matriz[i][j]<<"\t";
		}
		cout<<endl;
	}
}
