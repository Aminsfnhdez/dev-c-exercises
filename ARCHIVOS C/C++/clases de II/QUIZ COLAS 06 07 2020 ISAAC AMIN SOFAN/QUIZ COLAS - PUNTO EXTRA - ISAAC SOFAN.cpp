#include<stdlib.h>
#include<iostream>
#include<conio.h>

using namespace std;
int op, dil, cedula;
string nombre;


struct Nodo
{
	string nombre;
	int cedula;
	Nodo *sgt;
};

Nodo *cab_normal, *cola_normal, *cab_prefe, *cola_prefe;

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

void encolar(Nodo *&cabeza, Nodo *&cola, string nombre, int cedula)
{
	Nodo *nuevo = new Nodo();
	nuevo->nombre = nombre;
	nuevo->cedula = cedula;
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



main()
{
	setlocale(LC_ALL,"");
	system("color F0");
	int band;
	do
	{
		band = 1;
		cout<<"\t M E N U "<<endl;
		cout<<"1. PARA LLENAR COLA NORMAL"<<endl<<"2. PARA LLENAR COLA PREFERENCIAL"<<endl<<"3. PARA ATENDER CLIENTES"<<endl<<"4. PARA SALIR"<<endl<<"INGRESE: ";		cin>>op;
		switch(op)
		{
			case 1:
					while(band==1)
					{
						system("cls");
						fflush(stdin);
						cout<<"INGRESE EL NOMBRE DEL CLIENTE: "; getline(cin, nombre);	
						cout<<"INGRESE LA CÉDULA DEL CLIENTE: "; cin>>cedula;
						encolar(cab_normal, cola_normal, nombre, cedula);
						
						cout<<"CLIENTE AÑADIDO A LA COLA NORMAL EXITOSAMENTE"<<endl;
						cout<<"¿DESEA INGRESAR OTRO CLIENTE A LA COLA?"<<endl<<"1. SI"<<endl<<"2. NO"<<endl;
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
					while(band==1)
					{
						system("cls");
						fflush(stdin);
						cout<<"INGRESE EL NOMBRE DEL CLIENTE: "; getline(cin, nombre);	
						cout<<"INGRESE LA CÉDULA DEL CLIENTE: "; cin>>cedula;
						encolar(cab_prefe, cola_prefe, nombre, cedula);
						
						cout<<"CLIENTE AÑADIDO A LA COLA PREFERENCIAL EXITOSAMENTE"<<endl;
						cout<<"¿DESEA INGRESAR OTRO CLIENTE A LA COLA?"<<endl<<"1. SI"<<endl<<"2. NO"<<endl;
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
					cout<<"\t\tATENDIENDO CLIENTES"<<endl<<endl;
					if((cab_normal != NULL) || (cab_prefe != NULL))
					{
						if(cab_prefe != NULL)
						{
							cout<<"NOMBRE DEL CLIENTE: "<<cab_prefe->nombre<<endl;
							cout<<"CEDULA DEL CLIENTE: "<<cab_prefe->cedula<<endl;
							desencolar(cab_prefe, cola_prefe);
							cout<<"SE HA ATENDIDO UN CLIENTE DE LA COLA PREFERENCIAL EXITOSAMENTE"<<endl;
						}
						else if(cab_normal != NULL)
						{
							cout<<"NOMBRE DEL CLIENTE: "<<cab_normal->nombre<<endl;
							cout<<"CEDULA DEL CLIENTE: "<<cab_normal->cedula<<endl;
							desencolar(cab_normal, cola_normal);
							cout<<"SE HA ATENDIDO UN CLIENTE DE LA COLA NORMAL EXITOSAMENTE"<<endl;
						}
					}
					else
					{
						cout<<"NO CLIENTES QUE ATENDER"<<endl;
					}
					
					
					system("PAUSE");
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
