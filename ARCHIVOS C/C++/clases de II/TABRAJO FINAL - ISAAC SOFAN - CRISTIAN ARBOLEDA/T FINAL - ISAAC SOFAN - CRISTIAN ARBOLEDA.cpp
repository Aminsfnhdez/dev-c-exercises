#include<stdlib.h>
#include<iostream>
#include<conio.h>
#include<windows.h>
#include<string.h>

using namespace std;
int op, tamanio = 15, cant = 0, _modelo, _cilindraje, turnos_motos=1, turnos_carros=1,t;
string _placa, _color;
int horas,aceite,filtro;
//______________________________________________________________________________________________________________________________________________________________________________
class Vehiculo
{ 	private:
		string placa;
		int tipo;
	public:
		Vehiculo(int, string);
		virtual void agregar();	
		void setPlaca(string);
		string getPlaca();
		int getTipo();
};
Vehiculo *vector[15];

Vehiculo::Vehiculo(int _tipo, string _placa)
{
	tipo = _tipo;
	placa = _placa;
}

void Vehiculo::agregar()
{
	fflush(stdin);
	cout<<"\t\t MECÁNICOS Y ASOCIADOS "<<endl<<endl;
	cout<<"INGRESE LA PLACA DEL VEHÍCULO"<<endl<<"DIGITE: ";	getline(cin, _placa);
	setPlaca(_placa);
}

void Vehiculo::setPlaca(string _placa)
{
	placa = _placa;
}

string Vehiculo::getPlaca()
{
	return placa;
}

int Vehiculo::getTipo()
{
	return tipo;
}
//_______________________________________________________________________________________________________________________________________________________________________________
class Motos : public Vehiculo
{
	private:
		string color;
	public:
		Motos(int, string, string);	
		void agregar();
		void setColor(string);
};

Motos::Motos(int _tipo, string _placa, string _color) : Vehiculo(_tipo, _placa)
{
	color = _color;
}

void Motos::agregar()
{
	Vehiculo::agregar();
	fflush(stdin);
	cout<<"INGRESE EL COLOR DE LA MOTO"<<endl<<"DIGITE: "; getline(cin, _color);
	setColor(_color);
}

void Motos::setColor(string _color)
{
	color = _color;
}

//________________________________________________________________________________________________________________________________________________________________________________
class Motos_de_alto_cilindraje : public Motos
{
	private:
		int cilindraje;
	public:
		Motos_de_alto_cilindraje(int, string, string, int);
		void agregar();	
		void setCil(int);
};

Motos_de_alto_cilindraje::Motos_de_alto_cilindraje(int _tipo, string _placa, string _color, int _cilindraje) : Motos(_tipo, _placa, _color)
{
	cilindraje = _cilindraje;
}

void Motos_de_alto_cilindraje::agregar()
{
	Motos::agregar();
	cout<<"INGRESE EL CILINDRAJE DE LA MOTO"<<endl<<"DIGITE: "; cin>>_cilindraje;
	setCil( _cilindraje);
}

void Motos_de_alto_cilindraje::setCil(int _cil)
{
	cilindraje = _cil;
}

//________________________________________________________________________________________________________________________________________________________________________________
class Motos_de_bajo_cilindraje : public Motos
{
	private:
		int cilindraje;
	public:
		Motos_de_bajo_cilindraje(int, string, string, int);
		void agregar();
		void setCil(int);	
};

Motos_de_bajo_cilindraje::Motos_de_bajo_cilindraje(int _tipo, string _placa, string _color, int _cilindraje) : Motos(_tipo, _placa, _color)
{
	cilindraje = _cilindraje;
}

void Motos_de_bajo_cilindraje::agregar()
{
	Motos::agregar();
	cout<<"INGRESE EL CILINDRAJE DE LA MOTO"<<endl<<"DIGITE: "; cin>>_cilindraje;
	setCil(_cilindraje);
}

void Motos_de_bajo_cilindraje::setCil(int _cil)
{
	cilindraje = _cil;
}


//________________________________________________________________________________________________________________________________________________________________________________
class Carros : public Vehiculo
{
	private:
		string color;
	public:
		Carros(int, string, string);
		void agregar();	
		void setColor(string);
};

Carros::Carros(int _tipo, string _placa, string _color) : Vehiculo(_tipo, _placa)
{
	color = _color;
}

void Carros::agregar()
{
	Vehiculo::agregar();
	fflush(stdin);
	cout<<"INGRESE EL COLOR DEL CARRO"<<endl<<"DIGITE: ";	getline(cin, _color);
	setColor(_color);
}

void Carros::setColor(string _color)
{
	color = _color;
}

//___________________________________________________________________________________________________________________________________________________________________________________
class Automoviles : public Carros
{
	private:
		int modelo;
	public:
		Automoviles(int, string, string, int);
		void agregar();	
		void setMod(int);
};

Automoviles::Automoviles(int _tipo, string _placa, string _color, int _modelo) : Carros(_tipo, _placa, _color)
{
	modelo = _modelo;
}

void Automoviles::agregar()
{
	Carros::agregar();
	cout<<"INGRESE EL MODELO DEL AUTOMÓVIL"<<endl<<"DIGITE: ";	cin>>_modelo;
	setMod(_modelo);
}

void Automoviles::setMod(int _mod)
{
	modelo = _mod;
}


//___________________________________________________________________________________________________________________________________________________________________________________
class Camionetas : public Carros
{
	private:
		int modelo;
	public:
		Camionetas(int, string, string, int);
		void agregar();	
		void setMod(int);
};

Camionetas::Camionetas(int _tipo, string _placa, string _color, int _modelo) : Carros(_tipo, _placa, _color)
{
	modelo = _modelo;
}

void Camionetas::agregar()
{
	Carros::agregar();
	cout<<"INGRESE EL MODELO DE LA CAMIONETA"<<endl<<"DIGITE: ";	cin>>_modelo;
	setMod(_modelo);
}

void Camionetas::setMod(int _mod)
{
	modelo = _mod;
}

//___________________________________________________________________________________________________________________________________________________________________________________
class Camion_liviano : public Carros
{
	private:
		int modelo;
	public:
		Camion_liviano(int, string, string, int);
		void agregar();	
		int setMod(int);
};

Camion_liviano::Camion_liviano(int _tipo, string _placa, string _color, int _modelo) : Carros(_tipo, _placa, _color)
{
	modelo = _modelo;
}

void Camion_liviano::agregar()
{
	Carros::agregar();
	cout<<"INGRESE EL MODELO DEL CAMIÓN LIVIANO"<<endl<<"DIGITE: "; cin>>_modelo;
	setMod(_modelo);
	
}

int Camion_liviano::setMod(int _mod)
{
	modelo = _mod;
}

//___________________________________________________________________________________________________________________________________________________________________________________




struct Nodo
{
	string placa;
	float total;
	int tipo;
	Nodo *sgt;
};

Nodo *cab_motos=NULL, *cola_motos=NULL, *cab_carros=NULL, *colas_carros=NULL, *cabeza_aux=NULL, *cola_aux=NULL, *pila=NULL, *pila_aux=NULL;

void desapilar(Nodo *&pila)
{
	Nodo *aux = pila;
	pila = aux->sgt;
	delete aux;
}

void apilar(Nodo *&pila, string placa, float _total, int _tipo)
{
	Nodo *nuevo = new Nodo();
	nuevo->placa=placa;
	nuevo->total=_total;
	nuevo->tipo=_tipo;
	nuevo->sgt=pila;
	pila=nuevo;
}

void desencolar(Nodo *&cabeza, Nodo *&cola)
{
	Nodo *aux = cabeza;
	if (cabeza == cola)
	{
		cabeza = NULL;
		cola = NULL;
	}
	else
	{
		cabeza = cabeza->sgt;
	}
	delete aux;
}

void encolar(Nodo *&cabeza, Nodo *&cola, string placa, int _tipo)
{
	Nodo *nuevo = new Nodo();
	nuevo->placa = placa;
	nuevo->tipo = _tipo;
	nuevo->sgt = NULL;
	if(cabeza == NULL)
	{
		cabeza = nuevo;
	}
	else
	{
		cola->sgt = nuevo;
	}
	cola = nuevo;
}

int main();

void agregar_vehiculo()
{
	do
	{
		cout<<"\t\t MECÁNICOS Y ASOCIADOS "<<endl;
		cout<<"¿QUE TIPO DE DESEA AGREGAR?"<<endl<<"1. MOTO ALTO CILINDRAJE"<<endl<<"2. MOTO BAJO CILINDRAJE"<<endl<<"3. AUTOMÓVILES"<<endl<<"4. CAMIONETAS"<<endl<<"5. CAMIÓN LIVIANO"<<endl<<"6. REGRESAR AL MENÚ PRINCIPAL"<<endl<<"DIGITE: ";
		cin>>t;
		switch(t)
		{
			case 1:
				system("cls");
				if(cant < tamanio)
				{		
					vector[cant] = new Motos_de_alto_cilindraje(1, _placa, _color, _cilindraje);
					vector[cant]->agregar();
					encolar(cab_motos, cola_motos, _placa, t);
					system("cls");
					cout<<"\t\t MECÁNICOS Y ASOCIADOS "<<endl<<endl;
					cout<<"EL VEHÍCULO HA SIDO REGITRADO EXITOSAMENTE"<<endl<<"SU TURNO PARA MOTO ES: "<<turnos_motos<<", HAY "<<cant<<" VEHÍCULOS EN COLA"<<endl;
					turnos_motos++;
					cant++;
				}
				else
				{
					cout<<"\t\t MECÁNICOS Y ASOCIADOS "<<endl<<endl;
					cout<<"NO HAY DISPONIBILIDAD DE AGENDAMIENTO"<<endl;
				}
				break;
			case 2:
				system("cls");
				if(cant < tamanio)
				{
					
					vector[cant] = new Motos_de_bajo_cilindraje(2, _placa, _color, _cilindraje);
					vector[cant]->agregar();
					encolar(cab_motos, cola_motos, _placa, t);
					system("cls");
					cout<<"\t\t MECÁNICOS Y ASOCIADOS "<<endl<<endl;
					cout<<"EL VEHÍCULO HA SIDO REGITRADO EXITOSAMENTE"<<endl<<"SU TURNO PARA MOTO ES: "<<turnos_motos<<", HAY "<<cant<<" VEHÍCULOS EN COLA"<<endl;
					turnos_motos++;
					cant++;
				}
				else
				{
					cout<<"\t\t MECÁNICOS Y ASOCIADOS "<<endl<<endl;
					cout<<"NO HAY DISPONIBILIDAD DE AGENDAMIENTO"<<endl;
				}
				break;
			case 3:
				system("cls");
				if(cant < tamanio)
				{
					vector[cant] = new Automoviles(3, _placa, _color, _modelo);
					vector[cant]->agregar();
					encolar(cab_carros, colas_carros, _placa, t);
					system("cls");
					cout<<"\t\t MECÁNICOS Y ASOCIADOS "<<endl<<endl;
					cout<<"EL VEHÍCULO HA SIDO REGITRADO EXITOSAMENTE"<<endl<<"SU TURNO PARA CARRO ES: "<<turnos_carros<<", HAY "<<cant<<" VEHÍCULOS EN COLA"<<endl;
					turnos_carros++;
					cant++;
				}
				else
				{
					cout<<"\t\t MECÁNICOS Y ASOCIADOS "<<endl<<endl;
					cout<<"NO HAY DISPONIBILIDAD DE AGENDAMIENTO"<<endl;
				}
				break;
			case 4:
				system("cls");
				if(cant < tamanio)
				{
					vector[cant] = new Camionetas(4, _placa, _color, _modelo);
					vector[cant]->agregar();
					encolar(cab_carros, colas_carros, _placa, t);
					system("cls");
					cout<<"\t\t MECÁNICOS Y ASOCIADOS "<<endl<<endl;
					cout<<"EL VEHÍCULO HA SIDO REGITRADO EXITOSAMENTE"<<endl<<"SU TURNO PARA CARRO ES: "<<turnos_carros<<", HAY "<<cant<<" VEHÍCULOS EN COLA"<<endl;
					turnos_carros++;
					cant++;
				}
				else
				{
					cout<<"\t\t MECÁNICOS Y ASOCIADOS "<<endl<<endl;
					cout<<"NO HAY DISPONIBILIDAD DE AGENDAMIENTO"<<endl;
				}
				break;
			case 5:
				system("cls");
				if(cant < tamanio)
				{
					vector[cant] = new Camion_liviano(5, _placa, _color, _modelo);
					vector[cant]->agregar();
					encolar(cab_carros, colas_carros, _placa, t);
					system("cls");
					cout<<"\t\t MECÁNICOS Y ASOCIADOS "<<endl<<endl;
					cout<<"EL VEHÍCULO HA SIDO REGITRADO EXITOSAMENTE"<<endl<<"SU TURNO PARA CARRO ES: "<<turnos_carros<<", HAY "<<cant<<" VEHÍCULOS EN COLA"<<endl;
					turnos_carros++;
					cant++;
				}
				else
				{
					cout<<"\t\t MECÁNICOS Y ASOCIADOS "<<endl<<endl;
					cout<<"NO HAY DISPONIBILIDAD DE AGENDAMIENTO"<<endl;
				}
				break;
				
			case 6:
					system("cls");
					main();
					break;	
				
			default: 
					system("cls");
					cout<<"\t\t MECÁNICOS Y ASOCIADOS "<<endl<<endl;
					cout<<"ERROR OPCIÓN INCORRECTA VUELVA A ELEGIR"<<endl;
					system("pause");
					system("cls");		
		}
	}while((t!=1) && (t!=2) && (t!=3) && (t!=4) && (t!=5) && (t!=6));
		
}

void eliminar(string _placa)
{
	for(int i=0; i<cant; i++)
	{
		if(_placa == vector[i]->getPlaca())
		{
			for(int j=i; j<cant; j++)
			{
				vector[j] = vector[j+1];
			}
			break;
		}
	}
}

int buscar(int bus)
{
	int p;
	for(int i=0; i<cant; i++)
	{
		if(bus == vector[i]->getTipo())
		{
			p = bus;
			break;
		}
	}
	
	return p;
}
void atender()
{
	do
	{
		cout<<"\t\t MECÁNICOS Y ASOCIADOS "<<endl;
		cout<<"QUE TIPO DE VEHÍCULO DESEA ATENDER:"<<endl<<"1. MOTO DE ALTO CILINDRAJE"<<endl<<"2. MOTO DE BAJO CILINDRAJE"<<endl<<"3. AUTOMÓVIL"<<endl<<"4. CAMIONETA"<<endl<<"5. CAMIÓN LIVIANO"<<endl<<"6. REGRESAR AL MENÚ PRINCIPAL"<<endl<<"DIGITE: ";
		cin>>t;
		switch(t)
		{
			case 1:
				
				if((cab_motos != NULL) && (buscar(t)==1))
				{
					
					eliminar(cab_motos->placa);
					cab_motos->total=10000+5000;
					cout<<"LA MOTOCICLETA DE ALTO CILINDRAJE CON EL NUMERO DE PLACA "<<cab_motos->placa<<" HA SIDO ATENDIDA \3"<<endl;
					cout<<"EL VALOR POR LA ATENCIÓN ES $5000 POR LA LAVADA Y $10000 POR TIPO DE VEHÍCULO. "<<endl<<"TOTAL A PAGAR: "<<cab_motos->total<<endl;
					apilar(pila, cab_motos->placa, cab_motos->total, cab_motos->tipo);
					desencolar(cab_motos,cola_motos);
					cant--;
					turnos_motos--;
				}
				else
				{
					cout<<"NO HAY MOTOCICLETAS DE ALTO CILINDRAJE PARA ATENDER"<<endl;
				}
				break;
			case 2:
				if((cab_motos != NULL) && (buscar(t)==2))
				{
					eliminar(cab_motos->placa);
					cab_motos->total=20000+5000;
					cout<<"LA MOTOCICLETA DE BAJO CILINDRAJE CON EL NUMERO DE PLACA "<<cab_motos->placa<<" HA SIDO ATENDIDA \3"<<endl;
					cout<<"EL VALOR POR LA ATENCIÓN ES $5000 POR LA LAVADA Y $20000 POR TIPO DE VEHÍCULO. "<<endl<<"TOTAL A PAGAR: "<<cab_motos->total<<endl;
					apilar(pila, cab_motos->placa, cab_motos->total, cab_motos->tipo);
					desencolar(cab_motos,cola_motos);
					cant--;
					turnos_motos--;
				}
				else
				{
					cout<<"NO HAY MOTOCICLETAS DE BAJO CILINDRAJE PARA ATENDER"<<endl;
				}
				break;
			case 3:
				
				if((cab_carros != NULL) && (buscar(t)==3))
				{
					eliminar(cab_carros->placa);
					cout<<"DIGITE CUANTAS HORAS DURO LA REVISIÓN"<<endl;  cin>>horas;
					cout<<"¿DESEA REALIZAR CAMBIO DE ACEITE?"<<endl<<"1. SI"<<endl<<"2. NO"<<endl<<"DIGITE: "; cin>>aceite;
					if(aceite==1)
					{
						cout<<"¿DESEA REALIZAR LA INSTALACIÓN DEL FILTRO DE AIRE?"<<endl<<"1. SI"<<endl<<"2. NO"<<endl<<"DIGITE: ";cin>>filtro;
						if(filtro==1)
						{
							cab_carros->total = (horas*30000)+20000+80000+15000;
						}
						else
						{
							cab_carros->total = (horas*30000)+20000+80000;
						}
					}
					else
					{
						cout<<"¿DESEA REALIZAR LA INSTALACIÓN DEL FILTRO DE AIRE?"<<endl<<"1. SI"<<endl<<"2. NO"<<endl<<"DIGITE: ";cin>>filtro;
						if(filtro==1)
						{
							cab_carros->total = (horas*30000)+20000+15000;
						}
						else
						{
							cab_carros->total = (horas*30000)+20000;
						}
					}
					cout<<"EL VEHÍCULO CON EL NÚMERO DE PLACA "<<cab_carros->placa<<" HA SIDO ATENDIDO \3"<<endl;
					cout<<"EL TOTAL A PAGAR POR LOS SERVICIOS PRESTADOS ES "<<cab_carros->total<<endl;
					apilar(pila, cab_carros->placa, cab_carros->total, cab_carros->tipo);
					desencolar(cab_carros,colas_carros);
					cant--;
					turnos_carros--;
				}
				else
				{
					cout<<"NO HAY VEHÍCULOS PARA ATENDER"<<endl;
				}
				break;
			
			case 4:
				if((cab_carros != NULL) && (buscar(t)==4))
				{
					eliminar(cab_carros->placa);
					cout<<"DIGITE CUANTAS HORAS DURO LA REVISIÓN"<<endl;  cin>>horas;
					cout<<"¿DESEA REALIZAR CAMBIO DE ACEITE?"<<endl<<"1. SI"<<endl<<"2. NO"<<endl<<"DIGITE: "; cin>>aceite;
					if(aceite==1)
					{
						cab_carros->total = (horas*30000)+50000+200000;
					}
					else
					{
						cab_carros->total = (horas*30000)+50000;
					}
					cout<<"LA CAMIONETA CON EL NÚMERO DE PLACA "<<cab_carros->placa<<" HA SIDO ATENDIDO \3"<<endl;
					cout<<"EL TOTAL A PAGAR POR LOS SERVICIOS PRESTADOS ES "<<cab_carros->total<<endl;
					apilar(pila, cab_carros->placa, cab_carros->total, cab_carros->tipo);
					desencolar(cab_carros,colas_carros);
					cant--;
					turnos_carros--;
				}
				else
				{
					cout<<"NO HAY CAMIONETAS PARA ATENDER"<<endl;
				}
				break;
			case 5:
				if((cab_carros != NULL) && (buscar(t)==5))
				{
					eliminar(cab_carros->placa);
					cout<<"DIGITE CUANTAS HORAS DURO LA REVISIÓN"<<endl;  cin>>horas;
					cout<<"¿DESEA REALIZAR CAMBIO DE ACEITE?"<<endl<<"1. SI"<<endl<<"2. NO"<<endl<<"DIGITE: "; cin>>aceite;
					if(aceite==1)
					{
						cab_carros->total = (horas*30000)+70000+250000+30000;
					}
					else
					{
						cab_carros->total = (horas*30000)+70000;
					}
					cout<<"EL CAMIÓN LIVIANO CON EL NÚMERO DE PLACA "<<cab_carros->placa<<" HA SIDO ATENDIDO \3"<<endl;
					cout<<"EL TOTAL A PAGAR POR LOS SERVICIOS PRESTADOS ES "<<cab_carros->total<<endl;
					apilar(pila, cab_carros->placa, cab_carros->total, cab_carros->tipo);
					desencolar(cab_carros,colas_carros);
					cant--;
					turnos_carros--;
				}
				else
				{
					cout<<"NO HAY CAMIONES LIVIANOS QUE ATENDER "<<endl;
				}
				break;
			
			case 6:
					system("cls");
					main();
					break;
						
			default: 
					system("cls");
					cout<<"\t\t MECÁNICOS Y ASOCIADOS "<<endl<<endl;
					cout<<"ERROR OPCIÓN INCORRECTA VUELVA A ELEGIR"<<endl;
					system("pause");
					system("cls");					  	
		}
	}while((t!=1) && (t!=2) && (t!=3) && (t!=4) && (t!=5) && (t!=6));
	
	
}

int main()
{
	setlocale(LC_ALL,"");
	system("color F0");
		
	int band;
	do
	{
		band = 1;
		cout<<"\t\t MECÁNICOS Y ASOCIADOS "<<endl;
		cout<<"1. PARA AGREGAR VEHÍCULO Y AGENDAR CITA"<<endl<<"2. PARA ATENDER VEHÍCULO"<<endl<<"3. PARA MOSTRAR FACTURAS DEL DÍA"<<endl<<"4. PARA SALIR"<<endl<<"INGRESE: ";		cin>>op;
		switch(op)
		{
			case 1:
			
					system("cls");
					agregar_vehiculo();
					system("pause");
					system("cls");
					break;
			
					
			case 2:
					system("cls");
					atender();
					system("pause");
					system("cls");
					break;
			case 3: 
					system("cls");
					if(pila != NULL)
					{
						while(pila != NULL)
						{
							cout<<"\t\t MECANICOS Y ASOCIADOS "<<endl<<endl;
							switch(pila->tipo)
							{
								case 1:
									cout<<"\tMOTO DE ALTO CILIDRAJE "<<endl;
									cout<<"PLACA VEHICULO: "<<pila->placa<<endl;
									cout<<"VALOR PAGADO POR SERVICIOS: "<<pila->total<<endl<<endl;
									apilar(pila_aux, pila->placa, pila->total, pila->tipo);
									desapilar(pila);
									break;
								
								case 2:
									cout<<"\tMOTO DE BAJO CILIDRAJE "<<endl;
									cout<<"PLACA VEHICULO: "<<pila->placa<<endl;
									cout<<"VALOR PAGADO POR SERVICIOS: "<<pila->total<<endl<<endl;
									apilar(pila_aux, pila->placa, pila->total, pila->tipo);
									desapilar(pila);
									break;
								
								case 3:
									cout<<"\tAUTOMÓVIL "<<endl;
									cout<<"PLACA VEHICULO: "<<pila->placa<<endl;
									cout<<"VALOR PAGADO POR SERVICIOS: "<<pila->total<<endl<<endl;
									apilar(pila_aux, pila->placa, pila->total, pila->tipo);
									desapilar(pila);
									break;
								
								case 4:
									cout<<"\tCAMIONETA "<<endl;
									cout<<"PLACA VEHICULO: "<<pila->placa<<endl;
									cout<<"VALOR PAGADO POR SERVICIOS: "<<pila->total<<endl<<endl;
									apilar(pila_aux, pila->placa, pila->total, pila->tipo);
									desapilar(pila);
									break;
								
								case 5:
									cout<<"\tCAMIÓN LIVIANO "<<endl;
									cout<<"PLACA VEHICULO: "<<pila->placa<<endl;
									cout<<"VALOR PAGADO POR SERVICIOS: "<<pila->total<<endl<<endl;
									apilar(pila_aux, pila->placa, pila->total, pila->tipo);
									desapilar(pila);
									break;				
							}
						}
						
						while(pila_aux != NULL)
						{
							apilar(pila, pila_aux->placa, pila_aux->total, pila_aux->tipo);
							desapilar(pila_aux);
						}
					}
					else
					{
						cout<<"\t\t MECÁNICOS Y ASOCIADOS "<<endl<<endl;
						cout<<"NO SE HAN ATENDIDO VEHÍCULOS HOY"<<endl<<endl;
					}
					system("pause");
					system("cls");
					break;	
			case 4: 
					system("cls");
					cout<<"HASTA LA VISTA BABY"<<endl;
					getch();
					break;		
			default: 
					system("clse");
					cout<<"\t\t MECÁNICOS Y ASOCIADOS "<<endl<<endl;
					cout<<"\tERROR ELIJA UNA OPCIÓN ENTRE 1 Y 4"<<endl;
					op=0;
					system("pause");
					system("cls");			
					
		}
	}while(op<4);

}
