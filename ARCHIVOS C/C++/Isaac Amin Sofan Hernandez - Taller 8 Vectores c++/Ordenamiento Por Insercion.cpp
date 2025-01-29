#include<iostream>
#include<conio.h>
#include<windows.h>

using namespace std;
int vector[12];
void llenar()
{
	int i;
	i=0;
	do
	{
		cout<<"\t\tLlenando el Vector"<<endl;
		cout<<"Digite el elemento "<<i+1<<" de 12 del vector"<<endl;		cin>>vector[i];
		i++;
		Sleep(250);
		system("cls");		
	}while(i<12);
}
ordenar()
{
	int i, pos, aux;
	for(i=0; i<12; i++)
	{
		pos = i;
		aux = vector[i];
		while((pos>0) && (vector[pos-1] > aux))
		{
			vector[pos] = vector[pos-1];
			pos--;
		}
		vector[pos] = aux;
	}
}
int main()
{
	system("color 0A");
	llenar();
	cout<<endl<<"\t\tMostrando el Vector Original"<<endl;
	for(int i; i<12; i++)
	{
		cout<<vector[i]<<"\t ";
	}
	ordenar();
	cout<<endl;
	system("pause");
	cout<<endl<<"\t\tMostrando el Vector Ordenado Ascendente"<<endl;
	for(int j=0; j<12; j++)
	{
		cout<<vector[j]<<"\t ";
	}
	cout<<endl;
	system("pause");
	cout<<endl<<"\t\tMostrando el Vector Ordenado Descendente"<<endl;
	for(int j=11; j>=0; j--)
	{
		cout<<vector[j]<<"\t ";
	}
	getch();
}
