#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int vector[8];
void llenar()
{
	int i;
	i=0;
	do
	{
		cout<<"\t\tLlenando el Vector"<<endl;
		cout<<"Digite el elemento "<<i+1<<" de 8 del vector"<<endl;		cin>>vector[i];
		i++;
		Sleep(250);
		system("cls");
	}while(i<8);
}
ordenar()
{
	int aux;
	for(int i=0; i<8; i++)
	{
		for(int j=0; j<8; j++)
		{
			if(vector[j] > vector[j+1])
			{
				aux = vector[j];
				vector[j]=vector[j+1];
				vector[j+1] = aux;
			}
		}
	}
}
int main()
{
	system("color 0A");
	llenar();
	cout<<endl<<"\t\tMostrando el Vector Original"<<endl<<endl;
	for(int i=0; i<8; i++)
	{
		cout<<vector[i]<<"\t ";
		Sleep(250);
	}
	cout<<endl;
	system("pause");
	ordenar();
	cout<<endl<<"\t\tMostrando el Vector Ordenado Ascendente"<<endl;
	for(int j=1; j<=8; j++)
	{
		cout<<vector[j]<<" \t";
	}
	cout<<endl;
	system("pause");
	cout<<endl<<"\t\tMostrando el Vector Ordenado Descendente"<<endl;
	for(int j=8; j>=1; j--)
	{
		cout<<vector[j]<<" \t";
	}
	getch();
}
