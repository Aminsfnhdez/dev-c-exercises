#include<iostream>
using namespace std;

struct Nodo{ 	//parking
	string placa;
	int he;
	int hs;
	Nodo *sig;
};

Nodo *pila=NULL;
int cont=0;

void llenar(string , int, Nodo *&);
void manual(Nodo *&);
void desapilar(Nodo *&);
void sacar(string, Nodo *&);


main(){
	string id;
	int hora_e;
	int hora_s, op;
	
	do{
		cout<<"\tM E N U\n1.Ingresar auto\n2.Sacar carro\n3.Parking\n4.Salir\nR: ";
		cin>>op;
		
		switch(op){
			case 1: //llenar
				cont++;
				fflush(stdin);
				cout<<"PLaca del vehiculo: ";	getline(cin, id);
				cout<<"Hora de entrada: "; 		cin>>hora_e;
				llenar(id, hora_e, pila);
				system("CLS");
				break;
			case 2: //sacar
			fflush(stdin);
			cout<<"\nPlaca del auto a retirar: ";	getline(cin, id);
			sacar(id, pila);
			case 3:
				if(pila==NULL){
					cout<<"Parqueadero vacio \3"<<endl;
				}else{
				cout<<"Total de autos en el parqueadero: "<<cont<<endl;
				cout<<"Primer auto (ultimo en entrar): "<<pila->placa<<endl;	
				}
				
				system("pause");
				system("CLS");
				break;
		}
		
		
	}while(op!=4);
	
}
//___________________________________________________________________________________________________
void llenar(string placa, int he, Nodo *&pila){
	Nodo *nuevo = new Nodo();
	
	nuevo->placa=placa;
	nuevo->he=he;
	nuevo->sig=pila;
	pila=nuevo;
	
	system("CLS");
	system("color 80");
	cout<<"\t\tP A R K I N G"<<endl;
	cout<<" Placa: "<<placa<<endl;
	cout<<"Hora de entrada: "<<he<<endl;
	cout<<"\nPor favor traer recibo al retirar el auto ;)"<<endl;
	system("pause");
	system("color 07");
}
//___________________________________________________________________________________________________
void manual(Nodo *&pila, string placa, int he){
	Nodo *nuevo = new Nodo();
	nuevo->placa=placa;
	nuevo->he=he;
	nuevo->sig=pila;
	pila=nuevo;
}
//___________________________________________________________________________________________________
void desapilar(Nodo *&pila){
	Nodo *aux=pila;
	pila=aux->sig;
	delete aux;
}
//___________________________________________________________________________________________________
void sacar(string placa, Nodo *&pila){
	Nodo *aux;
	int salida, total, horas;
	char band='f';
	
	while(pila!=NULL){
		if(pila->placa==placa){
			cout<<"\nHora de salida: ";
			cin>>salida;
			pila->hs=salida;
			horas=pila->hs-pila->he;
			total=3000*horas;
			//recibo
			system("CLS");
			system("color 80");
			cout<<"\t\tP A R K I N G"<<endl;
			cout<<" Placa: "<<placa<<endl;
			cout<<"\n\tHora de entrada: "<<pila->he<<endl;
			cout<<"\n\thora  de salida: "<<pila->hs<<endl;
			cout<<"Total a pagar: "<<total<<endl;
			cout<<"\nGRACIAS POR PREFERIRNOS <3"<<endl;
			system("pause");
			system("color 07");
			desapilar(pila);
			band='v';
		}else{
		manual(aux, pila->placa, pila->he);
		desapilar(pila);
		}
	}
	if(band=='f'){
		cout<<"\nEl auto nunca ingreso (no nos hacemos responsable)"<<endl;
	}
//	
//	while(aux!=NULL){
//		manual(pila, aux->placa, aux->he);
//		desapilar(aux);
//	}
	
}




