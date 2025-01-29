#include<stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;

struct Nodo {
	int dato;
	Nodo *sigt;
};
void InsertarCola(Nodo *&, Nodo *&, int);
void Desencolar(Nodo *&, Nodo *&, int &);

Nodo *frente=NULL, *cola=NULL;
int main (){
int num, conf=1;

while (conf != 0){
	cout<<"ingrese un numero, para la cola ";
	cin>>num;
	InsertarCola(frente, cola, num);
	cout<<"desea ingresar otro? 1 si 0 no.   ";
	cin>>conf;
}

}
void InsertarCola(Nodo *&frente, Nodo *&cola, int n){
	Nodo *Nuevo = new Nodo();
	Nuevo->dato = n;
	Nuevo->sigt=NULL;//la cola o el ultimo elemento de la cola simpre debe apuntar a null.
	if (frente == NULL){// aqui se verifica si la cola esta vacia ingresa.
		frente = Nuevo;
	}else 
	{
	cola->sigt = Nuevo;//nuevo toma la posisicion de cola.
	}
	cola= Nuevo;//la cola pasa a ser nuevo.
	cout<<"el elemento "<<n<<" fue agregado a la cola"<<endl;
}

void Desencolar(Nodo *&frente, Nodo *&cola, int &n){
	n=frente->dato;
	Nodo *aux = frente;
	if (frente = cola){
		frente=NULL;//deja la cola vacia.
		cola=NULL;//deja la cola vacia.
	}
	else{
		frente= frente->sigt;// el frente apuntaal nodo que le sigue que pasara aser el frente.
	}
	delete aux;//eliminamos el nodo. que es aux= frente.
	cout<<"Elemento "<<n<<" elmininado.";
}
