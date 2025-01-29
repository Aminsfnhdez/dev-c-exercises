#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct Nodo{
	int dato;
	Nodo *sig;
};
void Menu();
void InsertarLista(Nodo *&, int );//Prototipo de la funcion insertar elemento a lista
void Mostrarlista(Nodo *);//Prototipo de la funcion mostrar elementos de la lista
void Buscarenlista(Nodo *, int);//Prototipo de la funcion buscar elemento a lista
void BorrarNlista(Nodo *&, int);//Prototipo de la funcion borrar elemento a lista
Nodo *lista = NULL;
int main(){
	setlocale(LC_ALL, "");
	Menu();
	}
void Menu(){
	int Opc,num,nb;
	do{
		cout<<"Menu:\n";
		cout<<"1. agregar Elementos a lista \n";
		cout<<"2. Mostar Lista llena\n";
		cout<<"3. buscar en lista \n";
		cout<<"4. Elimiar un elemento de la lista \n";
		cout<<"5. Salir \n";
		cout<<"Opcion: ";
		cin>>Opc;
		switch(Opc){
			case 1:
				cout<<"ingresa un numero a la lista"<<endl;
				cin>>num;
				InsertarLista(lista, num);
				cout<<endl;
				system("pause");
				break;
			case 2:
				Mostrarlista(lista);			
				cout<<endl;
				system("pause");
				break;
			case 3:
				cout<<"ingrese el numero a buscar";
				cin>>nb;
				Buscarenlista(lista,nb);
				cout<<endl;
				system("pause");
				break;
			case 4:
				cout<<"ingrese el numero a borrar";
				cin>>nb;
				BorrarNlista(lista, nb);
				cout<<endl;
				system("pause");
				break;
			case 5:
				break;
			default: cout<<"por favor selecciona una opcion del menú";
			cout<<endl;
			system("pause");
		}
		system("cls");
	} while(Opc != 5);
	
	
}
void InsertarLista(Nodo *&lista, int n){
	Nodo *nuevoNodo = new Nodo(); //se crea el nodo para luego porder agregarlo a la lista, y a la vez se reserva su espacio en memoria
	nuevoNodo->dato =n;//se ingresa el dato capturado por pantalla y enviado al método.
	Nodo *aux1 = lista; //se crea nodo auxiliar y se pone a apuntar a donde apunta lista, osea al primer nodo.
	Nodo *aux2; //se crea otro nodo auxiliar, para ayudar a insertar nodos en cualquier posicion de la lista y hacerlo de forma ordena.
	while ((aux1 != NULL)&&(aux1->dato < n)) {//este while es para agregar nodos, si la lista ya contiene al menos uno, y los ingresa en orden ascendente.
		aux2= aux1;//reservo hacia donde apunta aux1.
		aux1= aux1->sig;//movilizo a aux1 hacia donde esta apuntando siguiente.
	}
	if (lista == aux1){ //condicional para agregar el primer nodo de la lista.
		lista = nuevoNodo; //agrego el nodo a la lista.
	}
	else{//si ya la lista tiene nodos, entra al while y luego a este else.
		aux2->sig =nuevoNodo;//enlazamos aux2 con nuevo nodo.
	}
	nuevoNodo->sig = aux1;
}
void Mostrarlista(Nodo *lista){
	Nodo *corredor = new Nodo();//se crea el nodo para porder recorrer la lista, y a la vez se reserva su espacio en memoria
	corredor = lista;//se pone a apuntar a lista es decir al primer nodo.
	while (corredor != NULL){//recorre la lista mienstras contenga elementos y no apunte a null.
	cout<<corredor->dato<<endl;//se muestra el elemento en pantalla.
	corredor = corredor->sig;	//se avanza al siguente nodo de la lista.
	}
	
}
void Buscarenlista(Nodo *lista, int n){
	Nodo *corredor = new Nodo();
	bool e=false;
	corredor = lista;
	while (corredor != NULL){
	if (corredor->dato ==n){
		e=true;
	}
	corredor = corredor->sig;	
	}
	if(e){
		cout<<"Encontrado"<<endl;
	}
	else{
		cout<<"no Encontrado"<<endl;
	}
}
void BorrarNlista(Nodo *&lista, int numb ){
	if (lista != NULL){//ingresa si la lista no esta vacia.
		Nodo *Cborrar, *Cante=NULL; //creando variables auxiliares para recorrer y encontrar el elemento a borrar.
		Cborrar= lista;//se pone cborrar a apuntar a la lista. 
		while ((Cborrar != NULL) && (Cborrar->dato != numb)){//este wuile es para recorrer la lista.
		Cante=Cborrar;//vamos corriendo los punteros, para hacer el recorrido.
		Cborrar = Cborrar->sig;//avanzamos una posicion en la lista a este auxiliar.
		}
		if(Cborrar == NULL){//Ingresa aqui si no encontro el elemento.
			cout<<"el numero: "<<numb<<" no existe en la lista";
		}
		else if (Cante == NULL){//si ingresa aqui es porque el primer elemento sera eliminado. es el que se busca.
			lista=lista->sig;//se pone la lista a apuntar al segundo nodo que sera el primero en adelante.
			delete Cborrar;//se borra el nodo.
			cout<<"El elemento "<<numb <<" ha sido eliminado de la lista"<<endl;
		}
		else{//  si no entro en los anteriores quiere decir que si entro al while. lo encontro pero no es es el primero. 
			Cante->sig=Cborrar->sig;//con los auxiliares sabemos donde esta el nodo a borrar.
			delete Cborrar;
			cout<<"El elemento "<<numb <<" ha sido eliminado de la lista"<<endl;
		}
		
	}
	else {
		cout<<"La lista no tiene elementos esta vacia."<<endl;
	}
	
}
