#include<stdlib.h>
#include<iostream>
#include<conio.h>

using namespace std;
int op,cedula, dil, turno_med=0, turno_odo=0, turno_auto=0, total_med=0, total_odo=0, total_auto=0;
string afiliacion, nombre;

struct Nodo
{
	string nombre;
	int cedula;
	string tipo_aifilacion;
	int turno;
	int total;
	Nodo *sgt;
};

Nodo *cab_cita_med=NULL, *cola_cita_med=NULL, *cab_cita_odon, *cola_cita_odon, *cab_autorizacion, *cola_autorizacion;


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
		cabeza->total;
	}
	delete aux;
}



void encolar(Nodo *&cabeza, Nodo *&cola, string nombre, int cedula, string afiliacion, int turno, int total)
{
	Nodo *nuevo = new Nodo();
	nuevo->nombre = nombre;
	nuevo->cedula = cedula;
	nuevo->tipo_aifilacion = afiliacion;
	nuevo->total = total;
	nuevo->turno = turno;			
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


main()
{
	setlocale(LC_ALL,"");
	system("color F0");

	do
	{
		cout<<"\t M E N U "<<endl;
		cout<<"1. INGRESAR DATOS DEL PACIENTE Y DILIGENCIA"<<endl<<"2. PARA ATENDER PACIENTE"<<endl<<"3. PARA MOSTRAR LAS COLAS DE LOS PACIENTES"<<endl<<"4. PARA SALIR"<<endl<<"INGRESE: ";		cin>>op;
		switch(op)
		{
			case 1:
					
						system("cls");
						fflush(stdin);
						cout<<"INGRESE EL NOMBRE DEL PACIENTE: "; getline(cin, nombre);	
						cout<<"INGRESE LA CEDULA DEL PACIENTE: "; cin>>cedula;	fflush(stdin);
						cout<<"INGRESE EL TIPO DE AFILICACIÓN DEL PACIENTE: "; getline(cin, afiliacion); fflush(stdin);
						
						do
						{
							cout<<"¿QUE DILIGENCIA HARÁ EL PACIENTE?"<<endl;	
							cout<<"1. PARA CITA MÉDICA"<<endl<<"2. PARA CITA ODONTOLÓGICA"<<endl<<"3. PARA AUTORIZACIÓN"<<endl<<"DIGITE: ";	cin>>dil;
							
							switch(dil)
							{
								case 1: turno_med++;	total_med++;
										encolar(cab_cita_med, cola_cita_med, nombre, cedula, afiliacion, turno_med, total_med);
										cout<<"SU TURNO "<<cola_cita_med->turno<<", PERSONAS EN COLA "<<cola_cita_med->total-1<<endl;
										system("pause");
										system("cls");
										break;
										
								case 2:	turno_odo++;	total_odo++;
										encolar(cab_cita_odon, cola_cita_odon, nombre, cedula, afiliacion, turno_odo, total_odo);	
										cout<<"SU TURNO "<<cola_cita_odon->turno<<", PERSONAS EN COLA "<<cola_cita_odon->total-1<<endl;
										system("pause");
										system("cls");
										break;
								
								case 3: turno_auto++;	total_auto++;
										encolar(cab_autorizacion, cola_autorizacion, nombre, cedula, afiliacion, turno_auto, total_auto);	
										cout<<"SU TURNO "<<cola_autorizacion->turno<<", PERSONAS EN COLA "<<cola_autorizacion->total-1<<endl;
										system("pause");
										system("cls");
										break;
										
								default: cout<<"ERROR OPCIÓN INCORRECTA VUELVA A ELEGIR"<<endl;
	
							}	
							
						}while((dil!=1) && (dil!=2) && (dil!=3));
						
						
					
					break;
			
					
			case 2:
					system("cls");
					cout<<"1. PARA ATENDER UN PACIENTE DE CITAS MEDICAS"<<endl<<"2. PARA ATENDER UN PACIENTE DE CITAS ODONTOLÓGICAS"<<endl<<"3. PARA ATENDER UN PACIENTE DE AUTORIZACIONES"<<endl<<"DIGITE: "; 	cin>>dil;
					
					do
					{
						switch(dil)
						{
							case 1: if(cab_cita_med != NULL)
									{
										total_med--;
										cout<<endl<<endl<<"NOMBRE DEL PACIENTE: "<<cab_cita_med->nombre<<endl;
										cout<<endl<<"CÉDULA DEL PACIENTE: "<<cab_cita_med->cedula<<endl;
										cout<<endl<<"TIPO DE AFILIACIÓN DEL PACIENTE: "<<cab_cita_med->tipo_aifilacion<<endl;
										cout<<endl<<"TURNO DEL PACIENTE"<<cab_cita_med->turno<<endl<<endl;
										desencolar(cab_cita_med, cola_cita_med);
										cout<<endl<<"PACIENTE ATENTIDO EXITOXAMENTE"<<endl;
									}
									else
									{
										cout<<"NO HAY PACIENTES PARA ATENDER"<<endl;
									}
									break;
							
							case 2: if(cab_cita_odon != NULL)
									{
										total_odo--;
										cout<<endl<<endl<<"NOMBRE DEL PACIENTE: "<<cab_cita_odon->nombre<<endl;
										cout<<endl<<"CÉDULA DEL PACIENTE: "<<cab_cita_odon->cedula<<endl;
										cout<<endl<<"TIPO DE AFILIACIÓN DEL PACIENTE: "<<cab_cita_odon->tipo_aifilacion<<endl;
										cout<<endl<<"TURNO DEL DEL PACIENTE: "<<cab_cita_odon->turno<<endl<<endl;
										desencolar(cab_cita_odon, cola_cita_odon);
										cout<<endl<<"PACIENTE ATENTIDO EXITOXAMENTE"<<endl;
									}
									else
									{
										cout<<"NO HAY PACIENTES PARA ATENDER"<<endl;
									}
									break;
							
							case 3: if(cab_autorizacion != NULL)
									{
										total_auto--;
										cout<<endl<<endl<<"NOMBRE DEL PACIENTE: "<<cab_autorizacion->nombre<<endl;
										cout<<endl<<"CÉDULA DEL PACIENTE: "<<cab_autorizacion->cedula<<endl;
										cout<<endl<<"TIPO DE AFILIACIÓN DEL PACIENTE: "<<cab_autorizacion->tipo_aifilacion<<endl;
										cout<<endl<<"TURNO DEL PACIENTE: "<<cab_autorizacion->turno<<endl<<endl;
										desencolar(cab_autorizacion, cola_autorizacion);
										cout<<endl<<"PACIENTE ATENTIDO EXITOXAMENTE"<<endl;
									}
									else
									{
										cout<<"NO HAY PACIENTES PARA ATENDER"<<endl;
									}
									break;	
							
							default: cout<<"ERROR OPCIÓN INCORRECTA VUELVA A ELEGIR"<<endl;
												
						}
						
					}while((dil!=1) && (dil!=2) && (dil!=3));
					
					system("pause");
					system("cls");
					break;
					
			case 3: 
					system("cls");
					cout<<"\t\tMOSTRANDO LAS COLAS"<<endl<<endl;
					cout<<"\tCITAS MEDICAS"<<endl;
					if(turno_med != 0)
					{
						cout<<"EN ESTA COLA HUBIERON "<<turno_med<<" PACIENTES Y SE ATENDIERON "<<(turno_med-(turno_med-total_med))<<endl<<endl;
					}
					else
					{
						cout<<"EN ESTA COLA NO HUBO PACIENTES"<<endl;
					}
					system("pause");	
					
					cout<<endl<<"\tCITAS ODONTOLÓGICAS"<<endl;
					if(turno_odo != 0)
					{
						cout<<"EN ESTA COLA HUBIERON "<<turno_odo<<" PACIENTES Y SE ATENDIERON "<<(turno_odo-(turno_odo-total_odo))<<endl<<endl;
					}
					else
					{
						cout<<"EN ESTA COLA NO HUBO PACIENTES"<<endl;
					}
					system("pause");
					
					cout<<endl<<"\tAUTORIZACIONES"<<endl;
					if(turno_auto != 0)
					{
						cout<<"EN ESTA COLA HUBIERON "<<turno_auto<<" PACIENTES Y SE ATENDIERON "<<(turno_auto-(turno_auto-total_auto))<<endl<<endl;
					}
					else
					{
						cout<<"EN ESTA COLA NO HUBO PACIENTES"<<endl;
					}
					system("cls");
					break;	
			case 4: 
					system("cls");
					cout<<"HASTA LA VISTA BABY"<<endl;
					getch();
					break;		
			default: 
					system("clse");
					cout<<"\tERROR ELIJA UNA OPCIÓN ENTRE 1 Y 5"<<endl;
					op=0;
					system("pause");
					system("cls");			
					
		}
	}while(op<4);

}
