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
	
	cout<<"PROCEDEREMOS A REALIZAR LO QUE TOQUE HACER"<<endl;
	for(int i=0; i<5; i++)
	{
		if(vector1[i] == vector2[i])
		{
			vector3[i] = vector1[i] * vector2[i];
 		}
 		
 		if(vector1[i] > vector2[i])
		{
			vector3[i] = vector1[i] - vector2[i];
 		}
 		
 		if(vector1[i] < vector2[i])
		{
			vector3[i] = vector1[i] + vector2[i];
 		}
	}
	system("cls");
	
	cout<<"MOSTRANDO EL VECTOR 1"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<vector1[i]<<"\t";
	}
	cout<<endl<<endl;
	
	cout<<"MOSTRANDO EL VECTOR 2"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<vector2[i]<<"\t";
	}
	cout<<endl<<endl;
	
	cout<<"MOSTRANDO EL VECTOR ESPECIAL "<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<vector3[i]<<"\t";
	}
}
