#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void llenar(int *vector1, int *vector2, int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"DIGITE EL ELEMENTO "<<i+1<<" DEL ARREGLO: ";	cin>>vector1[i];	vector2[i] = vector1[i];
	}
}

void insercion(int *vector1, int n)
{
	int i, pos, aux;
	for(i=0; i<n; i++)
	{
		pos = i;
		aux = vector1[i];
		while((pos>0) && (vector1[pos-1] > aux))
		{
			vector1[pos] = vector1[pos-1];
			pos--;
		}
		vector1[pos] = aux;
	}
}

void recursividad(int *vector, int i, int aux, int menor, int n)
{
	if(i < n)
	{
		for(int j = i; j<n; j++)
		{
			menor= vector[i];
			
			if(menor > vector[j])
			{
				menor = vector[j];
				aux = j;
				vector[aux] = vector[i];
				vector[i] = menor;
			}
		}
		
		recursividad(vector, i+1, aux, menor, n);
		
	}
}

void mostrar(int *vector, int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<vector[i]<<"\t";
	}
}
main()
{
	setlocale(LC_ALL,"");
	system("color F0");
	int n, menor, aux;
	cout<<"DIGITE LA DIMENSIÓN DEL ARREGLO: ";	cin>>n;
	int vector1[n], vector2[n];
	llenar(vector1, vector2, n);
	insercion(vector1, n);
	cout<<endl<<endl<<"ORDENANDO EL ARREGLO SIN RECURSIVIDAD"<<endl;
	mostrar(vector1, n);
	menor=vector2[0];
	recursividad(vector2, 0, aux, menor, n);
	cout<<endl<<endl<<"ORDENANDO EL ARREGLO CON RECURSIVIDAD"<<endl;
	mostrar(vector2, n);
	getch();
}
