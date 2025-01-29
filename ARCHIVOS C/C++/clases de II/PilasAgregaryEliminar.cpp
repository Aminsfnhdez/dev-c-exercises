//Pilas
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct Nodo {
	int dato;
	Nodo *sigt;
};
void agregarpila(Nodo *&, int );
void sacarpila(Nodo *&, int &);
Nodo *pila = NULL;
int main (){

 int num, conf= 1;
 while(conf!=0){
 cout<<"ingrese un numero a la Pila"<<endl;
 cin>>num;
 agregarpila(pila, num);
 cout<<"¿desea agregar otro? 1 si o 0 para terminar"<<endl;
 cin>>conf;
 }
 while (pila != NULL){
 	sacarpila(pila, num);
 	if (pila !=NULL){
 		cout<<num<<", ";
	 }
	 else {
	 	cout<<num<<". ";
	 }
 }
 
 
}

void agregarpila(Nodo *&pila, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->sigt= pila;
	pila = nuevo_nodo; 
	cout<<"El numero "<<n<<" fue agregado correctament a la Pila"<<endl;
}
void sacarpila(Nodo *&pila, int &n){
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->sigt;
	delete aux;
}
