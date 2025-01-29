#include<iostream>
#include<stdlib.h>
using namespace std;
struct nodo {
	int infdato;
	struct nodo *siguiente;
};
main(){
	struct nodo *cabeza;
	struct nodo *nuevo;
	struct nodo *aux;
	struct nodo *cola;
	cabeza=NULL;
	int dato;
	int nnodos, x =1, cont;
	cout<<"ingresa la cantidad de datos a registrar: ";
	cin>>nnodos;
	while (nnodos>=x){
			nuevo=(struct nodo*)malloc(sizeof(struct nodo));
			nuevo -> siguiente = cabeza;
			cout<<"ingresa el dato: ";
			cin>>dato;
			nuevo ->infdato=dato;
			cabeza=nuevo;
			nnodos--; 
						
	}
	while (nuevo!=NULL)
	{
		cout<<endl<<endl<<"\t"<<nuevo->infdato;//es para mostrar
		nuevo=nuevo->siguiente;
	}
	
	
	}

