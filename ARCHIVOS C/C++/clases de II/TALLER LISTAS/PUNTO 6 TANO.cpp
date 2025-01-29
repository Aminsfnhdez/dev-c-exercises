//YCTE
#include <iostream>

using namespace std;

struct nodo
{
	string nombre;
	int edad;
	string sexo;
	nodo *sgt;
};

void insertar_lista();
void mostrar_lista();

nodo *lista=NULL;
string nombre,sexo;
int r=1,edad,cont=0;

main()
{
	insertar_lista();
	mostrar_lista();
}

void insertar_lista()
{
	while (r==1)
	{
		system("cls");
		fflush(stdin);
		nodo *nuevo_nodo=new nodo();
		if (cont==0)
		{
			cout<<"Digite el sexo: ";
			//cin.ignore();
			getline(cin,sexo);
			nuevo_nodo->sexo=sexo;
		}
		if (cont>0)
		{
			if ((sexo=="F") || (sexo=="f"))
			{
				sexo='M';
				nuevo_nodo->sexo=sexo;
				cout<<"Sexo: "<<nuevo_nodo->sexo<<endl;
			}
			else
			{
				if ((sexo=="M") || (sexo=="m"))
				{
					sexo='F';
					nuevo_nodo->sexo=sexo;
					cout<<"Sexo: "<<nuevo_nodo->sexo<<endl;
				}
			}
		}
		cout<<"Digite el nombre: ";
		getline(cin,nombre);
		cout<<"Digite la edad: ";
		cin>>edad;
		nodo *aux;
		nuevo_nodo->nombre=nombre;
		nuevo_nodo->edad=edad;
		nuevo_nodo->sgt=NULL;
		if (lista==NULL)
		{
			lista=nuevo_nodo;
		}
		else
		{
			aux=lista;
			while (aux->sgt!=NULL)
			{
				aux=aux->sgt;
			}
			aux->sgt=nuevo_nodo;
		}
		cout<<"\nElemento guardado correctamente."<<endl;
		cout<<"\nDesea guardar otro elemento 1-SI o 2-NO: ";
		cin>>r;
		if (r==1)
		{
			cont++;
			r=1;
		}
		else
		{
			mostrar_lista();
			r=2;
		}
	}
	cout<<"\n";
	system("pause");
}

void mostrar_lista()
{
	system("cls");
	cout<<"\nMostrar lista completa: ";
	cout<<"\n"<<endl;
	nodo *actual=new nodo();
	actual=lista;
	while (actual!=NULL)
	{
		cout<<actual->nombre<<" -> ";
		cout<<actual->edad<<" -> ";
		cout<<actual->sexo<<" -> ";
		cout<<"\n";
		actual=actual->sgt;
	}
}

