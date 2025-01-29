#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<windows.h>
using namespace std;

struct Nodo
{
	int dato;
	Nodo *sgt;
	Nodo *ant;
};
//____________________________________________________________________________________________________________________________________________________________________
Nodo *cabeza1, *cola1, *cabeza2, *cola2, *cabeza3, *cola3;
int op, num, cont1=0, cont2=0;
//_____________________________________________________________________________________________________________________________________________________________________
void menu()
{
	cout<<"\t\t\tQUIZ 2 DE ALGORITMOS PUNTO 1"<<endl;
	cout<<"1. PARA LLENAR LA LISTA NÚMERO 1"<<endl;
	cout<<"2. PARA LLENAR LA LISTA NÚMERO 2"<<endl;
	cout<<"3. PARA MOSTRAR LA LISTA NÚMERO 1"<<endl;
	cout<<"4. PARA MOSTRAR LA LISTA NÚMERO 2"<<endl;
	cout<<"5. PARA COMPARAR LAS LISTAS NÚMEROS 1 Y 2"<<endl;
	cout<<"6. PARA ENCONTRAR EL ELEMENTO DE MAYOR VALOR ENTRE AMBAS LISTAS"<<endl;
	cout<<"7. PARA CREAR UNA LISTA NÚMERO 3 CON SOLO LOS ELEMENTOS PARES DE LAS LISTAS 1 Y 2 "<<endl;
	cout<<"8. PARA MOSTRAR LA LISTA NÚMERO 3 "<<endl;
	cout<<"9. PARA SALIR"<<endl;
	cout<<"DIGITE SU OPCIÓN: ";
	
}
//_____________________________________________________________________________________________________________________________________________________________________
void llenar_lista1()
{
	int r=1;
	do
	{
		cout<<"\t\tINGRESANDO ELEMENTOS A LA LISTA NÚMERO 1"<<endl;
		Nodo *nuevo_nodo = new Nodo();
		cout<<"DIGITE EL ELEMENTO QUE DESEA INGRESAR A LA LISTA"<<endl; 
		cout<<"DIGITE AQUI: ";	cin>>num;
		nuevo_nodo->dato=num;
		
		if(cabeza1==NULL)
		{
			cabeza1=nuevo_nodo;
			cabeza1->sgt=NULL;
			cabeza1->ant=NULL;
			cola1 = cabeza1;
			cont1+=1;
		}
		else
		{
			cola1->sgt=nuevo_nodo;
			nuevo_nodo->sgt=NULL;
			nuevo_nodo->ant=cola1;
			cola1=nuevo_nodo;
			cont1+=1;
		}
		
		
		cout<<endl<<"¿DESEA INGRESAR OTRO ELEMENTO A LA LISTA NÚMERO 1?"<<endl;
		cout<<"1. SI"<<endl<<"2. NO"<<endl;
		cout<<"DIGITE SU OPCIÓN: ";	cin>>r;
		system("cls");
	}while(r==1);
}
//_____________________________________________________________________________________________________________________________________________________________________
void llenar_lista2()
{
	int r=1;
	do
	{
		cout<<"\t\tINGRESANDO ELEMENTOS A LA LISTA NÚMERO 2"<<endl;
		Nodo *nuevo_nodo = new Nodo();
		cout<<"DIGITE EL ELEMENTO QUE DESEA INGRESAR A LA LISTA"<<endl; 
		cout<<"DIGITE AQUI: ";	cin>>num;
		nuevo_nodo->dato=num;
		
		if(cabeza2==NULL)
		{
			cabeza2=nuevo_nodo;
			cabeza2->sgt=NULL;
			cabeza2->ant=NULL;
			cola2 = cabeza2;
			cont2+=1;
		}
		else
		{
			cola2->sgt=nuevo_nodo;
			nuevo_nodo->sgt=NULL;
			nuevo_nodo->ant=cola2;
			cola2=nuevo_nodo;
			cont2+=1;
		}
		
		
		cout<<endl<<"¿DESEA INGRESAR OTRO ELEMENTO A LA LISTA NÚMERO 2?"<<endl;
		cout<<"1. SI"<<endl<<"2. NO"<<endl;
		cout<<"DIGITE SU OPCIÓN: ";	cin>>r;
		system("cls");
	}while(r==1);
}
//_____________________________________________________________________________________________________________________________________________________________________
void mostrar_lista1()
{
	cout<<"\t\tMOSTRANDO ELEMENTOS DE LAS LISTA 1"<<endl;
	Nodo *corredor = new Nodo();
	corredor=cabeza1;
	if(cabeza1 != NULL)
	{
		int pos = 1;
		while(corredor != NULL)
		{
			cout<<"LA POSICIÓN NÚMERO "<<pos<<" DE LA LISTA 1 ES: "<<corredor->dato<<endl;
			corredor=corredor->sgt;
			pos++;
		}
	}
	else
	{
		cout<<"\t\tLA LISTA NÚMERO 1 ESTA VACIA"<<endl;
	}
}
//_____________________________________________________________________________________________________________________________________________________________________
void mostrar_lista2()
{
	cout<<"\t\tMOSTRANDO ELEMENTOS DE LAS LISTA 2"<<endl;
	Nodo *corredor = new Nodo();
	corredor=cabeza2;
	if(cabeza2 != NULL)
	{
		int pos = 1;
		while(corredor != NULL)
		{
			cout<<"LA POSICIÓN NÚMERO "<<pos<<" DE LA LISTA 2 ES: "<<corredor->dato<<endl;
			corredor=corredor->sgt;
			pos++;
		}
	}
	else
	{
		cout<<"\t\tLA LISTA NÚMERO 2 ESTA VACIA"<<endl;
	}
}
//_____________________________________________________________________________________________________________________________________________________________________
void comparar_listas()
{
	cout<<"\t\tCOMPARANDO LAS LISTAS 1 Y 2"<<endl;
	Nodo *corredor1 = new Nodo();
	Nodo *corredor2 = new Nodo();
	bool band = false;
	if(cont1==cont2)
	{
		corredor1=cabeza1;
		corredor2=cabeza2;
		if((cabeza1!=NULL) && (cabeza2!=NULL))
		{
			while((corredor1!=NULL) && (corredor2!=NULL))
			{
				if(corredor1->dato==corredor2->dato)
				{
					band=true;
					corredor1=corredor1->sgt;
					corredor2=corredor2->sgt;
				}
				else
				{
					band=false;
					break;
				}
			}
		}
		if(band==true)
		{
			cout<<"LAS LISTAS SON IGUALES EN TAMAÑO Y EN CONTENIDO"<<endl;
		}
		else
		{
			cout<<"LAS LISTAS SON IGUALES EN TAMAÑO, PERO NO EN CONTENIDO"<<endl;
		}
	}
	else
	{
		cout<<"LAS LISTAS NO SON IGUALES EN TAMAÑO NI CONTENIDO"<<endl;
	}
}
//_____________________________________________________________________________________________________________________________________________________________________
void mayor_listas()
{
	cout<<"\t\tENCONTRANDO EL ELEMENTO DE MAYOR VALOR DE LAS LISTAS 1 Y 2"<<endl;
	Nodo *mayor = new Nodo();
	Nodo *corredor = new Nodo();
	
	bool band1=false, band2=false;
	corredor = cabeza1;
	mayor=corredor;
	if(cabeza1 != NULL)
	{
		band1=true;
		while(corredor!=NULL)
		{
			if(corredor->dato>mayor->dato)
			{
				mayor=corredor;
			}
			corredor=corredor->sgt;
		}
	}
	else
	{
		band1=false;
	}
	
	if(band1==false)
	{
		corredor=cabeza2;
		mayor=corredor;
		if(cabeza2!=NULL)
		{
			band2=true;
			while(corredor!=NULL)
			{
				if(corredor->dato>mayor->dato)
				{
					mayor=corredor;
				}
				corredor=corredor->sgt;
			}
		}
		else
		{
			band2=false;
		}	
	}
	else
	{
		corredor=cabeza2;
		if(cabeza2!=NULL)
		{
			band2=true;
			while(corredor!=NULL)
			{
				if(corredor->dato>mayor->dato)
				{
					mayor=corredor;
				}
				corredor=corredor->sgt;
			}
		}
		else
		{
			band2=false;
		}
	}
	
	
	if((band1==true) || (band2==true))
	{
		cout<<"EL ELEMENTO DE MAYOR VALOR ENTRE LAS LISTAS 1 Y 2 ES: "<<mayor->dato<<endl;
	}
	else
	{
		cout<<"LAS LISTAS 1 Y 2 ESTAN VACIAS"<<endl;
	}
	
}
//_____________________________________________________________________________________________________________________________________________________________________
void llenar_lista3()
{
	cout<<"\t\tLLENANDO LA LISTA NÚMERO 3"<<endl;
	Nodo *nuevo_nodo = new Nodo();
	Nodo *corredor = new Nodo();
	int par;
	bool band1=false, band2=false, band3=false, band4=false; 
	int contador=0, vector[100];
	
	//SACANDO LOS PARES DE LA LISTA 1
	corredor = cabeza1;//corredor se iguala a cabeza de la lista 1
	if(cabeza1 != NULL)//si la lista 1 no esta vacia
	{
		band1=true;//se verico que la lista 1 no esta vacia
		while(corredor!=NULL)//corredor no sea nulo
		{
			par=corredor->dato;
			if(par%2==0)//verifico que el elemento en corredor sea par
			{
				band3=true;
				vector[contador]=par;
				contador+=1;
				
			}
			
			corredor=corredor->sgt;
		}
	}
	else
	{
		//lista 1 vacia
		band1=false;
	}
	
	//SACANDO LOS PARES DE LA LISTA 2
	corredor = cabeza2;//corredor se iguala a cabeza de la lista 1
	if(cabeza2 != NULL)//si la lista 1 no esta vacia
	{
		band2=true;//se verico que la lista 1 no esta vacia
		while(corredor!=NULL)//corredor no sea nulo
		{
			par=corredor->dato;
			if(par%2==0)//verifico que el elemento en corredor sea par
			{
				band4=true;
				vector[contador]=par;
				contador+=1;
				
			}
			
			corredor=corredor->sgt;
		}
	}
	else
	{
		//lista 2 vacia
		band2=false;
	}
	
	
	
	
	if((band3==true) || (band4=true))
	{
		//MOSTARNDO LOS PARES DE LA LISTA 
		for(int i=0; i<contador; i++)
		{
			cout<<vector[i]<<"\t";
		}
		cout<<endl;
		
		// LLENANDO LA LISTA 3 CON LOS PARES
		int j=0;
		do
		{
			nuevo_nodo->dato=vector[j];
			cout<<nuevo_nodo->dato<<endl;
			if(cabeza3==NULL)
			{
				cabeza3=nuevo_nodo;
				cabeza3->sgt=NULL;
				cabeza3->ant=NULL;
				cola3=cabeza3;
				cout<<"ENTRO EN VACIA"<<endl;
				cout<<cabeza3->dato<<endl;
			}
			else
			{
				cola3->sgt=nuevo_nodo;
				nuevo_nodo->sgt=NULL;
				nuevo_nodo->ant=cola3;
				cola3=nuevo_nodo;
				cout<<"NO ENTRO EN VACIA"<<endl;
				cout<<cola3->dato<<endl;				
			}
			j++;
		}while(j<contador);
	}
	
	if((band1==true) || (band2==true))
	{
		if((band3==true) || (band4==true))
		{
			Sleep(2000);
			cout<<"LA LISTA NÚMERO 3 HA SIDO LLENADA EXITOXAMENTE"<<endl;
		}
		else
		{
			cout<<"LAS LISTAS 1 Y 2 NO ESTAN VACIAS, PERO NO CONTIENEN ELEMENTOS PARES EN ELLAS"<<endl;
		}
		
	}
	else
	{
		cout<<"LAS LISTAS 1 Y 2 ESTAN VACIAS"<<endl;
	}
	
	cout<<"\t\tMOSTRANDO ELEMENTOS DE LAS LISTA 3"<<endl;
	corredor=cabeza3;
	corredor=cabeza3;
	if(cabeza3 != NULL)
	{
		int pos = 1;
		while(corredor != NULL)
		{
			cout<<"LA POSICIÓN NÚMERO "<<pos<<" DE LA LISTA 3 ES: "<<corredor->dato<<endl;
			corredor=corredor->sgt;
			pos++;
		}
	}
	else
	{
		cout<<"\t\tLA LISTA NÚMERO 3 ESTA VACIA"<<endl;
	}
}
//_____________________________________________________________________________________________________________________________________________________________________
void mostrar_lista3()
{
	cout<<"\t\tMOSTRANDO ELEMENTOS DE LAS LISTA 3"<<endl;
	Nodo *corredor = new Nodo();
	corredor=cabeza3;
	if(cabeza3 != NULL)
	{
		int pos = 1;
		while(corredor != NULL)
		{
			cout<<"LA POSICIÓN NÚMERO "<<pos<<" DE LA LISTA 3 ES: "<<corredor->dato<<endl;
			corredor=corredor->sgt;
			pos++;
		}
	}
	else
	{
		cout<<"\t\tLA LISTA NÚMERO 3 ESTA VACIA"<<endl;
	}
}
//_____________________________________________________________________________________________________________________________________________________________________
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
					llenar_lista1();
					system("pause");
					system("cls");
					break;
			case 2: system("cls");
					llenar_lista2();
					system("pause");
					system("cls");
					break;
			case 3: system("cls");
					mostrar_lista1();
					system("pause");
					system("cls");
					break;	
			case 4: system("cls");
					mostrar_lista2();
					system("pause");
					system("cls");
					break;	
			case 5: system("cls");
					comparar_listas();
					system("pause");
					system("cls");
					break;	
			case 6: system("cls");
					mayor_listas();
					system("pause");
					system("cls");
					break;		
			case 7: system("cls");
					llenar_lista3();
					system("pause");
					system("cls");
					break;	
			case 8: system("cls");
					mostrar_lista3();
					system("pause");
					system("cls");
					break;							
			case 9: system("cls");
					cout<<"\t\t\tHASTA LA VISTA BABY"<<endl;
					break;
			default: system("cls");
					cout<<"\t\tERROR OPCIÓN INCORRECTA, DIGITE UN NÚMERO ENTRE 1 Y 9"<<endl;
					system("pause");
					system("cls");
					main();	
		}
	}while(op<9);
	

}
