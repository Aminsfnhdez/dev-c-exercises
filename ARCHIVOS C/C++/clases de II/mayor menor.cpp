#include<iostream>
#include<conio.h>
using namespace std;
struct Nodo{
	string marca;
	string modelo;
	int rendimiento;
	Nodo *sig;
}; 
string marca, modelo;
int rendimiento;
Nodo *lista=NULL;
Nodo *cabeza, *cola;
void InsertarLista();
void MostrarLista();
void MayorRendimiento()
{
	Nodo *mayor= new Nodo();
	Nodo *corredor = new Nodo();//declaramos el nodo para recorrer.
	corredor = cabeza;//se iguala el nodo que recorre lal ista a la cabeza
	mayor=corredor;
	if(cabeza != NULL){//ingresa si la lista tiene elementos
		do{//se implementa el do while para hacer el recorrido en las listas circulares.
			if(corredor->rendimiento>mayor->rendimiento)
			{
				mayor=corredor;
			}
			corredor = corredor->sig;//avanzamos el nodo hacia el siguiente.		
		}while (corredor != cabeza);//finaliza cuando corredor llegue nuevamente a la cabeza.
	}
	else{
		cout<<"La Lista no tiene elementos."<<endl;// si la lista esta vacia muestra este mensaje.
	}
	
	cout<<"EL VEHICULO CON MAYOR RENDIMIENTO ES"<<endl;
	cout<<"MARCA: "<<mayor->marca<<endl;
	cout<<"MODELO: "<<mayor->modelo<<endl;
	cout<<"RENDIMIENTO: "<<mayor->rendimiento<<endl<<endl;
}
void MenorRendimineto()
{
	Nodo *menor= new Nodo();
	Nodo *corredor = new Nodo();//declaramos el nodo para recorrer.
	corredor = cabeza;//se iguala el nodo que recorre lal ista a la cabeza
	menor=corredor;
	if(cabeza != NULL){//ingresa si la lista tiene elementos
		do{//se implementa el do while para hacer el recorrido en las listas circulares.
			if(corredor->rendimiento<menor->rendimiento)
			{
				menor=corredor;
			}
			corredor = corredor->sig;//avanzamos el nodo hacia el siguiente.		
		}while (corredor != cabeza);//finaliza cuando corredor llegue nuevamente a la cabeza.
	}
	else{
		cout<<"La Lista no tiene elementos."<<endl;// si la lista esta vacia muestra este mensaje.
	}
	
	cout<<"EL VEHICULO CON MENOR RENDIMIENTO ES"<<endl;
	cout<<"MARCA: "<<menor->marca<<endl;
	cout<<"MODELO: "<<menor->modelo<<endl;
	cout<<"RENDIMIENTO: "<<menor->rendimiento<<endl<<endl;
}
int main(){
//	Nodo *lista= NULL;
	int num, conf=1;
	while(conf != 0){
		InsertarLista();
		cout<<"Desea agregar otro numero 1 si 0 no";
		cin>>conf;	
	}
	MostrarLista();
	MayorRendimiento();
	MenorRendimineto();
}
void InsertarLista(){
	fflush(stdin);
	Nodo *NuevoNodo = new Nodo();
	cout<<"INGRESE LA MARCA DEL VEHICULO: ";
	getline(cin,marca);
	cout<<"INGRESE EL MODELO DEL VEHICULO: ";
	getline(cin,modelo);
	cout<<"INGRESE LE RENDIMIENTO DEL VEHICULO: ";
	cin>>rendimiento;
	NuevoNodo->marca=marca;
	NuevoNodo->modelo=modelo;
	NuevoNodo->rendimiento=rendimiento;
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
void MostrarLista(){
Nodo *corredor = new Nodo();//declaramos el nodo para recorrer.
	corredor = cabeza;//se iguala el nodo que recorre lal ista a la cabeza
	if(cabeza != NULL){//ingresa si la lista tiene elementos
		do{//se implementa el do while para hacer el recorrido en las listas circulares.
			cout<<endl<<"--"<<corredor->marca<<"->";//Mostramos el dato contenido en cada nodo.
			cout<<"--"<<corredor->modelo<<"->";//Mostramos el dato contenido en cada nodo.
			cout<<"--"<<corredor->rendimiento<<"->";//Mostramos el dato contenido en cada nodo.
			cout<<endl;
			corredor = corredor->sig;//avanzamos el nodo hacia el siguiente.		
		}while (corredor != cabeza);//finaliza cuando corredor llegue nuevamente a la cabeza.
	}
	else{
		cout<<"La Lista no tiene elementos."<<endl;// si la lista esta vacia muestra este mensaje.
	}
	
}
