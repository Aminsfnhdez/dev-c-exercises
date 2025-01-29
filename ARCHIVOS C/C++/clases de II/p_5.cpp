#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int vector1[5], vector2[5], vector3[10], band=0;

void ordenar()
{
	int aux;
	for(int i=0; i<10; i++)
	{
		for(int j=0; j<10; j++)
		{
			if(vector3[j] > vector3[j+1])
			{
				aux = vector3[j];
				vector3[j]=vector3[j+1];
				vector3[j+1] = aux;
			}
		}
	}
}

void eliminar()
{
	int aux, n;
	for(int i=0; i<10; i++)
	{
		aux=vector3[i];
		if(aux == vector3[i+1])
		{
			n = i;
			band = 1;
			while(i<10)
			{
				vector3[i]=vector3[i+1];
				i++;
			}
			break;
		}
	}
}

int main()
{
	setlocale(LC_ALL,"");
	
	cout<<"PROCEDEREMOS A LLENAR EL VECTOR NÚMERO 1"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<"DIGITE EL ELEMENTO NÚMERO "<<i+1<<" DE 5: ";  cin>>vector1[i];
	}
	
	cout<<endl<<"PROCEDEREMOS A LLENAR EL VECTOR NÚMERO 2"<<endl;
	for(int j=0; j<5; j++)
	{
		cout<<"DIGITE EL ELEMENTO NÚMERO "<<j+1<<" DE 5: ";  cin>>vector2[j];
	}
	
	cout<<endl<<"PROCEDEREMOS A CREAR EL VECTOR NÚMERO 3"<<endl;
	for(int i=0; i<10; i++)
	{
		if(i<5)
		{
			vector3[i] = vector1[i];
		}
		if((i > 4) && (i<10))
		{
			vector3[i] = vector2[i-5];
		}
	}
	cout<<"MOSTRANDO EL VECTOR 3"<<endl;
	for(int i=0; i<10; i++)
	{
		cout<<vector3[i]<<"\t";
	}
	cout<<endl;
	ordenar();
	eliminar();
	
	cout<<"MOSTRANDO EL VECTOR 1"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<vector1[i]<<"\t";
	}
	cout<<endl;
	
	cout<<"MOSTRANDO EL VECTOR 2"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<vector2[i]<<"\t";
	}
	cout<<endl;
	
	if(band == 1)
	{
		cout<<"MOSTRANDO EL VECTOR 3  R"<<endl;
		for(int i=1; i<10; i++)
		{
			cout<<vector3[i]<<"\t";
		}
	}
	else
	{
		cout<<"MOSTRANDO EL VECTOR 3"<<endl;
		for(int i=1; i<=10; i++)
		{
			cout<<vector3[i]<<"\t";
		}
	}
	
	
}
