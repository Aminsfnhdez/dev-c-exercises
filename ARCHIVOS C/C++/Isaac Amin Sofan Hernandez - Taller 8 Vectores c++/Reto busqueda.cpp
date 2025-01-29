#include<iostream>
#include<conio.h>

using namespace std;
int vector[15], i;
void buscar()
{
	int x, band=0, posicion;
	cout<<"Digite el numero que desea buscar "<<endl;
	cin>>x;
	//i=0;
	//for(i=0; i<15; i++)
	do
	{
		if((vector[i]==x))
		{
			band=1;
			posicion=i+1;
			break;
		}
	}while(i<5);
	if(band==1)
	{
		cout<<"El numero "<<x<<" se encuentra en la poscion "<<posicion<<" del vector"<<endl;
	}
	else
	{
		cout<<"El numero "<<x<<" no esta en el vector"<<endl;
	}
}
int main()
{
	int num;
	i=0;
	do
	{
//		for(i=0; i<15; i++)
//	{
		cout<<"Digite el elemento "<<i+1<<" de 15 del vector"<<endl;
		cin>>num;
		vector[i]=num;
		i++;
//	}i++
	}while(i<5);
	
	
	
	buscar();
}
