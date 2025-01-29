//YCTE
#include <iostream>

using namespace std;

struct nodo
{
	int dato;
	nodo *sgt;
};

void insertar_lista();
void mostrar_lista();
void mostrar_elem_valor();

nodo *lista=NULL;
int r=1,num,op;

main()
{
	while (r==1)
	{
		system("cls");
		cout<<"MENU PRINCIPAL"<<endl;
		cout<<"\n1-Llenar lista (solo numeros enteros positivos)"<<endl;
		cout<<"2-Mostrar lista completa"<<endl;
		cout<<"3-Mostrar elementos segun un valor dado"<<endl;
		cout<<"4-Salir"<<endl;
		cout<<"\nOpcion: ";
		cin>>op;
		switch (op)
		{
			case 1: insertar_lista();
					break;
			case 2: mostrar_lista();
					break;
			case 3: mostrar_elem_valor();
					break;
			case 4: r=2;
					break;
		}	
	}
}

void insertar_lista()
{
	system("cls");
	cout<<"Digite un numero: ";
	cin>>num;
	if (num>0)
	{
		nodo *nuevo_nodo=new nodo();
		nodo *aux;
		nuevo_nodo->dato=num;
		nuevo_nodo->sgt=NULL;
		if (lista==NULL)
		{
			lista=nuevo_nodo;
		}
		else
		{
			aux=lista;
			while (aux->sgt!=NULL)
			{
				aux=aux->sgt;
			}
			aux->sgt=nuevo_nodo;
		}
		cout<<"\nElemento guardado.";
	}
	else
	{
		cout<<"\nError, solo se aceptan numeros enteros positivos"<<endl;
	}
	cout<<"\n";
	cout<<"\n";
	system("pause");
}

void mostrar_lista()
{
	system("cls");
	cout<<"\nMostrar lista completa"<<endl;
	cout<<"\n";
	while (lista==NULL)
	{
		cout<<"Error, la lista esta vacia.";
		break;
	}
	nodo *actual=new nodo();
	actual=lista;
	while (actual!=NULL)
	{
		cout<<actual->dato<<" -> ";
		actual=actual->sgt;
	}
	cout<<"\n";
	cout<<"\n";
	system("pause");
}

void mostrar_elem_valor()
{
	int val;
	bool band=false;
	system("cls");
	cout<<"\nMostrar elementos segun un valor dado"<<endl;
	cout<<"\nDigite un valor: ";
	cin>>val;
	cout<<"\n";
	nodo *actual=new nodo();
	actual=lista;
	while (actual!=NULL)
	{
		band=false;
		if (actual->dato>val)
		{
			cout<<actual->dato<<" -> ";
		}
		else
		{
			band=true;
		}
		actual=actual->sgt;
	}
	if (band==true)
	{
		cout<<"\nTodos los elementos de la lista son menores que el valor ingresado"<<endl;
	}
	cout<<"\n";
	cout<<"\n";
	system("pause");
}
