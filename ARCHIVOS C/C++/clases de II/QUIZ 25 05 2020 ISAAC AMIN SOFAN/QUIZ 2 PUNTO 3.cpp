#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

struct Nodo
{
	string nombre;
	int cedula;
	string cargo;
	int salario;
	int sub_trasporte;
	Nodo *sgt;
};
//____________________________________________________________________________________________________________________________________________________________________
Nodo *lista = NULL;
string nombre, cargo;
int cedula, salario, sub_transporte,cedula_buscar, op;
//____________________________________________________________________________________________________________________________________________________________________

void menu()
{
	cout<<"\t\t\tQUIZ 2 DE ALGORITMOS PUNTO 2"<<endl;
	cout<<"1. PARA INGRESAR EMPLEADOS"<<endl;
	cout<<"2. PARA BUSCAR POR CEDULA"<<endl;
	cout<<"3. PARA ELIMINAR POR CEDULA"<<endl;
	cout<<"4. PARA MOSTRAR EL TOTAL DE EMPLEADOS CON SUBSIDIO"<<endl;
	cout<<"5. PARA MOSTRAR EL TOTAL DE EMPLEADOS SIN SUBSIDIO"<<endl;
	cout<<"6. PARA MOSTRAR TODOS LOS EMPLEADOS"<<endl;
	cout<<"7. PARA SALIR"<<endl;
	cout<<"DIGITE SU OPCIÓN: ";
}
//____________________________________________________________________________________________________________________________________________________________________
void llenar_lista()
{
	int r=1;
	do
	{
		fflush(stdin);
		cout<<"\t\tINGRESANDO DATOS DE LOS EMPLEADOS "<<endl;
		Nodo *nuevo_nodo = new Nodo();
		Nodo *aux1=lista, *aux2;
		cout<<"DIGITE EL NOMBRE DEL EMPLEADO : ";
		getline(cin,nombre); 
		cout<<"DIGITE LA CEDULA DEL EMPLEADO : ";
		cin>>cedula;
		cout<<"DIGITE EL CARGO DEL EMPLEADO : ";
		getline(cin,cargo);
		cout<<"DIGITE EL SALARIO DEL EMPLEADO : ";
		cin>>salario;
		
		nuevo_nodo->nombre=nombre;
		nuevo_nodo->cedula=cedula;
		nuevo_nodo->cargo=cargo;
		nuevo_nodo->salario=salario;
		
		if(salario<1755606)
		{
			nuevo_nodo->sub_trasporte=(102854);
		}
		else
		{
			nuevo_nodo->sub_trasporte=(0);
		}
		
		while((aux1!=NULL) && (aux1->salario>1755606))
		{
			aux2=aux1;
			aux1=aux1->sgt;
		}
		
		if(lista==aux1)
		{
			lista=nuevo_nodo;
		}
		else
		{
			aux2->sgt=nuevo_nodo;
		}
		nuevo_nodo->sgt=aux1;
		
		cout<<endl<<"¿DESEA INGRESAR OTRO EMPLEADO?"<<endl;
		cout<<"1. SI"<<endl<<"2. NO"<<endl;
		cout<<"DIGITE SU OPCIÓN: ";	cin>>r;
		system("cls");
	}while(r==1);
}
//____________________________________________________________________________________________________________________________________________________________________
void buscar_cedula()
{
	cout<<"\t\tBUSCANDO EMPLEADO POR CEDULA"<<endl;
	bool band=false;
	Nodo *corredor = new Nodo();
	corredor = lista;
	
	if(lista!=NULL)
	{
		cout<<"DIGITE LA CEDULA DEL QUE DESEA BUSCAR: ";	cin>>cedula_buscar;
		while((corredor!=NULL) && (band==false))
		{
			if(corredor->cedula==cedula_buscar)
			{
				cout<<"EMPLEADO ENCONTRADO"<<endl;
				cout<<"NOMBRE: \t"<<corredor->nombre<<endl;
				cout<<"CEDULA: \t"<<corredor->cedula<<endl;
				cout<<"CARGO: \t"<<corredor->cargo<<endl;
				cout<<"SALARIO: \t"<<corredor->salario<<endl;
				cout<<"SUBSIDIO DE TRANSPORTE: \t"<<corredor->salario<<endl;
				band=true;
			}
			corredor=corredor->sgt;
		}
		if(band==false)
		{
			cout<<endl<<"EMPLEADO NO FOUND"<<endl;
		}
	}
	else
	{
		cout<<"\t\tLA LISTA DE EMPLEADOS ESTA VACIA"<<endl;
	}
}
//____________________________________________________________________________________________________________________________________________________________________
void eliminar_cedula()
{
	cout<<"\t\tELIMINANDO EMPLEADO POR CEDULA"<<endl;
	Nodo *corredor= new Nodo();
	Nodo *ant_corredor = NULL;
	corredor=lista;
	if(lista != NULL)
	{
		cout<<"DIGITE LA CEDULA DEL QUE DESEA BUSCAR: ";	cin>>cedula_buscar;
		while((corredor!=NULL) && (corredor->cedula!=cedula_buscar))
		{
			ant_corredor=corredor;
			corredor=corredor->sgt;
		}
		
		if(corredor==NULL)
		{
			cout<<"CEDULA INCORRECTA O INEXISTENTE"<<endl;
		}
		else if(ant_corredor==NULL)
		{
			lista=lista->sgt;
			delete corredor;
			cout<<"EMPLEADO ELIMINADO"<<endl;
		}
		else
		{
			ant_corredor->sgt=corredor->sgt;
			delete corredor;
			cout<<"EMPLEADO ELIMINADO"<<endl;
		}
	}
	else
	{
		cout<<"\t\tLA LISTA DE EMPLEADOS ESTA VACIA"<<endl;
	}
}
//____________________________________________________________________________________________________________________________________________________________________
void total_con_subsidio()
{
	cout<<"\t\tMOSTRANDO EMPLEADOA CON SUBSIDIO"<<endl;
	Nodo *corredor= new Nodo();
	Nodo *aux=lista;
	
	if(lista!=NULL)
	{
		while((aux!=NULL)&&(aux->sub_trasporte==0))
		{
			aux=aux->sgt;
		}
		
		if(aux==NULL)
		{
			cout<<"NO HAY EMPLEADOS CON SUBSIDIO DE TRANSPORTE"<<endl;
		}
		else
		{
			corredor=aux;
			int pos=1;
			while(corredor!=NULL)
			{
				cout<<"EMPLEADO CON SUBSIDIO NÚMERO: "<<pos<<endl;
				cout<<"NOMBRE: \t"<<corredor->nombre<<endl;
				cout<<"CEDULA: \t"<<corredor->cedula<<endl;
				cout<<"CARGO: \t"<<corredor->cargo<<endl;
				cout<<"SALARIO: \t"<<corredor->salario<<endl;
				cout<<"SUBSIDIO DE TRANSPORTE: \t"<<corredor->salario<<endl<<endl;
				pos++;
				corredor=corredor->sgt;
			}
		}
	}
	else
	{
		cout<<"\t\tLA LISTA DE EMPLEADOS ESTA VACIA"<<endl;
	}
}
//____________________________________________________________________________________________________________________________________________________________________
void total_sin_subsidio()
{
	cout<<"\t\tMOSTRANDO EMPLEADOS CON SUBSIDIO"<<endl;
	Nodo *corredor= new Nodo();
	Nodo *aux=lista;
	corredor=lista;
	
	if(lista!=NULL)
	{
		if(aux->sub_trasporte!=0)
		{
			cout<<"TODOS LOS EMPLEADOS TIENEN SUBSIDIO DE TRANSPORTE"<<endl;
		}
		else
		{
			while((aux!=NULL) && (aux->sub_trasporte==0))
			{
				aux=aux->sgt;
			}
			int pos=1;
			while(corredor != aux)
			{
				cout<<"EMPLEADO SIN SUBSIDIO NÚMERO: "<<pos<<endl;
				cout<<"NOMBRE: \t"<<corredor->nombre<<endl;
				cout<<"CEDULA: \t"<<corredor->cedula<<endl;
				cout<<"CARGO: \t"<<corredor->cargo<<endl;
				cout<<"SALARIO: \t"<<corredor->salario<<endl;
				cout<<"SUBSIDIO DE TRANSPORTE: \t"<<corredor->salario<<endl<<endl;
				pos++;
				corredor=corredor->sgt;
			}
		}
	}
	else
	{
		cout<<"\t\tLA LISTA DE EMPLEADOS ESTA VACIA"<<endl;
	}
}
//____________________________________________________________________________________________________________________________________________________________________
void mostrar_todos()
{
	cout<<"\t\tMOSTRANDO TODOS LOS EMPLEADOS"<<endl;
	Nodo *corredor= new Nodo();
	corredor=lista;
	if(lista!=NULL)
	{
		int pos=1;
		while(corredor!=NULL)
		{
			cout<<"EMPLEADO NÚMERO: "<<pos<<endl;
			cout<<"NOMBRE: \t"<<corredor->nombre<<endl;
			cout<<"CEDULA: \t"<<corredor->cedula<<endl;
			cout<<"CARGO: \t"<<corredor->cargo<<endl;
			cout<<"SALARIO: \t"<<corredor->salario<<endl;
			cout<<"SUBSIDIO DE TRANSPORTE: \t"<<corredor->salario<<endl<<endl;
			pos++;
			corredor=corredor->sgt;	
		}
	}
	else
	{
		cout<<"\t\tLA LISTA DE EMPLEADOS ESTA VACIA"<<endl;
	}
}
//____________________________________________________________________________________________________________________________________________________________________
main()
{
	setlocale(LC_ALL,"");
	system("color 0b");
	do
	{
		menu(); cin>>op;
		switch(op)
		{
			case 1: system("cls");
					llenar_lista();
					system("pause");
					system("cls");
					break;
			case 2: system("cls");
					buscar_cedula();
					system("pause");
					system("cls");
					break;
			case 3: system("cls");
					eliminar_cedula();
					system("pause");
					system("cls");
					break;	
			case 4: system("cls");
					total_con_subsidio();
					system("pause");
					system("cls");
					break;	
			case 5: system("cls");
					total_sin_subsidio();
					system("pause");
					system("cls");
					break;	
			case 6: system("cls");
					mostrar_todos();
					system("pause");
					system("cls");
					break;		
			case 7: system("cls");
					cout<<"\t\t\tHASTA LA VISTA BABY"<<endl;
					break;
			default: system("cls");
					cout<<"\t\tERROR OPCIÓN INCORRECTA, DIGITE UN NÚMERO ENTRE 1 Y 7"<<endl;
					system("pause");
					system("cls");
					main();	
		}
	}while(op<9);
}
