#include<iostream>
#include<conio.h>
using namespace std;
int vector1[10], vector2[10], vector3[20], n, j, aux, minimo;
main()
{
	cout<<"INGRESANDO LOS PRIMEROS ELEMENTOS"<<endl;
	for(int i=0; i<10; i++)
	{
		cout<<"INGRESE EL ELEMENTO "<<i+1<<" DE 10 EN EL VECTOR"<<endl;
		cin>>vector1[i];
	}
	for(int i=0; i<10; i++)
	{
		if(i<9)
		{
			vector2[i]=vector1[i] - vector1[i+1];
		}
		else
		{
			vector2[i]=vector1[i];
		}
	}
	for(int i=0; i<20; i++)
	{
		if(i<10)
		{
			vector3[i]=vector1[i];
		}
		else
		{
			vector3[i]=vector2[i-10];
		}
	}
//	ordenando el vector 3
	for(n=0; n<20; n++)
	{
		minimo = n;
		for(j=n+1; j<20; j++)
		{
			if(vector3[j] < vector3[minimo])
			{
				minimo = j;
			}
		}
		aux = vector3[n];
		vector3[n] = vector3[minimo];
		vector3[minimo] = aux;
	}
//	mostrando el vector 1
	for(int i=0; i<10; i++)
	{
		
		cout<<vector1[i]<<"\t";
	}
	cout<<endl<<endl;
	//	mostrando el vector 2
	for(int i=0; i<10; i++)
	{
		
		cout<<vector2[i]<<"\t";
	}
	cout<<endl<<endl;
	for(int i=0; i<20; i++)
	{
		
		cout<<vector3[i]<<"\t";
	}	
}
