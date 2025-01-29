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

Nodo *cabeza1=NULL, *cola1=NULL, *cabeza2=NULL, *cola2=NULL, *cabeza3=NULL, *cola3=NULL, *cabeza_aux=NULL, *cola_aux=NULL;

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

void encolar(Nodo *&cabeza, Nodo *&cola, int num)
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


void InsertarCola(Nodo *&cabeza, Nodo *&cola, int num)
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

main()
{
	setlocale(LC_ALL,"");
	system("color 0b");
	int band;
	do
	{
		band = 1;
		cout<<"\t M E N U "<<endl;
		cout<<"1. PARA LLENAR LA COLA 1"<<endl<<"2. PARA LLENAR LA COLA 2"<<endl<<"3. PARA CREAR LA COLA 3"<<endl<<"4. PARA MOSTRAR TODAS LAS COLAS"<<endl<<"5. PARA SALIR"<<endl<<"INGRESE: ";		cin>>op;
		switch(op)
		{
			case 1:
					while(band == 1)
					{
						system("cls");
						cout<<"INGRESE EL NUMERO QUE DESEA AGREGAR A LA COLA 1: ";	cin>>num;
						InsertarCola(cabeza1, cola1, num);
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
					while(band == 1)
					{
						system("cls");
						cout<<"INGRESE EL NUMERO QUE DESEA AGREGAR A LA COLA 2: ";	cin>>num;
						InsertarCola(cabeza2, cola2, num);
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
					
			case 3:
					system("cls");
					cout<<"\t\tCREANDO LA COLA CONCATENADA"<<endl;
					Sleep(1500);
					if((cabeza1 != NULL) || (cabeza2 != NULL))
					{
						while(cabeza1 != NULL)
						{
							encolar(cabeza3, cola3, cabeza1->dato);
							encolar(cabeza_aux, cola_aux, cabeza1->dato);
							desencolar(cabeza1,cola1);
						}
						
						while(cabeza_aux != NULL)
						{
							encolar(cabeza1, cola1, cabeza_aux->dato);
							desencolar(cabeza_aux, cola_aux);
						}
						
						while(cabeza2 != NULL)
						{
							encolar(cabeza3, cola3, cabeza2->dato);
							encolar(cabeza_aux, cola_aux, cabeza2->dato);
							desencolar(cabeza2, cola2);
						}
						
						while(cabeza_aux != NULL)
						{
							encolar(cabeza2, cola2, cabeza_aux->dato);
							desencolar(cabeza_aux, cola_aux);
						}
						cout<<"COLA 3 CREADA EXITOXAMENTE"<<endl;
					}
					else
					{
						cout<<"LAS COLAS 1 Y 2 ESTÁN VACIAS. LLENALAS POR FAVOR"<<endl;
					}
					
					system("pause");
					system("cls");
					break;
			case 4:
					system("cls");
					cout<<"\t\tMOSTRANDO TODAS LAS COLAS"<<endl<<endl;
					if((cabeza1 != NULL) || (cabeza2 != NULL))
					{
						if(cabeza1 != NULL)
						{
							cout<<"\t\tCOLA 1"<<endl;
							while(cabeza1 != NULL)
							{
								cout<<"\t"<<cabeza1->dato<<endl;
								encolar(cabeza_aux, cola_aux, cabeza1->dato);
								desencolar(cabeza1, cola1);
							}
							
							while(cabeza_aux != NULL)
							{
								encolar(cabeza1, cola1, cabeza_aux->dato);
								desencolar(cabeza_aux, cola_aux);
							}
							
							cout<<endl;
						}
						else
						{
							cout<<"LA COLA 1 ESTÁ VACIA"<<endl<<endl;
						}
						
						
						if(cabeza2 != NULL)
						{
							cout<<"\t\tCOLA 2"<<endl;
							while(cabeza2 != NULL)
							{
								cout<<"\t"<<cabeza2->dato<<endl;
								encolar(cabeza_aux, cola_aux, cabeza2->dato);
								desencolar(cabeza2, cola2);
							}
							
							while(cabeza_aux != NULL)
							{
								encolar(cabeza2, cola2, cabeza_aux->dato);
								desencolar(cabeza_aux, cola_aux);
							}
							
								cout<<endl;
						}
						else
						{
							cout<<"LA COLA 2 ESTÁ VACIA"<<endl<<endl;
						}
						
						cout<<"\t\tCOLA 3"<<endl;
						while(cabeza3 != NULL)
						{
							cout<<"\t"<<cabeza3->dato<<endl;
							encolar(cabeza_aux, cola_aux, cabeza3->dato);
							desencolar(cabeza3, cola3);
						}
						
						while(cabeza_aux != NULL)
						{
							encolar(cabeza3, cola3, cabeza_aux->dato);
							desencolar(cabeza_aux, cola_aux);
						}
						cout<<endl;
					
					}
					else
					{
						cout<<"LAS COLAS ESTÁN VACIAS. LLENALAS POR FAVOR"<<endl<<endl;
					}
					
					system("pause");
					system("cls");
					break;		
			case 5: 
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
	}while(op<5);
	
}
