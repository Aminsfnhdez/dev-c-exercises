#include<iostream>
using namespace std;

struct Nodo{
	int dato;
	Nodo *sig;	
};

Nodo *pila=NULL;
int suma=0;
int cont=0;
int multiplicacion=1;
int resta=0;
int promedio=0;

void llenar(Nodo *&, int);
void sacar(Nodo *&);
void calcular(Nodo *&);


main(){
	int N, op;
	
	do{
		
	cout<<"\t\tMENU:\n1.Llenar\n2.Suma de los elementos\n3.Multiplicacion de los elementos\n4.Resta de los pares\n5.Promedio total\n6.Salir\nR: ";
	cin>>op;
	
	switch(op){
		case 1:
			cont++;
			cout<<"\nDigite un numero: ";
			cin>>N;
			llenar(pila, N);
			system("pause");
			system("CLS");
			break;
		case 2: //suma
			calcular(pila);
			cout<<"\nLa suma total de la pila es: "<<suma<<endl;
			system("pause");
			system("CLS");
			break;
		case 3: //multi
			cout<<"\nLa multiplicacion de los impares de la pila es: "<<multiplicacion<<endl;
			system("pause");
			system("CLS");
			break;
		case 4: //resta
			cout<<"\nLa resta de los pares con la suma total es: "<<resta<<endl;
			system("pause");
			system("CLS");
			break;
		case 5: //promedio
			cout<<"El promedio final de la pila es: "<<promedio<<endl;
			system("pause");
			system("CLS");
			break;
		case 6:
			cout<<"\n A D I O S :("<<endl;
			break;
		default:
			cout<<"error[101]"<<endl;
			system("pause");
			system("CLS");
			break;
	}
	
	
	
	}while(op!=6);//salir
	
}

//____________________________________________________________________________________________
void llenar(Nodo *&pila, int n){
	Nodo *nuevo = new Nodo();
	nuevo->dato=n;
	nuevo->sig=pila;
	pila=nuevo;
	cout<<"#"<<n<<" Agregado a la Pila :)"<<endl;
}
//____________________________________________________________________________________________
void sacar(Nodo *&pila){
	Nodo *aux=pila;
	pila=aux->sig;
	delete aux;
}
//____________________________________________________________________________________________
void calcular(Nodo *&pila){
	Nodo *aux=pila;
	
	while(pila!=NULL){
		suma=suma+pila->dato;
		if(pila->dato%2==0){
			resta=resta+pila->dato;
		}else{
			multiplicacion=multiplicacion*pila->dato;
		}
		llenar(aux, pila->dato);
		sacar(pila);
	}
	resta=suma-resta;
	promedio=suma/cont;
}


