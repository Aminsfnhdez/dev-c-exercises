#include<stdlib.h>
#include<iostream>
#include<conio.h>
#include<windows.h>

using namespace std;
int op;
float num;

struct Nodo
{
	float dato;
	Nodo *sgt;
};

Nodo *cabeza1=NULL, *cola1=NULL, *cabeza2=NULL, *cola2=NULL, *cabeza_aux=NULL, *cola_aux=NULL, *pila_aux=NULL;


void desapilar(Nodo *&pila)
{
	Nodo *aux = pila;
	pila = aux->sgt;
	delete aux;
}

void apilar(Nodo *&pila, float num)
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

void encolar(Nodo *&cabeza, Nodo *&cola, float num)
{
	Nodo *nuevo = new Nodo();
	nuevo->dato = num;
	nuevo->sgt = NULL;
	if(cabeza == NULL)
	{
		cabeza = nuevo;
	}
	else
	{
		cola->sgt = nuevo;
	}
	cola = nuevo;
}


void InsertarCola(Nodo *&cabeza, Nodo *&cola, float num)
{
	Nodo *nuevo = new Nodo();
	nuevo->dato = num;
	nuevo->sgt = NULL;
	if(cabeza == NULL)
	{
		cabeza = nuevo;
	}
	else
	{
		cola->sgt = nuevo;
	}
	cola = nuevo;
	cout<<"EL ELEMENTO "<<cola->dato<<" HA SIDO AGREGADO A LA COLA EXITOXAMENTE"<<endl;
}

void mostrar_cola(Nodo *&cabeza, Nodo *&cola)
{
	while(cabeza != NULL)
	{
		cout<<"\t"<<cabeza->dato<<endl;
		encolar(cabeza_aux, cola_aux, cabeza->dato);
		desencolar(cabeza, cola);
	}
	cout<<endl;
	
	while(cabeza_aux != NULL)
	{
		encolar(cabeza, cola, cabeza_aux->dato);
		desencolar(cabeza_aux, cola_aux);
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
		cout<<"1. PARA LLENAR LA COLA 1"<<endl<<"2. PARA CREAR LA COLA 2"<<endl<<"3. PARA MOSTRAR LAS COLAS"<<endl<<"4. PARA SALIR"<<endl<<"INGRESE: ";		cin>>op;
		switch(op)
		{
			case 1:
					while(band == 1)
					{
						system("cls");
						cout<<"INGRESE EL NUMERO QUE DESEA AGREGAR A LA COLA 1: ";	cin>>num;
						InsertarCola(cabeza1, cola1, num);
						apilar(pila_aux, num);
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
					cout<<"\t\tCREANDO LA COLA 2"<<endl;
					Sleep(1500);
					if(pila_aux != NULL)
					{
						
						while(pila_aux != NULL)
						{
							encolar(cabeza2, cola2, pila_aux->dato);
							desapilar(pila_aux);
						}
						cout<<"COLA 2 CREADA EXITOXAMENTE"<<endl;	
					}
					else
					{
						cout<<"LA COLA 1 ESTÁ VACIA. LLENALA POR FAVOR"<<endl;
					}
					
					system("pause");
					system("cls");
					break;
			case 3: 
					system("cls");
					cout<<"\t\tMOSTRANDO LAS COLAS"<<endl<<endl;
					
					if(cabeza1 != NULL)
					{
						if(cabeza2 != NULL)
						{
							cout<<"COLA 1"<<endl;
							mostrar_cola(cabeza1, cola1);
						
							system("pause");
							cout<<endl<<"COLA 2"<<endl;
							mostrar_cola(cabeza2, cola2);
						}
						else
						{
							cout<<"LA COLA 2 ESTÁ VACIA. CREALA POR FAVOR"<<endl;
						}
					}
					else
					{
						cout<<"LA COLA 1 ESTÁ VACIA. LLENALA POR FAVOR"<<endl;
					}
						
					
					system("pause");
					system("cls");
					break;	
			case 4: 
					system("cls");
					cout<<"HASTA LA VISTA BABY"<<endl;
					getch();
					break;		
			default: 
					system("clse");
					cout<<"\tERROR ELIJA UNA OPCIÓN ENTRE 1 Y 5"<<endl;
					op=0;
					system("pause");
					system("cls");			
					
		}
	}while(op<4);

}
