#include<iostream>
#include<stdlib.h>
using namespace std;

struct nodo{
	int dato;
	nodo *sig;
	nodo *ant;
};
void Menu();
void InsertarNodo(nodo *&, int);
void MostrarLista(nodo *);
nodo *cabeza, *cola;
nodo *lista;
int num;
int main () {
	Menu();
}
void Menu(){
	int Opc,num,nb;
	do{
		cout<<"Menu:\n";
		cout<<"1. agregar elemento a lista \n";
		cout<<"2. Mostar Lista \n";
		cout<<"3. Salir \n";
		cout<<"Opcion: ";
		cin>>Opc;
		cin.ignore();
		switch(Opc){
			case 1:
				cout<<"ingresa el elemento de la lista"<<endl;
				cin>>num;
				InsertarNodo(lista,num);
				system("pause");
				break;
			case 2:
				MostrarLista(lista);			
				cout<<endl;
				system("pause");
				break;
			case 3:
				break;
			default: cout<<"por favor selecciona una opcion del menú";
			cout<<endl;
			system("pause");
		}
		system("cls");
	} while(Opc != 3);
}

void InsertarNodo(nodo *&lista, int n){
	nodo *nuevo = new nodo();//este sera el nodo que vamos a agregar.
	nuevo->dato= n;
	if (cabeza == NULL)
	{//si entra aqui la lista esta vacia se agregara el primer elemento.
		cabeza = nuevo;//nuevo pasa a ser cabeza.
		cabeza->sig = NULL;//como es el primer nodo siguiente apunta a null
		cabeza->ant= NULL;//como es el primer nodo anterior apunta a null
		cola=cabeza;//cola es igual a cabea porque es el primer nodo.
	}
	else{
		cola->sig=nuevo;//enlazamos el ultimo con el nuevo nodo.
		nuevo->sig=NULL;//Como sera el ultimo siguiente apunta a null
		nuevo->ant=cola;//en su apuntadora anterior apunta a la cola actual.
		cola= nuevo;//y el nuevo nodo pasa a ser la cola.
	}
	cout<<"nodo agregado correctamente. \n";
}
void MostrarLista(nodo *lista){
	nodo *corredor = new nodo ();
	corredor = cabeza;//el recorrido lo hace de la cabeza a la cola.
	if(cabeza != NULL)
	{
		while (corredor != NULL)
		{
			cout<<corredor->dato<<"\n";
			corredor = corredor->sig;
		}	
	}
	else{
		cout<<"La lista esta vacia \n";
	}
}
