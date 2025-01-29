#include<iostream>
#include<conio.h>
using namespace std;
float vector[20], bus;
int band=0, i;
main()
{
	cout<<"INGRESANDO LOS ELEMENTOS"<<endl;
	for(int i=0; i<20; i++)
	{
		cout<<"INGRESE EL ELEMENTO "<<i+1<<" DE 20 EN EL VECTOR"<<endl;
		cin>>vector[i];
	}
	cout<<"DIGITE EL NUMERO QUE DESEA BUSCAR"<<endl;
	cin>>bus;
	for(i=0; i<20; i++)
	{
		if(bus==vector[i])
		{
			band=1;
			break;
		}
	}
	if(band==1)}
	{
		cout<<"EL NUMERO "<<bus<<" SI ESTA EN LA POSICION "<<i+1<<" DEL ARRAY"<<endl;
	}
	else
	{
		cout<<"EL NUMERO "<<bus<<" NO ESTA EN EL ARRAY"<<endl;
	}
}
