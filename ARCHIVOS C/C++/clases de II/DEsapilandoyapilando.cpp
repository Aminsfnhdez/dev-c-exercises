//Pilas
#include<iostream>
using namespace std;
//creacion del elemento de la pila
struct Nodo {
    int dato;
    Nodo *sigt;
};
//llenado y vaciado de la pila
void agregarpila(Nodo *&, int );
void sacarpila(Nodo *&, int &);
void buscarpila(int);
void imprimirpila(Nodo *&);
//pila principal y auxiliar vacia al inicio
Nodo *pila = NULL, *paux=NULL;
//ciclo principal
int main (){
    int num, conf= 1;
    while(conf!=0){
        cout<<"ingrese un numero a la Pila"<<endl;
        cin>>num;
        agregarpila(pila, num);
        cout<<"¿desea agregar otro? 1 si o 0 para terminar ingreso"<<endl;
        cin>>conf;
    }
    cout<<"ingrese dato a buscar"<<endl;
    cin>>num;
    buscarpila(num);
    //Imprimir la pila resultante
    imprimirpila(pila);
   
    //while (pila != NULL){
    //    cout<<"El numero "<<pila->dato<<" fue eliminado"<<pila<<endl;
    //    sacarpila(pila, pila->dato);  
    //}
}

void agregarpila(Nodo *&pila, int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->sigt= pila;
    pila = nuevo_nodo;
    cout<<"El numero "<<n<<" fue agregado correctamente a la Pila "<<pila<<endl;
}

void sacarpila(Nodo *&pila, int &n){
    Nodo *aux = pila;
    n = aux->dato;
    cout<<"El numero "<<n<<" fue eliminado correctament de la Pila "<<pila<<endl;
    pila = aux->sigt;
    delete aux;
}

void buscarpila(int n){
   cout<<"buscando dato..."<<endl;
    while (pila != NULL){
        if (pila->dato != n){
            agregarpila(paux, pila->dato);
            sacarpila(pila, pila->dato);  
        }
        else{
            //dato encontrado y retirado de la pila
            sacarpila(pila, pila->dato);
        }
    }
    //se pasan los datos de la pila auxiliar a la principal
    while (paux != NULL){
        agregarpila(pila, paux->dato);
        sacarpila(paux, paux->dato);
    }
    
}

void imprimirpila(Nodo *&pila){
    int n;
    while (pila != NULL){
        Nodo *aux = pila;
        n = aux->dato;
        cout<<"El numero "<<n<<" pertenece a la Pila "<<pila<<endl;
        pila = aux->sigt;
    }
}
