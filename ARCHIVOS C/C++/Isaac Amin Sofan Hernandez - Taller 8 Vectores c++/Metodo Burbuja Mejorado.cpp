#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int vector[10];
void llenar()
{
	int i;
	i=0;
	do
	{
		cout<<"\t\tLlenando el Vector"<<endl;
		cout<<"Digite el elemento "<<i+1<<" de 10 del vector"<<endl;		cin>>vector[i];
		i++;
		Sleep(250);
		system("cls");
	}while(i<10);
}
ordenar()
{
	int i, j, aux;
	bool band;
	for(i=0; i<10; i++)
	{
		band = false;
		for(j=10-1; j>=0; j--)
		{
			if(vector[j-1] = vector[j])
			{
				aux = vector[j-1];
				vector[j-1] = vector[j];
				vector[j] = aux;
				band = true; 
			}
		}
		if(band == false)
		{
			break;
		}
	}	
}
int main()
{
	system("color 0A");
	llenar();
	cout<<endl<<"\t\tMostrando el Vector Original"<<endl<<endl;
	for(int i; i<10; i++)
	{
		cout<<vector[i]<<"\t ";
	}
	ordenar();
	cout<<endl;
	system("pause");
	cout<<endl<<"\t\tMostrando el Vector Ordenado Ascendente"<<endl;
	for(int j=0; j<10; j++)
	{
		cout<<vector[j]<<" \t";
	}
	cout<<endl;
	system("pause");
	cout<<endl<<"\t\tMostrando el Vector Ordenado Descendente"<<endl;
	for(int j=9; j>=0; j--)
	{
		cout<<vector[j]<<"\t ";
	}
	getch();
}
