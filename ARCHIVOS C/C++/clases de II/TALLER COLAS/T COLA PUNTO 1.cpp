#include<stdlib.h>
#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

struct Nodo {
	int dato;
	Nodo *sigt;
};
void agregar(Nodo *&, int);
void desapilar(Nodo *&);
void copia_pila(Nodo *&);
void InsertarCola(Nodo *&, Nodo *&, int num);
void mostrar_pila(Nodo *&); 
void mostrar_cola(Nodo *&, Nodo *&); 
void desencolar(Nodo *&, Nodo *&, int);

Nodo *pila = NULL;
Nodo *pila_aux = NULL;
Nodo *cabeza = NULL;
Nodo *cola = NULL;
Nodo *cabe_aux = NULL;
Nodo *cola_aux = NULL;

void agregar(Nodo *&pila, int n)
{
	Nodo *nuevo = new Nodo();
	nuevo->dato = n;
	nuevo->sigt = pila;
	pila = nuevo;
	cout<<"INGRESO A LA PILA EXITOSO "<<pila->dato<<endl;
}

void desapilar(Nodo *&pila)
{
	Nodo *aux = pila;
	pila = aux->sigt;
	delete aux;
}

void apilar(Nodo *&pila, int num)
{
	Nodo *nuevo = new Nodo();
	nuevo->dato=num;
	nuevo->sigt=pila;
	pila=nuevo;
}

void InsertarCola(Nodo *&cabeza, Nodo *&cola, int num)
{
	Nodo *nuevo = new Nodo();
	nuevo->dato = num;
	nuevo->sigt = NULL;
	if(cabeza == NULL){
		cabeza = nuevo;
	}
	else{
		cola->sigt = nuevo;
	}
	cola = nuevo;
}

void copia_pila(Nodo *&pila)
{
	while(pila != NULL)
	{
		agregar(pila_aux,pila->dato);
		desapilar(pila);
	}
	while(pila_aux != NULL)
	{
		InsertarCola(cabeza,cola,pila_aux->dato);
		apilar(pila, pila_aux->dato);
		desapilar(pila_aux);
	}
}

void mostrar_pila(Nodo *&pila)
{

	cout<<"\t\tPILA "<<endl<<endl;
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
		cout<<"LA PILA ESTA VACIA"<<endl;
	}
	system("pause");
}

void desencolar(Nodo *&cabeza, Nodo *&cola, int numer)
{
	numer = cabeza->dato;
	Nodo *aux = cabeza;
	if (cabeza == cola)
	{
		cabeza = NULL;
		cola = NULL;
	}
	else
	{
		cabeza = cabeza->sigt;
	}
	delete aux;
}

void mostrar_cola(Nodo *&cabeza, Nodo *&cola)
{
	cout<<endl<<"\t C O L A"<<endl;
	while(cabeza != NULL)
	{
		InsertarCola(cabe_aux,cola_aux,cabeza->dato);
		cout<<cabeza->dato<<endl;
		desencolar(cabeza,cola,cabeza->dato);
	}
	
	while(cabe_aux != NULL)
	{
		InsertarCola(cabeza,cola,cabe_aux->dato);
		desencolar(cabe_aux,cola_aux,cabe_aux->dato);
	}
	
	
}

int main()
{
	setlocale(LC_ALL,"");
	system("color 0b");
	int N, band; 
	
	int op;
	do{
		bool bandera = true;
		cout<<"\t M E N U "<<endl;
		cout<<"1. PARA LLENAR LA PILA"<<endl<<"2. PARA CREAR LA COLA"<<endl<<"3. PARA MOSTRAR LA PILA Y LA COLA"<<endl<<"4. PARA SALIR"<<endl<<"INGRESE: ";		cin>>op;
		switch(op)
		{
				case 1: 
						while (bandera == true)
						{
							system("cls");
							cout<<"INGRESE EL NUMERO QUE DESEA AGREGAR A LA PILA: ";	cin>>N;
							agregar(pila,N);
							cout<<endl;
							cout<<"¿DESEA INGRESAR OTRO NÚMERO A  LA PILA?"<<endl<<"1. SI"<<endl<<"2. NO"<<endl;
							cin>>band;
							cout<<endl;
							if(band==1)
							{
								bandera = true;
							}
							else if(band==2)
							{
								bandera = false;
								system("cls");
							}
							else
							{
								cout<<"ERROR OPCIÓN INCORRECTA"<<endl;
								system("cls");
								break;
							}
						}
						break;
				
			case 2:	
					system("cls");
					cout<<"CREANDO COLA"<<endl;
					Sleep(2000);
					copia_pila(pila);
					cout<<"COPIA DE LA PILA EN LA COLA CREADA EXITOSAMENTE"<<endl;
					system("pause");
					system("cls");
					break;
			
			case 3:	
					system("cls");
					cout<<"MOSTARNDO PILA Y COLA"<<endl;
					Sleep(1500);
					mostrar_pila(pila);
					mostrar_cola(cabeza,cola);
					cout<<endl;
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
