#include<iostream>
#include<conio.h>
using namespace std;
struct Nodo{
	int dato;
	Nodo *sig;
}; 
Nodo *cabeza, *cola;
void InsertarLista(Nodo *&, int);
void MostrarLista(Nodo *);
int main(){
	Nodo *lista= NULL;
	int num, conf=1;
	while(conf != 0){
		cout<<"ingresa un numero: \n";
		cin>>num;
		InsertarLista(lista, num);
		cout<<"Desea agregar otro numero 1 si 0 no";
		cin>>conf;	
	}
	MostrarLista(lista);
}
void InsertarLista(Nodo *&lista, int n){
	Nodo *NuevoNodo = new Nodo();
	NuevoNodo->dato=n;
	if(cabeza ==NULL){// ingresa si la lista esta vacia y agrega el primer nodo a la lista
		cabeza=NuevoNodo;//nuevo nodo apunta en cabeza
		cabeza->sig=cabeza;//se auto referencia porque es el priner nodo.
		cola=cabeza;//cabeza es igual a cola porque es el unico nodo de la lista.
	}
	else{//ya la lista tiene nodos agregados
		cola->sig=NuevoNodo;//apunta la cola a nuevo nodo.
		NuevoNodo->sig=cabeza;//nuevo nodo apunte a cabeza
		cola=NuevoNodo;//el nuevo nodo se convierte en la cola.
	}
	cout<<"Elemento agregado";
}
void MostrarLista(Nodo *lista){
Nodo *corredor = new Nodo();//declaramos el nodo para recorrer.
	corredor = cabeza;//se iguala el nodo que recorre lal ista a la cabeza
	if(cabeza != NULL){//ingresa si la lista tiene elementos
		do{//se implementa el do while para hacer el recorrido en las listas circulares.
			cout<<"--"<<corredor->dato<<"->";//Mostramos el dato contenido en cada nodo.
			corredor = corredor->sig;//avanzamos el nodo hacia el siguiente.		
		}while (corredor != cabeza);//finaliza cuando corredor llegue nuevamente a la cabeza.
	}
	else{
		cout<<"La Lista no tiene elementos."<<endl;// si la lista esta vacia muestra este mensaje.
	}
	
}
