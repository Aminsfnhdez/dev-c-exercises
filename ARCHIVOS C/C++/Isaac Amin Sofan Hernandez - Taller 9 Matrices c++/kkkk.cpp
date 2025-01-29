#include<conio.h>
#include<iostream>
using namespace std;
int valor;
int k,y;
int bandera=0;
int matriz[3][2],i,j;
main()
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"digite los elemento "<<i<<" en la columna "<<j<<endl;
			cin>>matriz[i][j];
			
		}
	
	}
	cout<<"mostrar matriz"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<matriz[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"digite el valor a ingresar "<<endl;
	cin>>valor;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			if(matriz[j][i]==valor)
			{
				bandera=1;
                k=j;
                y=i;
				break;
			}
		}
		
	}
	if(bandera==1)
	{
		cout<<"el valor buscado esta en la fila "<<k<<" en la columna "<<y<<endl;
	}
	else
	{
		cout<<"el elemento buscado no se encuentra en la matriz"<<endl;
	}
	
	
	
}


