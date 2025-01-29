#include<iostream>
#include<conio.h>
using namespace std;
//int vector[5];
int n;
void eliminar(int*);
void llenar(int* vector)
{
	int i;
	i=0;
	do
	{
		cout<<"Digite el elemento "<<i+1<<" de "<<n<<" del vector"<<endl;
		cin>>vector[i];
		i++;
	}while(i<n);
	cout<<endl;
	cout<<"\nOriginal"<<endl;
	for(i=0; i<n; i++)
	{
		cout<<vector[i]<<" ";
	}
	eliminar(vector);
	
}
void eliminar(int* vector)
{
	int pos, i, eliminado;

	cout<<"Digite la poscion a eliminar del vector"<<endl;
	cin>>pos;
	do
	{
		if(pos>n)
		{
			cout<<"La posicion ingresada se encuentra fuera del vector !!"<<endl;
			for(i=0; i<n; i++)
			{
				cout<<"El elemento en la posicion "<<i<<" del vector es: "<<vector[i]<<endl;
			}
		} 
		cout<<"Digite la poscion a eliminar del vector"<<endl;
		cin>>pos;
	}while(pos>n);
	
	if(pos<=n)
	{
		eliminado=vector[pos];
		for(i=0; i<n; i++)
		{
			if(i==pos)
			{
				while(i<n)
				{
					vector[i]=vector[i+1];
					i++;
				}
				break;
			}
		}
		n=n-1;
		for(i=0; i<n; i++)
		{
			cout<<"El elemento en la posicion "<<i<<" del vector es: "<<vector[i]<<endl;
		}
		cout<<endl;
		cout<<"El elemento eliminado es: "<<eliminado<<endl;
	}
}
int main()
{
	cout<<"digite la dimension del vector"<<endl;
	cin>>n;
	int vector[n]={0};
	llenar(vector);
	
	cout<<"\nOrdenado Ascendente"<<endl;
	for(int j=0; j<n+1; j++)
	{
		cout<<vector[j]<<" ";
	}
	cout<<"\nOrdenado Descendente"<<endl;
	for(int j=n; j>=0; j--)
	{
		cout<<vector[j]<<" ";
	}
	getch();
}
