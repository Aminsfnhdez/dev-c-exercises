#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int cant, aux;
	cout<<"BUENOS DIAS."<<endl;
	
	cout<<"DIGITE LA CANTIDAD DE NUMEROS A INGRESAR"<<endl;
	cin>>cant;
	int vector[cant];
	cout<<"INGRESANDO LOS NUMEROS"<<endl;
	for(int i=0; i<cant; i++)
	{
		cout<<"DIGITE EL NUMERO "<<i+1<<" de "<<cant<<endl;
		cin>>vector[i];
	}
	
	for(int i=0; i<cant; i++)
	{
		for(int j=0; j<cant; j++)
		{
			if(vector[j] > vector[j+1])
			{
				aux = vector[j];
				vector[j]=vector[j+1];
				vector[j+1] = aux;
			}
		}
	}
	
	cout<<"MOSTRANDO"<<endl;
	for(int i=0; i<cant; i++)
	{
		cout<<vector[i]<<"\t";
	}
}
