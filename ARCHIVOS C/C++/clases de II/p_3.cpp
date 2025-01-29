#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL,"");
	int vector[5], suma, band=0, aux;
	
	cout<<"PROCEDEREMOS A LLENAR EL VECTOR"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<"DIGITE EL ELEMENTO NÚMERO "<<i+1<<" DE 5: ";  cin>>vector[i];
	}
	
	for(int i=0; i<5; i++)
	{
		suma += vector[i];
	}
	
	for(int i=0; i<5; i++)
	{
		aux = suma - vector[i];
		
		if(aux == vector[i] )
		{
			cout<<"EL ELEMENTO "<<vector[i]<<" ES IGUAL A LA SUMA DE LOS OTROS ELEMENTOS DEL VECTOR"<<endl;
			band = 1;
			break;
		}
	}
	
	if( band != 1)
	{
		cout<<"NO EXISTE ALGÚN ELEMENTO QUE SEA LA SUMA DE LOS DEMÁS"<<endl;
	}
//	for(int i=0; i<5; i++)
//	{
//		aux = i;
//		for(int j=0; j<5; j++)  /* esta parte la esta corrigiendo el docente */
//		{
//			if(j != i)
//			{
//				suma += vector[j];
//			}
//		}
//		
//		if( suma == vector[i])
//		{
//			band = 1;
////			aux = i;
//			break;
//		}
aqui es donde se debe resetear
//	}
//	system("cls");
//	
//	if(band == 1)
//	{
//		cout<<"EL ELEMENTO "<<vector[aux]<<" ES IGUAL A LA SUMA DE LOS OTROS ELEMENTOS DEL VECTOR"<<endl;
//	}
//	else
//	{
//		cout<<"NO EXISTE ALGÚN ELEMENTO QUE SEA LA SUMA DE LOS DEMÁS"<<endl;
//	}
//	
//	cout<<"MOSTRANDO EL VECTOR "<<endl;
//	for(int j=0; j<5; j++)
//	{
//		cout<<vector[j]<<"\t";
//	}
}
