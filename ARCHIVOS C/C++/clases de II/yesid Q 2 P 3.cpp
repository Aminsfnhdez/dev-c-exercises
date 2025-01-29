#include<iostream>
using namespace std;

struct nodo{
	string nombre;
	int cedula;
	string cargo;
	int salario;
	int sub_trasporte;
	nodo *sgt;
};
nodo *lista=NULL;

void ingresar_datos(nodo *&);
void buscar_CC(nodo *);
void eliminar_CC(nodo *&);
void conSub(nodo *);
void sinSub(nodo *);
void mostrar(nodo *);

main(){
	system("color 0b");
	int op;
	char o;
	do{
	cout<<"M E N U:"<<endl;
	cout<<"1.Ingresar empleados.\n2.Buscar por CC.\n3.Eliminar por CC.\n4.Empleados con subsidio de trasporte."<<endl;
	cout<<"5.Empleados sin subsidio de trasporte.\n6.Todos los empleados.\n7.Salir\nR/: ";
	cin>>op;
	
	switch(op) {
	case 1: //ingresar
			do{
			ingresar_datos(lista);
			cout<<"\nDesea agregar un new empleado? (s/n): ";
			cin>>o;
			}while(o!='n');
	 
	system("pause");
	system("CLS");
	break;
	case 2: //buscar_CC
		buscar_CC(lista);
	 
	system("pause");
	system("CLS");
	break;
	case 3: //eliminar_CC
	eliminar_CC(lista);
	 
	system("pause");
	system("CLS");
	break;
	case 4: //conSub
	conSub(lista);
	 
	system("pause");
	system("CLS");	
	break;
	case 5: //sinSub
	sinSub(lista);		
	 
	system("pause");
	system("CLS");
	break;
	case 6: //mostrar todo
		mostrar(lista);
	 
	system("pause");
	system("CLS");
	break;
	case 7: //Salir
		cout<<"Adios Señor empresario :("<<endl;
	 	delete lista;
	system("pause");
	system("CLS");	
	break;
	default: //otros
	cout<<"\nError[xxx], digite otra opcion"<<endl;
	 
	system("pause");
	system("CLS");
	break;
	}
}while(op!=7);
}
//_____________________________________________________________________________________________________________________
void ingresar_datos(nodo *&lista){
	system("CLS");
	//subcidio de trasporte = $102.854
	string name;
	int cc;
	string pos;
	int money;
	int passport;
	nodo *nuevo_nodo = new nodo();
	nodo *aux1=lista, *aux2;
	
	fflush(stdin);
	cout<<"Nombre del empleado: ";
	getline(cin, name);					//
	cout<<"Cedula: ";
	cin>>cc;fflush(stdin);				// pidiendo datos
	cout<<"Cargo del empleado: ";
	getline(cin, pos);					//
	cout<<"Salario mensual: ";fflush(stdin);
	cin>>money;	
	
	fflush(stdin);
	nuevo_nodo->nombre=name;
	nuevo_nodo->cedula=cc;				//
	nuevo_nodo->cargo=pos;
	nuevo_nodo->salario=money;
	if(money<1755606){					//nuevo_nodo toma valores
	nuevo_nodo->sub_trasporte=(102854);
	}else{
	nuevo_nodo->sub_trasporte=(0);		//
	}
	
	while( (aux1!=NULL)&&(aux1->salario>1755606)){   //para ingresar los datos ordenadamente
		aux2=aux1;
		aux1=aux1->sgt;
	} //termina while
	
	if(lista==aux1){  //en la primera ejecucion(lista vacia) entra directamente
		lista=nuevo_nodo; 
	}
	else{ 					//cuando la lista no esta vacia 
	aux2->sgt=nuevo_nodo;	//aux2 toma la posicion de nuevo_nodo
	}
	nuevo_nodo->sgt=aux1;  //nuevo_nodo toma valor de aux1->sgt
	
}
//_____________________________________________________________________________________________________________________
void buscar_CC(nodo *lista){
	system("CLS");
	int n;
	char band='f';
	nodo *actual = new nodo();
	actual = lista;
	
	if(lista==NULL){
		cout<<"[LISTA VACIA]"<<endl;
	}
	else
	{	
		cout<<"CC que desea consultar: ";
		cin>>n;
		
		while((actual!=NULL)&&(band=='f'))
		{
			if(actual->cedula==n){
			cout<<"\nNOMBRE: "<<actual->nombre<<" CC: "<<actual->cedula<<" CARGO: "<<actual->cargo<<" SALARIO: "<<actual->salario;
			cout<<" S.TRASPORTE: "<<actual->sub_trasporte<<endl;
			band='v';
			}
			actual = actual->sgt;
		}
			if(band=='f'){
				cout<<"\nUSUARIO NO ENCONTRADO"<<endl;
			}
	}
	
}
//_____________________________________________________________________________________________________________________
void eliminar_CC(nodo *&lista){
	system("CLS");
	nodo *borrar = new nodo();
	nodo *anterior = NULL;
	borrar = lista;
	if(lista!=NULL)
	{
		cout<<"\nusuario que desea eliminar CC: ";
		cin>>n;
		
		while((borrar!=NULL)&&(borrar->cedula!=n)){
			anterior=borrar;
			borrar=borrar->sgt;
		}
		
		if(borrar==NULL)
		{
			cout<<"\nCEDULA INCORRECTA!"<<endl;
		}
		else if(anterior==NULL)
		{
			lista=lista->sgt;
			delete borrar;
			cout<<"\nDato eliminado"<<endl;
		}
		else
		{
			anterior->sgt=borrar->sgt;
			delete borrar;
			cout<<"\nDato eliminado"<<endl;
		}
	
	}
	
}
//_____________________________________________________________________________________________________________________
void conSub(nodo *lista){
	system("CLS");
	nodo *actual = new nodo();
	nodo *aux=lista;
	
	if(lista!=NULL)
	{
	
		while((aux!=NULL)&&(aux->sub_trasporte==0))
		{
			aux=aux->sgt;
		}
		
		if(aux==NULL)
		{
			cout<<"\nCERO TRABAJADORES CON SUBSIDIO DE TRASPORTE"<<endl;
		}
		else
		{
			actual=aux;	
			while(actual!=NULL)
			{
				cout<<"\nNOMBRE: "<<actual->nombre<<" CC: "<<actual->cedula<<" CARGO: "<<actual->cargo<<" SALARIO: "<<actual->salario;
				cout<<" S.TRASPORTE: "<<actual->sub_trasporte<<endl;
				actual = actual->sgt;
			}
			cout<<endl;
			
		}
	}//fin 1mer if
	else
	{
		cout<<"\nLISTA VACIA"<<endl;
	}
	
}
//_____________________________________________________________________________________________________________________
void sinSub(nodo *lista){
	system("CLS");
	nodo *actual = new nodo();
	nodo *aux=lista;
	actual=lista;
	
	if(lista!=NULL)
	{
		
		if(aux->sub_trasporte!=0)
		{
			cout<<"\nCERO TRABAJADORES SIN SUBSIDIO DE TRASPORTE"<<endl;
		}
		else
		{
			while((aux!=NULL)&&(aux->sub_trasporte==0))
			{
				aux=aux->sgt;
			}
			
			while(actual!=aux)
			{
				cout<<"\nNOMBRE: "<<actual->nombre<<" CC: "<<actual->cedula<<" CARGO: "<<actual->cargo<<" SALARIO: "<<actual->salario;
				cout<<" S.TRASPORTE: "<<actual->sub_trasporte<<endl;
				actual = actual->sgt;
			}
			cout<<endl;
				
			
		}
	}//fin 1mer if
	else
	{
		cout<<"\nLISTA VACIA"<<endl;
	}
}
//_____________________________________________________________________________________________________________________
void mostrar(nodo *lista){
	system("CLS");
	nodo *actual = new nodo();
	actual = lista;
	if(lista!=NULL)
	{
		while(actual!=NULL)
		{
			cout<<"\nNOMBRE: "<<actual->nombre<<" CC: "<<actual->cedula<<" CARGO: "<<actual->cargo<<" SALARIO: "<<actual->salario;
			cout<<" S.TRASPORTE: "<<actual->sub_trasporte<<endl;
			actual = actual->sgt;
		}
		cout<<endl;
	}
	else
	{
		cout<<"\nLISTA VACIA"<<endl;
	}
	
}
//_____________________________________________________________________________________________________________________

