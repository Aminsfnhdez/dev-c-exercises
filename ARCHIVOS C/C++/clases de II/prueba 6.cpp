#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

struct Nodo
{
	float dato;
	Nodo *sgt;
}; 

Nodo *pila1=NULL, *pila2=NULL, *pila_aux=NULL, *pila3=NULL;
int op;

void llenar(Nodo *&pila)
{
	system("cls");
	float num;
	cout<<"DIGITE EL NUMERO QUE DESEA INGRESAR A LA PILA "<<op<<endl; 		cin>>num;
	
	Nodo *nuevo = new Nodo();
	nuevo->dato=num;
	nuevo->sgt=pila;
	pila=nuevo;
	cout<<"EL NUMERO "<<num<<" SE HA AGREGADO A LA PILA "<<op<<endl;
	
}
void apilar(Nodo *&pila, float num)
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

void concatenar(Nodo *&pila_1, Nodo *&pila_2)
{
	system("cls");
	
	if((pila_1!=NULL) || (pila_2!=NULL))
	{
		while(pila_1!=NULL)
		{
			apilar(pila3, pila_1->dato);
			apilar(pila_aux, pila_1->dato);
			desapilar(pila_1);
		}
		
		while(pila_aux!=NULL)
		{
			apilar(pila_1, pila_aux->dato);
			desapilar(pila_aux);
		}
		
		
		while(pila_2!=NULL)
		{
			apilar(pila3, pila_2->dato);
			apilar(pila_aux, pila_2->dato);
			desapilar(pila_2);
		}
		
		while(pila_aux!=NULL)
		{
			apilar(pila_2, pila_aux->dato);
			desapilar(pila_aux);
		}
		cout<<"PILA 1 Y 2 CONCATENADAS EN LA PILA 3"<<endl;
	}
	else
	{
		cout<<"LAS PILAS 1 Y 2 ESTAN VACIAS"<<endl;
	}
	
}
void mostrar(Nodo *&pila)
{
	system("cls");
	cout<<"\t\tMOSTRANDO PILA 3"<<endl<<endl;
	if(pila!=NULL)
	{
		while(pila!=NULL)
		{
			cout<<pila->dato<<endl;
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
		cout<<"LA PILA 3 ESTA VACIA"<<endl;
	}
}
int main()
{
	
	do
	{
		cout<<"1. PARA LLENAR LA PILA 1"<<endl<<"2. PARA LLENAR LA PILA 2"<<endl<<"3. PARA CONCATENAR LA PILA 1 Y 2 EN LA PILA 3"<<endl<<"4. PARA MOSTRAR PILA 3"<<endl<<"5. PARA SALIR"<<endl;
		cin>>op;
		
		switch(op)
		{
			case 1:
				llenar(pila1);
				system("pause");
				system("cls");
				break;
			case 2:
				llenar(pila2);
				system("pause");
				system("cls");
				break;
			case 3:
				concatenar(pila1, pila2);
				system("pause");
				system("cls");
				break;
			case 4:
				mostrar(pila3);
				system("pause");
				system("cls");
				break;
			case 5:
				system("cls");
				cout<<"\t\tHASTA LA VISTA BABY"<<endl;
				system("pause");
			default : cout<<"ERROR DIGITE UNA OPCION ENTRE 1 Y 5"<<endl;
					op=0;
					system("pause");
					system("cls");	
		}
	}while(op<5);
	
	getch();
}


