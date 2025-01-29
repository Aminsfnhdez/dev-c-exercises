#include<stdlib.h>
#include<iostream>
#include<conio.h>
#include<windows.h>


using namespace std;
int op, num;

struct Nodo
{
	int dato;
	Nodo *sgt;
};

Nodo *pila=NULL, *pila_aux=NULL, *cabeza=NULL, *cola=NULL;

void desapilar(Nodo *&pila)
{
	Nodo *aux = pila;
	pila = aux->sgt;
	delete aux;
}

void apilar(Nodo *&pila, int num)
{
	Nodo *nuevo = new Nodo();
	nuevo->dato=num;
	nuevo->sgt=pila;
	pila=nuevo;
}

void desencolar(Nodo *&cabeza, Nodo *&cola)
{
	Nodo *aux = cabeza;
	if (cabeza == cola)
	{
		cabeza = NULL;
		cola = NULL;
	}
	else
	{
		cabeza = cabeza->sgt;
	}
	delete aux;
}

void InsertarCola(Nodo *&cabeza, Nodo *&cola, int num)
{
	Nodo *nuevo = new Nodo();
	nuevo->dato = num;
	nuevo->sgt = NULL;
	if(cabeza == NULL){
		cabeza = nuevo;
	}
	else
	{
		cola->sgt = nuevo;
	}
	cola = nuevo;
	cout<<"EL ELEMENTO "<<cola->dato<<" HA SIDO AGREGADO A LA COLA EXITOXAMENTE"<<endl;
}

void mostrar_pila(Nodo *&pila)
{

	cout<<"\t\tMOSTRANDO LA PILA"<<endl;
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

main()
{
	setlocale(LC_ALL,"");
	system("color 0b");
	int band;
	do
	{
		band = 1;
		cout<<"\t M E N U "<<endl;
		cout<<"1. PARA LLENAR LA COLA"<<endl<<"2. PARA CREAR LA PILA"<<endl<<"3. PARA MOSTRAR LA PILA"<<endl<<"4. PARA SALIR"<<endl<<"INGRESE: ";		cin>>op;
		switch(op)
		{
			case 1:
					while(band==1)
					{
						system("cls");
						cout<<"INGRESE EL NUMERO QUE DESEA AGREGAR A LA COLA: ";	cin>>num;
						InsertarCola(cabeza, cola, num);
						cout<<"¿DESEA INGRESAR OTRO NÚMERO A LA COLA?"<<endl<<"1. SI"<<endl<<"2. NO"<<endl;
						cin>>band;
						cout<<endl;
						
						if(band == 2)
						{
							system("cls");
							break;
						}
					}
					break;
			case 2:
					system("cls");
					cout<<"\t\tCREANDO LA PILA"<<endl;
					Sleep(1500);
					while(cabeza!=NULL)
					{
						apilar(pila, cabeza->dato);
						desencolar(cabeza, cola);
					}
					
					while(pila_aux!=NULL)
					{
						apilar(pila, pila_aux->dato);
						desapilar(pila_aux);
					}
					cout<<"PILA CREADA Y COLA DESTRUIDA EXITOXAMENTE"<<endl;
					system("pause");
					system("cls");
					break;
			case 3:
					system("cls");
					mostrar_pila(pila);
					system("pause");
					system("cls");
					break;		
			case 4: 
					system("cls");
					cout<<"HASTA LA VISTA BABY"<<endl;
					getch();
					break;		
			default: 
					system("cls");
					cout<<"\tERROR ELIJA UNA OPCIÓN ENTRE 1 Y 4"<<endl;
					op=0;
					system("pause");
					system("cls");			
					
		}
	}while(op<4);
	
}
