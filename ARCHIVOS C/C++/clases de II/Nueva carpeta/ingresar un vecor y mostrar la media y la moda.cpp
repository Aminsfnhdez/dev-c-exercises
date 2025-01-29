#include<iostream>
#include<conio.h>
using namespace std;
int cant, suma, media, moda, cont1=0, cont2=0, mod=0;
float vector[100]={0};
main()
{
	
	cout<<"BUENOS DIAS."<<endl;
	
	cout<<"DIGITE LA CANTIDAD DE NUMEROS A INGRESAR"<<endl;
	cin>>cant;
	cout<<"INGRESANDO LOS NUMEROS"<<endl;
	for(int i=0; i<cant; i++)
	{
		cout<<"DIGITE EL NUMERO "<<i+1<<" de "<<cant<<endl;
		cin>>vector[i];
	}
	for(int i=0; i<cant; i++)
	{
		suma = suma + vector[i];
	}
	media = suma / cant;
	for(int i=0; i<cant; i++)
	{
		for(int j=0; j<cant; j++)
		{
			if(vector[i]==vector[j])
			{
				cont1++;
			}	
		}	
		if(cont1>cont2)
		{
			cont2=cont1;
			cont1=0;
			moda = vector[i];
		}
	}
	cout<<"LA MEDIA ES: "<<media<<endl;
	for(int i=0; i<cant; i++)
	{
		if(moda==vector[i])
		{
			mod++;
		}
	}
	if(mod>1)
	{
		cout<<"LA MODA ES: "<<moda<<endl;
	}
	else
	{
		cout<<"NO HAY MODA"<<endl;
	}
	
}
