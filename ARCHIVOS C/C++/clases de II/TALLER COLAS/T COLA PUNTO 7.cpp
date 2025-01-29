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

Nodo *cabeza=NULL, *cola=NULL, *cabeza_aux=NULL, *cola_aux=NULL, *pila=NULL, *pila_aux=NULL;

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
	system("color F0");
	int band;
	do
	{
		band = 1;
		cout<<"\t M E N U "<<endl;
		cout<<"1. PARA LLENAR LA COLA"<<endl<<"2. PARA CREAR LA PILA"<<endl<<"3. PARA MOSTRAR LA COLA Y LA PILA"<<endl<<"4. PARA SALIR"<<endl<<"INGRESE: ";		cin>>op;
		switch(op)
		{
			case 1:
					while(band == 1)
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
					if(cabeza != NULL)
					{
						//crear la pila
						while(cabeza != NULL)
						{
							apilar(pila, cabeza->dato);
							encolar(cabeza_aux, cola_aux, cabeza->dato);
							desencolar(cabeza, cola);
						}
						
						
						//restaurar la cola original
						while(cabeza_aux != NULL)
						{
							encolar(cabeza, cola, cabeza_aux->dato);
							desencolar(cabeza_aux, cola_aux);
						}
						
						cout<<"PILA CREADA EXITOXAMENTE"<<endl;	
					}
					else
					{
						cout<<"LA COLA ESTÁ VACIA. LLENALA POR FAVOR"<<endl;
					}
					
					system("pause");
					system("cls");
					break;
			case 3: 
					system("cls");
					cout<<"\t\tMOSTRANDO LA COLA Y LA PILA"<<endl<<endl;
					
					if(cabeza != NULL)
					{
						if(pila != NULL)
						{
							// LA MAGIA
							cout<<"\tCOLA"<<endl;
							mostrar_cola(cabeza, cola);
													
							system("pause");
							cout<<endl<<"\tPILA"<<endl;
							while(pila != NULL)
							{
								cout<<"\t"<<pila->dato<<endl;
								apilar(pila_aux, pila->dato);
								desapilar(pila);
							}
							
							while(pila_aux != NULL)
							{
								apilar(pila, pila_aux->dato);
								desapilar(pila_aux);
							}
						}
						else
						{
							cout<<"LA PILA ESTÁ VACIA. CREALA POR FAVOR"<<endl;
						}
					}	
					else
					{
						cout<<"LA COLA ESTÁ VACIA. LLENALA POR FAVOR"<<endl;
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
