#include <iostream>
#include <stdlib.h>
using namespace std;

struct nodo{
	int info;
	nodo *sgt;
};

void insertar_listas();
void buscar_dato();
nodo *cabeza=NULL;
nodo *nuevo;
int num,valor;
main(){
	int op;
	
	cout<<"\tM E N U "<<endl;
	do{
		cout<<"digite una opcion del menu:\n1.Insertar\n2.Buscar\nR/: ";
		cin>>op;
		switch(op){
			case 1://ingresar
			insertar_listas();
			break;
			case 2://buscar
			buscar_dato();
			break;
		}
	}while(op!=3);
}
void insertar_listas(){
int i=1,dato;
cout<<"Digite la cantidad de datos que va a ingresar : ";
cin>>num;
while(i<=num)
{
    nuevo=new nodo();
    nuevo->sgt=cabeza;
    cout<<"Entre dato=";
    cin>>dato;
    nuevo->info=dato;
    cabeza=nuevo;
    i++;
}
cout<<"\n";
int pos=1;
while(nuevo!=NULL){
    cout<<"\nDato "<<" en la pos "<<pos<<" es: "<<nuevo->info;
    nuevo=nuevo->sgt;
    pos++;
}
    cout<<"\n\n";
    system("pause");
//    system("CLS");
}
void buscar_dato(){
	cout<<"Dato a buscar en la lista: ";
	cin>>valor;
	nodo *buscador=new nodo(); 
	buscador=cabeza; 
	char band='f';
	int pos=1;
	
	if(cabeza!=NULL)
	{
		while((buscador!=NULL)&&(band=='f'))
		{
			if(buscador->info==valor)
			{  
				cout<<"\nDato encontrado en la posicion #"<<pos<<endl; 
				band='v';
			}
			else
			{
				buscador=buscador->sgt;
				pos++;
			}
		}
	}
	else{ 
		cout<<"Lista Vacia"<<endl;
	}
	
	if(band=='f'){  
		cout<<"\nDato no encontrado en la lista"<<endl;
	}
		
}


