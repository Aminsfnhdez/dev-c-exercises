#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

struct Nodo
{
	int dato;
	Nodo *sgt;
}; 

Nodo *pila=NULL, *pila_aux=NULL;
int cont=0;

void llenar(Nodo *&pila)
{
	system("cls");
	int num;
	cout<<"DIGITE EL NUMERO QUE DESEA INGRESAR A LA PILA "<<endl; 		cin>>num;
	
	Nodo *nuevo = new Nodo();
	nuevo->dato=num;
	nuevo->sgt=pila;
	pila=nuevo;
	cout<<"EL NUMERO "<<num<<" SE HA AGREGADO A LA PILA "<<endl;
	cont++;
	
}

void apilar(Nodo *&pila, int num)
{
	Nodo *nuevo = new Nodo();
	nuevo->dato=num;
	nuevo->sgt=pila;
	pila=nuevo;
}

void desapilar(Nodo *&pila)
{
	Nodo *aux = pila;
	aux=pila;
	pila=aux->sgt;
	delete aux;
}

void mostrar(Nodo *&pila)
{
	system("cls");
	cout<<"\t\tMOSTRANDO LA PILA "<<endl<<endl;
	if(pila!=NULL)
	{
		while(pila!=NULL)
		{
			cout<<"\t"<<pila->dato<<endl;
			apilar(pila_aux, pila->dato);
			desapilar(pila);
		}
		
		while(pila_aux!=NULL)
		{
			apilar(pila, pila_aux->dato);
			desapilar(pila_aux);
		}
	}
	else
	{
		cout<<"LA PILA ESTA VACIA"<<endl;
	}
}

void insercion(int *vector)
{
	int i, pos, aux;
	for(i=0; i<cont; i++)
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

void ordenar(Nodo *&pila)
{
	system("cls");
	int vector[cont], i;
	if(pila!=NULL)
	{
		i=0;
		while((pila!=NULL) && (i<cont))
		{
			vector[i]=pila->dato;
			apilar(pila_aux, pila->dato);
			desapilar(pila);
	
			i++;
		}
		insercion(vector);
		
		i=0;
		while((pila_aux!=NULL) && (i<cont))
		{
			
			apilar(pila, vector[i]);
			desapilar(pila_aux);
	
			i++;
		}
		
		cout<<"LA PILA HA SIDO ORDENADA CORRECTAMENTE"<<endl;
	}
	else
	{
		cout<<"LA PILA ESTA VACIA"<<endl;
	}
	
}

int main()
{
	setlocale(LC_ALL,"");
	system("color 0b");
	int op;
	do
	{
		cout<<"1. PARA LLENAR LA PILA"<<endl<<"2. PARA MOSTRAR PILA"<<endl<<"3. PARA ORDENAR LA PILA"<<endl<<"4. PARA SALIR"<<endl;
		cin>>op;
		
		switch(op)
		{
			case 1:
				llenar(pila);
				system("pause");
				system("cls");
				break;
			case 2:
				mostrar(pila);
				system("pause");
				system("cls");
				break;
			case 3:
				ordenar(pila);
				system("pause");
				system("cls");
				break;	
			case 4:
				system("cls");
				cout<<"\t\tHASTA LA VISTA BABY"<<endl;
				system("pause");
				break;
			default : cout<<"ERROR DIGITE UNA OPCION ENTRE 1 Y 4"<<endl;
					op=0;
					system("pause");
					system("cls");	
		}
	}while(op<4);
	
	getch();
}
