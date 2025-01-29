#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

struct Nodo
{
	string nombre; 
	string sexo;
	int edad;	
	Nodo *sgt;
};
Nodo *lista=NULL;
int op, n_edad;
string n_sexo;
string n_nombre;
void menu()
{
	cout<<"\t\t\tTALLER DE LISTAS PUNTO 6"<<endl;
	cout<<"1. PARA LLENAR LA LISTA DE ALUMNOS"<<endl;
	cout<<"2. PARA CONSULTAR (MOSTRAR) LA LISTA"<<endl;
	cout<<"3. PARA SALIR"<<endl;
	cout<<"DIGITE SU OPCIÓN: ";
	
}
//__________________________________________________________________________________________________________________________________________
void llenar_lista()
{
	int r=1;
	do
	{
		fflush(stdin);
		cout<<"\t\tINGRESANDO ELEMENTOS A LA LISTA"<<endl;
		Nodo *nuevo_nodo = new Nodo();
		Nodo *aux;
		
		if(lista==NULL)
		{
			cout<<"DIGITE EL SEXO DEL PRIMER INTEGRANTE DE LA LISTA "<<endl<<"'M' Ó 'm'. SI ES MASCULINO"<<endl<<"'F' Ó 'f'. SI ES FEMENINO"<<endl;
			cout<<"DIGITE AQUI: ";
			//cin.ignore();
			getline(cin,n_sexo);
			if((n_sexo=="f") || (n_sexo=="F"))
			{
				n_sexo='F';
			}
			if((n_sexo=="m") || (n_sexo=="M"))
			{
				n_sexo='M';
			}
			nuevo_nodo->sexo=n_sexo;	
		}
		
		if(lista!=NULL)
		{
			if((n_sexo=="f") || (n_sexo=="F") /*|| (n_sexo=="femenino") || (n_sexo=="FEMENINO")*/)
			{
				n_sexo='M';
				nuevo_nodo->sexo=n_sexo;
				cout<<"INGRESANDO UN ALUMNO DE SEXO: "<<((nuevo_nodo->sexo=="M")? " MASCULINO ":" NO CUMPLE ")<<endl;
			}
			else
			{
				if((n_sexo=="m") || (n_sexo=="M") /*|| (n_sexo=="masculino") || (n_sexo=="MASCULINO")*/)
				{
					n_sexo='F';
					nuevo_nodo->sexo=n_sexo;
					cout<<"INGRESANDO UN ALUMNO DE SEXO: "<<((nuevo_nodo->sexo=="F")? " FEMENINO ":" NO CUMPLE ")<<endl;
				}
			}
		}
		
		cout<<"DIGITE EL NOMBRE DEL ALUMNO: ";
		getline(cin,n_nombre);
		cout<<"DIGITE LA EDAD DEL ALUMNO: ";
		cin>>n_edad;
		nuevo_nodo->nombre=n_nombre;
		nuevo_nodo->edad=n_edad;
		nuevo_nodo->sgt=NULL;
		
		if(lista==NULL)
		{
			lista=nuevo_nodo;
		}
		else
		{
			aux=lista;
			while(aux->sgt!=NULL)
			{
				aux=aux->sgt;
			}
			aux->sgt=nuevo_nodo;
		}
		
//		Nodo *aux1 = lista, *aux2;
		
		
////		cin.ignore(numeric_limits<int>::max(),'\n');
//		cout<<"DIGITE EL NOMBRE DEL ALUMNO"<<endl; 
//		cout<<"DIGITE AQUI: ";	cin>>n_nombre;	/*getline(cin, n_nombre)*/	/*cin.getline(n_nombre, 30, '\n');*/ /*cin.get(n_nombre);*/ fflush(stdin);
//		nuevo_nodo->nombre=n_nombre;	
//		
//		cout<<"DIGITE LA EDAD DEL ALUMNO"<<endl; 
//		cout<<"DIGITE AQUI: ";	cin>>n_edad;	fflush(stdin);
//		nuevo_nodo->edad=n_edad;	
//		
//		cout<<"DIGITE EL SEXO DEL ALUMNO"<<endl; 
//		cout<<"DIGITE AQUI: ";	cin>>n_sexo;	/*cin.get(n_sexo);*/ fflush(stdin);
//		nuevo_nodo->sexo=n_sexo;	
//		
//		while((aux1!=NULL)&&(aux1->sexo!=n_sexo))
//		{
//			aux2=aux1;	aux1=aux1->sgt;
//		}
//		
//		if(lista == aux1)
//		{
//			lista = nuevo_nodo;
//		}
//		else
//		{
//			aux2->sgt=nuevo_nodo;
//		}
//		nuevo_nodo->sgt=aux1;
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
			cout<<endl<<"EL NOMBRE DEL ESTUDIANTE NÚMERO "<<i<<" DE LA LISTA ES: "<<corredor->nombre<<endl;
			cout<<"LA EDAD DEL ESTUDIANTE NÚMERO "<<i<<" DE LA LISTA ES: "<<corredor->edad<<endl;
			cout<<"EL SEXO DEL ESTUDIANTE NÚMERO "<<i<<" DE LA LISTA ES: "<<((corredor->sexo =="M")? " MASCULINO ":" FEMENINO ")<<endl<<endl;
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
					cout<<"\t\t\tHASTA LA VISTA BABY"<<endl;
					break;
			default: system("cls");
					cout<<"\t\tERROR OPCIÓN INCORRECTA, DIGITE UN NÚMERO ENTRE 1 Y 3"<<endl;
					system("pause");
					system("cls");
					main();	
		}
	}while(op<3);
	

}
