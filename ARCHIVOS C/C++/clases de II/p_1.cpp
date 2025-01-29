#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL,"");
	int vector1[5], vector2[5], vector3[5];
	
	cout<<"PROCEDEREMOS A LLENAR EL VECTOR NÚMERO 1"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<"DIGITE EL ELEMENTO NÚMERO "<<i+1<<" DE 5: ";  cin>>vector1[i];
	}
	
	cout<<"PROCEDEREMOS A LLENAR EL VECTOR NÚMERO 2"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<"DIGITE EL ELEMENTO NÚMERO "<<i+1<<" DE 5: ";  cin>>vector2[i];
	}
	
	cout<<"PROCEDEREMOS A REALIZAR LA SUMA ENTRE VECTORES"<<endl;
	for(int i=0; i<5; i++)
	{
		vector3[i] = vector1[i] + vector2[4-i];
	}
	
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
	
	cout<<"MOSTRANDO LA SUMA DE VECTORES DE FORMA INVERSA"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<vector3[i]<<"\t";
	}
	cout<<endl;
} 
