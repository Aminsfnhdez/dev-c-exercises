#include <iostream>

using namespace std;

struct Nodo
{
	int dato;
	Nodo *sgt;
};

void insertar_listas(Nodo *&, int); //&(es la referencia o ubicacion en memoria) *(contenido)
void mostrar_lista(Nodo *);
void buscar_dato(Nodo *, int );
//void borrar_nodo(Nodo *&, int);  //&(es la referencia o ubicacion en memoria) *(contenido)
void BorrarNlista(Nodo *&, int); //&(es la referencia o ubicacion en memoria) *(contenido)
int num;
Nodo *lista=NULL;

main()
{
	setlocale(LC_ALL,"");
	system("color 0b");
	int op,valor,numero;
	cout<<"\tM E N U "<<endl;
	do{
	cout<<"digite una opcion del menu:\n1.Insertar\n2.Mostrar\n3.Buscar\n4.Eliminar\n5.Salir\nR/: ";
	cin>>op;
	switch(op)
	{
		case 1://ingresar
		cout<<"Digite el numero: ";
		cin>>num;
		insertar_listas(lista,num);
		break;
		case 2: //mostrar
		mostrar_lista(lista);
		break;
		case 3:	//buscar
		cout<<"Dato a buscar en la lista: ";
		cin>>valor;
		buscar_dato(lista, valor);
		break;
		case 4://eliminar
		cout<<"\nDigite el dato a eliminar: ";
		cin>>numero;
//		borrar_nodo(lista,numero);
		BorrarNlista(lista,numero);
		break;
	}
	}while(op!=5);
}

//____________________________________________________________________________________________________________________________________
void insertar_listas(Nodo *&lista, int N)
{
	
	Nodo *aux1=lista, *aux2;
	Nodo *nuevo_nodo = new Nodo();       //reservando espacio en memoria para new Nodo
	nuevo_nodo->dato=N;		//nuevo_nodo se le asigna el dato que a su ves es igual a num
		
	while( (aux1!=NULL)&&(aux1->dato<N))
	{   //para ingresar los datos ordenadamente
		aux2=aux1;
		aux1=aux1->sgt; //aux es referenciado al apuntador sgt
	} //termina while
	
	if(lista==aux1)
	{  //en la primera ejecucion(lista vacia) entra directamente
		lista=nuevo_nodo;  //se agrega el Nodo a la lista
	}
	else
	{ //cuando la lista no esta vacia 
	aux2->sgt=nuevo_nodo;	//aux2 toma la posicion de nuevo_nodo
	}
	nuevo_nodo->sgt=aux1;  //nuevo_nodo toma valor de aux1->sgt
	cout<<"\nEl elemento a sido agregado a la lista"<<endl<<endl;
	
}
//____________________________________________________________________________________________________________________________________
void mostrar_lista(Nodo *lista)
{
	Nodo *actual=new Nodo(); //Nodo que permite recorrer la lista para mostrarla
	actual=lista;  //toma la primera pos de la lista (1mer Nodo)
	int i=1;
	while(actual!=NULL)
	{ //ciclo hasta que la lista termine en NULL
		cout<<"pos #"<<i<<": "<<actual->dato<<endl; //imprimiendo
		actual=actual->sgt;  //actual toma la siguiente pos del siguiente Nodo
		i++;
	}
	
}
//____________________________________________________________________________________________________________________________________
void buscar_dato(Nodo *lista, int valor)
{
	Nodo *buscador=new Nodo(); //crear el Nodo recorrido que el dato en la lista
	buscador=lista; //Nodo buscador es igualado a la lista (1mera pos)
	char band='f';
	int pos=1;
	
	if(lista!=NULL)
	{	//si la lista esta vacia no entra
		while((buscador!=NULL)&&(band=='f'))
		{ //ciclo hasta que la lista acabe o se encuentre el valor
			if(buscador->dato==valor)
			{  //si dato en la pos buscador es igual al dato a encontrar, entra!
				cout<<"\nDato encontrado en la posicion #"<<pos<<endl; //si el dato es encontrado, se muestra! junto a su posicion
				band='v';// bandera true
			}//cierre de 2do if
			else
			{ //si el dato no esta en esa posicion del buscador
				buscador=buscador->sgt; //buscador toma la siguiente posicion en la lista 
				pos++;
			}
		}// cierra while
	
	}//cierre 1mer if
	else
	{ //si la lista esta vacia, imprime el sgt comentario
		cout<<"Lista Vacia"<<endl;
	}
	
	if(band=='f')
	{  // si el dato no fue encontrado (band=false) imprime el sgt comentario
		cout<<"\nDato no encontrado en la lista"<<endl;
	}
		
}

//____________________________________________________________________________________________________________________________________
//void borrar_nodo(Nodo *&lista, int numero){
//	char band='f';
//	114-11-4-25
//	if(lista!=NULL){ //si la lista no esta vacia, entra!
//		Nodo *corredor; //Nodo que recorrera el contenido de la lista
//		Nodo *ant_corredor=NULL; //Nodo que evita que la lista se divide en dos al eliminar una posicion(valor de la lista)
//		
//		corredor=lista;
//	
//	while((corredor!=NULL)&&(band=='f')){ //ciclo hasta que la lista acabe o se encuentre el valor
//		if(corredor->dato==numero){
//			lista=lista->sgt;
//			delete corredor;
//			cout<<"\nEl elemento a sido eliminado"<<endl;
//			band='v';
//			
//		}else if(ant_corredor==NULL){
//			ant_corredor=corredor;
//			corredor=corredor->sgt;
//		}
//		
//		else{
//			ant_corredor->sgt=corredor->sgt;
//			delete corredor;
//		}
//		
//	}
//	}//cirre del 1mer if
//	else{//si la lista esta vacia, entra!
//		cout<<"Lista Vacia ;("<<endl;
//	}
//	
//	if(band=='f'){
//		cout<<"numero no encontrado en la lista"<<endl;
//	}
//}

void BorrarNlista(Nodo *&lista, int numero )
{
	if (lista != NULL)
	{// si la lista no esta vacia entra
		Nodo *ant_corredor=NULL , *corredor;// Nodos para encontrar y eliminar
		ant_corredor= lista; // Nodo corredor es igualado a la lista (primera pos o primer Nodo de la lista)
		while ((corredor != NULL) && (corredor->dato != numero)) //se verifica que el Nodo corredor no sea nulo. y que corredor con la asignacion del valor del dato en el nodo sea diferente al que se busca eliminar
		{
			ant_corredor=corredor; //a ant_corredor se le da el valor de corredor
			corredor = corredor->sgt;// el Nodo corredor ahora apunta a la siguiente posicion o al siguiente Nodo de la lista
		}
		if(corredor == NULL)
		{//cuando se verifican todos los nodos de la lista y el elemento que se desea eliminar no esta en la lista
			cout<<"el numero: "<<numero<<" no existe en la lista";
		}
		else if (ant_corredor == NULL)
		{//el elemento que se desea eliminar esta en la primera posicion de la lista
			lista=lista->sgt; //se desplaza la primera posicion de la lista ( el segundo nodo es el primero ahora) 
			delete corredor; //se elimina el que anteriormente era el primer Nodo (corredor fue inicializado o tomo el valor del primer nodo de la lista)
			cout<<"El elemento "<<numero <<" ha sido eliminado de la lista"<<endl;
		}
		else
		{// cuando el elemento es encontrado
			ant_corredor->sgt=corredor->sgt; //aqui el Nodo ant_corredor apuntará a lo que el Nodo corredor apuntaba
			delete corredor;// se elimina el Nodo corredor
			cout<<"El elemento "<<numero <<" ha sido eliminado de la lista"<<endl;
		}
		
	}
	else
	{//cuando la lista esta sin elementos (Nodos)
		cout<<"La lista no tiene elementos esta vacia."<<endl;
	}
	
}


