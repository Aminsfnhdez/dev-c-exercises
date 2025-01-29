#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL,"");
	int matriz[3][3], max=0, min=1000, fmax, cmax, fmin, cmin;
	
	cout<<"PROCEDEREMOS A LLENAR LA MATRIZ"<<endl;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<"DIGITE EL ELEMENTO DE LA FILA "<<i+1<<" Y COLUMNA "<<j+1<<": ";  cin>>matriz[i][j];
		}
	}
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			if(matriz[i][j]>max)
			{
				max = matriz[i][j]; fmax=i; cmax=j;
			}
			
			if(matriz[i][j]<min)
			{
			min = matriz[i][j]; fmin=i; cmin=j;
			}
		}	
	}
	system("cls");
	cout<<"PROCEDEREMOS A MOSTRAR LA MATRIZ"<<endl;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<matriz[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<"EL ELEMENTO CON EL VALOR MÁXIMO ES: "<<max<<" Y SE ENCUENTRA EN LA FILA "<<fmax+1<<", COLUMNA "<<cmax+1<<endl;
	cout<<"EL ELEMENTO CON EL VALOR MINIMO ES: "<<min<<" Y SE ENCUENTRA EN LA FILA "<<fmin+1<<", COLUMNA "<<cmin+1<<endl;
}


