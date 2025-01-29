#include<iostream>
#include<conio.h>

using namespace std;
int vector[15];
int buscar()
{
	int x, band=0, posicion, inf, sup, mit, i;
	inf=0;
	sup=15;
	cout<<"Digite el numero que desea buscar "<<endl;
	cin>>x;
	
	while(inf<=sup)
	{
		mit=(inf+sup)/2;
		if(vector[mit]==x)
		{
			band =1;
			posicion =i+1;
			break;
		}
		if(vector[mit]>x)
		{
			sup=mit;
			mit=(inf+sup)/2;
		}
		if(vector[mit]<x)
		{
			inf=mit;
			mit=(inf+sup)/2;
		}
	}
	return band;
	
}
void llenar()
{
	int num, i, mayor=0;
	i=0;
	do
	{
		cout<<"Digite el elemento "<<i+1<<" de 15 del vector"<<endl;
		cin>>num;
		
		if(num>mayor)
		{
			mayor=num;
			vector[i]=num;
			
		}
		else
		{
			cout<<"El numero debe ser mayor, por favor ingrese otro numero"<<endl;
			i=i-1;
		}
		
		i++;
	}while(i<15);
}
int main()
{
	int h;
	llenar();
	h=buscar();
	if(h==1)
	{
		cout<<"Numero encontrado"<<endl;
	}
	else
	{
		cout<<"Numero NO encontrado"<<endl;
	}
	getch();
}
