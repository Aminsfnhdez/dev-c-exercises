#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

struct Nodo
{
	int dato;
	Nodo *sgt;
};
Nodo *lista=NULL;
int op, num, par[100], impar[100], j=0, i=0;
//_______________________________________________________________________________________________________________________________________
void menu()
{
	cout<<"\t\t\tTALLER DE LISTAS PUNTO 4"<<endl;
	cout<<"1. PARA LLENAR LA LISTA"<<endl;
	cout<<"2. PARA CONSULTAR (MOSTRAR) LA LISTA"<<endl;
	cout<<"3. PARA SEPARAR LOS ELEMENTOS PARES E IMPARES DE LA LISTA"<<endl;
	cout<<"4. PARA SALIR"<<endl;
	cout<<"DIGITE SU OPCIÓN: ";
	
}
//__________________________________________________________________________________________________________________________________________
void llenar_lista()
{
	int r=1;
	do
	{
		cout<<"\t\tINGRESANDO ELEMENTOS A LA LISTA"<<endl;
		Nodo *nuevo_nodo = new Nodo();
		Nodo *aux1 = lista, *aux2;
		cout<<"DIGITE EL ELEMENTO QUE DESEA INGRESAR A LA LISTA"<<endl; 
		cout<<"DIGITE AQUI: ";	cin>>num;
		nuevo_nodo->dato=num;
		
		while((aux1!=NULL)/*&&(aux1->dato<num)*/)
		{
			aux2=aux1;	aux1=aux1->sgt;
		}
		
		if(lista == aux1)
		{
			lista = nuevo_nodo;
		}
		else
		{
			aux2->sgt=nuevo_nodo;
		}
		nuevo_nodo->sgt=aux1;
		cout<<endl<<"¿DESEA INGRESAR OTRO ELEMENTO A LA LISTA?"<<endl;
		cout<<"1. SI"<<endl<<"2. NO"<<endl;
		cout<<"DIGITE SU OPCIÓN: ";	cin>>r;
		system("cls");		
	}while(r==1);
	
	
}
//___________________________________________________________________________________________________________________________________________
void consultar_lista()
{
	cout<<"\t\tCONSULTANDO ELEMENTOS DE LA LISTA"<<endl;
	Nodo *corredor = new Nodo();
	corredor = lista;
	if(corredor != NULL)
	{
		int i=1;
		while(corredor != NULL)
		{
			cout<<"LA POSICIÓN NÚMERO "<<i<<" DE LA LISTA ES: "<<corredor->dato<<endl;
			corredor=corredor->sgt;
			i++; 
		}
	}
	else
	{
		cout<<"\t\tLA LISTA ESTA VACIA"<<endl;
	}
	
}
//___________________________________________________________________________________________________________________________________________
void separar_lista()
{
	int band=0;
	cout<<"\t\tSEPARANDO ELEMENTOS DE LA LISTA"<<endl;
	Nodo *corredor = new Nodo();
	corredor = lista;
	if(corredor != NULL)
	{
		while(corredor != NULL)
		{
			band=1;
//			corredor->dato;
			if((corredor->dato%2) == 0)
			{
				par[i]=corredor->dato;
				i++;
			}
			else
			{
				impar[j]=corredor->dato;
				j++;
			}
			
			corredor=corredor->sgt;	
		}
		
	}
	else
	{
		cout<<"\t\tLA LISTA ESTA VACIA"<<endl;
	}
	
	if(band==1)
	{
		if(i!=0)
		{
			cout<<"LOS ELEMENTOS PARES DE LA LISTA SON: "<<endl;
			for(int p=0; p<i; p++)
			{
				cout<<par[p]<<"\t";
			}
			cout<<endl;
		}
		else
		{
			cout<<"NO HAY ELEMENTOS PARES EN LA LISTA"<<endl;
		}
		
		if(j!=0)
		{
			cout<<endl<<"LOS ELEMENTOS IMPARES DE LA LISTA SON: "<<endl;
			for(int p=0; p<j; p++)
			{
				cout<<impar[p]<<"\t";
			}
			cout<<endl<<endl;
		}
		else
		{
			cout<<"NO HAY ELEMENTOS IMPARES EN LA LISTA"<<endl<<endl;
		}
	}
}
//___________________________________________________________________________________________________________________________________________
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
					consultar_lista();
					system("pause");
					system("cls");
					break;
			case 3: system("cls");
					separar_lista();
					system("pause");
					system("cls");
					break;		
			case 4: system("cls");
					cout<<"\t\t\tHASTA LA VISTA BABY"<<endl;
					break;
			default: system("cls");
					cout<<"\t\tERROR OPCIÓN INCORRECTA, DIGITE UN NÚMERO ENTRE 1 Y 3"<<endl;
					system("pause");
					system("cls");
					main();	
		}
	}while(op<4);
	

}
