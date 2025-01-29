#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int vector[9];
void llenar()
{
	int i;
	i=0;
	do
	{
		cout<<"\t\t\tLenando el Vector"<<endl;
		cout<<"Digite el elemento "<<i+1<<" de 9 del vector"<<endl;		cin>>vector[i];
		i++;
		Sleep(250);
		system("cls");
	}while(i<9);
}
ordenar()
{
	int i, j, aux, min;
	for(i=0; i<9; i++)
	{
		min = i;
		for(j=i+1; j<9; j++)
		{
			if(vector[j] < vector[min])
			{
				min = j;
			}
		}
		aux = vector[i];
		vector[i] = vector[min];
		vector[min] = aux;
	}
}
int main()
{
	system("color 0A");
	llenar();
	cout<<endl<<"\tMostrando el Vector Original"<<endl;
	for(int i; i<9; i++)
	{
		cout<<vector[i]<<"\t ";
	}
	ordenar();
	cout<<endl;
	system("pause");
	cout<<endl<<"\tMostrando el Vector Ordenado Ascendente"<<endl;
	for(int j=0; j<9; j++)
	{
		cout<<vector[j]<<"\t ";
	}
	cout<<endl;
	system("pause");
	cout<<endl<<"\tMostrando el Vector Ordenado Descendente"<<endl;
	for(int j=8; j>=0; j--)
	{
		cout<<vector[j]<<"\t ";
	}
	getch();
}
