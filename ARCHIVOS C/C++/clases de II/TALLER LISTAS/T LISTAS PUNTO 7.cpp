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
int op, num, valor;
void menu()
{
	cout<<"\t\t\tTALLER DE LISTAS PUNTO 7"<<endl;
	cout<<"1. PARA LLENAR LA LISTA CON ENTEROS POSITIVOS"<<endl;
	cout<<"2. PARA CONSULTAR (MOSTRAR) LA LISTA"<<endl;
	cout<<"3. PARA CONSULTAR (MOSTRAR) LA LISTA E INDICAR QUE ELEMETOS SUPERAN UN VALOR DETERMINADO"<<endl;
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
		if(num>0)
		{
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
		}
		else
		{
			cout<<endl<<"EL ELEMENTO QUE INTENTA INGRESAR NO ES UN ENTERO POSITIVO "<<endl;
		}
		
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
void verificar_lista()
{
	int comparar;
	bool prr=false;
	cout<<"\t\tCONSULTANDO ELEMENTOS DE LA LISTA SUPERAN UN VALOR DETERMINADO"<<endl;
	Nodo *corredor = new Nodo();
	corredor = lista;
	cout<<"DIGITE EL VALOR QUE LOS ELEMENTOS DE LA LISTA DEBEN SUPERAR PARA PODER SER MOSTRADOS"<<endl;
	cout<<"DIGITE AQUI: ";	cin>>valor;
	if(corredor != NULL)
	{
		
		int i=1;
		while(corredor != NULL)
		{
			prr=false;
			if(corredor->dato>valor)
			{
				cout<<"EL ELEMENTO DE LA LISTA EN LA POSICIÓN NÚMERO "<<i<<" CUMPLE CON LA CONDICIÓN: "<<corredor->dato<<" > "<<valor<<endl;
			}
			else
			{
				prr=true;
			}
			corredor=corredor->sgt;
//			comparar=corredor->dato;
////			if(comparar>valor)
////			{
////				prr=1;
////				cout<<"EL ELEMENTO DE LA LISTA EN LA POSICIÓN NÚMERO "<<i<<" CUMPLE CON LA CONDICIÓN: "<<corredor->dato<<"> "<<valor<<endl;
//				cout<<"EL ELEMENTO DE LA LISTA EN LA POSICIÓN NÚMERO "<<i<<((comparar>valor)? " CUMPLE ":" NO CUMPLE ");
//				cout<<" CON LA CONDICION: "<<corredor->dato<<endl;
//				corredor=corredor->sgt;
////			}
//			
			i++; 
		}
		
	
		if(prr==true)
		{
			cout<<"TODOS LOS ELEMENTOS DE LA LISTA SON INFERIORES A: "<<valor<<endl;
		}
	}
	else
	{
		cout<<"\t\tLA LISTA ESTA VACIA"<<endl;
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
					verificar_lista();
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
