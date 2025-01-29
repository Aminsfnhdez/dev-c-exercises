#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<windows.h>
#include<time.h>
using namespace std;

struct Nodo
{
	int dato;
	Nodo *sgt;
};
//____________________________________________________________________________________________________________________________________________________________________
Nodo *lista=NULL;
int i,num,op,r=1;
//____________________________________________________________________________________________________________________________________________________________________
void menu()
{
	cout<<"\t\t\tQUIZ 2 DE ALGORITMOS PUNTO 1"<<endl;
	cout<<"1. PARA LLENAR LA LISTA CON NÚMEROS ALEATORIOS"<<endl;
	cout<<"2. PARA MOSTRAR LA LISTA (CON NÚMEROS ALEATORIOS)"<<endl;
	cout<<"3. PARA ELIMINAR NODOS SEGÚN UN RANGO INGRESADO"<<endl;
	cout<<"4. PARA SALIR"<<endl;
	cout<<"DIGITE SU OPCIÓN: ";
	
}
//_____________________________________________________________________________________________________________________________________________________________________
void llenar_lista()
{
	cout<<endl<<"\t\tLLENANDO LISTA CON NÚMERO ALEATORIOS"<<endl<<endl;
	srand(time(NULL));
	for(int i=1; i<=30; i++)
	{
		Nodo *nuevo_nodo = new Nodo();
		Nodo *aux1=lista, *aux2;
		num=1+rand()%(505-5);
		nuevo_nodo->dato=num;
		while( (aux1!=NULL)&&(aux1->dato<num))
		{  
			aux2=aux1;
			aux1=aux1->sgt;
		}
		
		if(lista==aux1)
		{
			lista=nuevo_nodo;
		}
		else
		{
			aux2->sgt=nuevo_nodo;
		}
		nuevo_nodo->sgt=aux1;
	}
//	cout<<endl<<"\t\tLLENANDO LISTA CON NÚMERO ALEATORIOS"<<endl<<endl;
	cout<<"LISTA LLENADA CON NÚMEROS GENERADOS ALEATORIAMENTE"<<endl;	
}
//____________________________________________________________________________________________________________________________________________________________________
void mostrar_lista()
{
	cout<<"\t\tLLENANDO LISTA CON NÚMERO ALEATORIOS"<<endl;
	Nodo *corredor= new Nodo();
	corredor=lista;
	
	if(lista!=NULL)
	{
		int pos=1;
		while(corredor!=NULL)
		{
			cout<<"EL ELEMENTO EN LA POSICIÓN NÚMERO "<<pos<<" DE LA LISTA ES: "<<corredor->dato<<endl;	
			corredor=corredor->sgt;
			pos++;
		}
	}
	else
	{
		cout<<"\t\tLA LISTA ESTA VACIA"<<endl;
	}
	
}
//____________________________________________________________________________________________________________________________________________________________________
void rango()
{
	cout<<"\t\tELIMINANDO SOBRE UN RANGO "<<endl;
	int ran1, ran2, cont=0;
	Nodo *corredor1, *corredor2, *perla1, *perla2, *dragon, *tigre;
	corredor1 =lista;
	corredor2 =lista;
	perla1 = lista;
	perla2 = lista;
	if(lista!=NULL)
	{
		cout<<"INGRESE EL RANGO 1 DESDE DONDE EMPEZARÁ A ELIMINAR"<<endl;
		cout<<"DIGITE AQUI: ";	cin>>ran1;
		cout<<"INGRESE EL RANGO 2 HASTA DONDE TERMINARÁ DE ELIMINAR"<<endl;
		cout<<"DIGITE AQUI: ";	cin>>ran2;
		
		while((corredor1!=NULL)&&(corredor1->dato<ran1))
		{ 
			corredor1=corredor1->sgt;	
			cont++;	
		}
		
		for(int i=0; i<cont-1; i++)
		{
			if(perla2->dato<ran1)
			{
				perla2 = perla2->sgt;
			}
		}
		dragon = perla2;
		
		while((corredor2!=NULL)&&(corredor2->dato<=ran2))
		{
			corredor2=corredor2->sgt;
		}
		
		tigre=corredor2;
		dragon->sgt=tigre;
		lista=perla1;
	}
	else
	{
		cout<<"\t\tLA LISTA ESTA VACIA"<<endl;
	}
}
//____________________________________________________________________________________________________________________________________________________________________
main()
{
	setlocale(LC_ALL,"");
	system("color 0b");
	do
	{
		menu(); cin>>op;
		switch(op)
		{
			case 1: system("cls");
					llenar_lista();
					system("pause");
					system("cls");
					break;
			case 2: system("cls");
					mostrar_lista();
					system("pause");
					system("cls");
					break;
			case 3: system("cls");
					rango();
					system("pause");
					system("cls");
					break;	
			case 4: system("cls");
					cout<<"\t\t\tHASTA LA VISTA BABY"<<endl;
					break;
			default: system("cls");
					cout<<"\t\tERROR OPCIÓN INCORRECTA, DIGITE UN NÚMERO ENTRE 1 Y 4"<<endl;
					system("pause");
					system("cls");
					main();	
		}
	}while(op<4);
}
