#include<stdlib.h>
#include<iostream>
#include<conio.h>

using namespace std;
int op, dil, cedula, mesa_para_4 = 5, mesa_para_6 = 4, mesa_para_2 = 3, turno1=0, turno2=0, turno3=0;
string nombre;


struct Nodo
{
	string nombre;
	int cedula;
	Nodo *sgt;
};

Nodo *cab_mesa_4=NULL, *cola_mesa_4=NULL, *cab_mesa_6=NULL, *cola_mesa_6=NULL, *cab_mesa_2=NULL, *cola_mesa_2=NULL;
Nodo *cab_aux1=NULL, *cola_aux1=NULL, *cab_aux2=NULL, *cola_aux2=NULL, *cab_aux3=NULL, *cola_aux3=NULL;

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

void encolar(Nodo *&cabeza, Nodo *&cola, string nombre, int cedula)
{
	Nodo *nuevo = new Nodo();
	nuevo->nombre = nombre;
	nuevo->cedula = cedula;
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
		cout<<"1. ASIGNAR MESA"<<endl<<"2. PARA ATENDER CLIENTE"<<endl<<"3. PARA MOSTRAR LAS COLAS DE LOS CLIENTES"<<endl<<"4. PARA SALIR"<<endl<<"INGRESE: ";		cin>>op;
		switch(op)
		{
			case 1:
					
						system("cls");
						fflush(stdin);
						cout<<"INGRESE EL NOMBRE DEL CLIENTE: "; getline(cin, nombre);	
						cout<<"INGRESE LA CÉDULA DEL CLIENTE: "; cin>>cedula;	
												
						do
						{
							cout<<"¿QUE TIPO DE MESA DESEA EL CLIENTE?"<<endl;	
							cout<<"1. MESA PARA 4"<<endl<<"2. MESA PARA 6"<<endl<<"3. MESA PARA 2"<<endl<<"DIGITE: ";	cin>>dil;
							
							switch(dil)
							{
								case 1: 
										if(mesa_para_4 > 0)
										{
											mesa_para_4 --;
											encolar(cab_mesa_4, cola_mesa_4, nombre, cedula);
											cout<<"MESA PARA 4 PERSONAS ASIGNADA EXITOSAMENTE"<<endl;	
										}
										else
										{
											turno1++;
											cout<<"LAS MESAS NO ESTÁN DISPONIBLES. DEBE ESPERAR SU DISPONIBILIDAD, SU TURNO DE ESPERA ES: "<<turno1<<endl;
											encolar(cab_aux1, cola_aux1, nombre, cedula);
										}
										
										system("pause");
										system("cls");
										break;
										
								case 2:	
										if(mesa_para_6 > 0)
										{
											mesa_para_6 --;
											encolar(cab_mesa_6, cola_mesa_6, nombre, cedula);
											cout<<"MESA PARA 6 PERSONAS ASIGNADA EXITOSAMENTE"<<endl;	
										}
										else
										{
											turno2++;
											cout<<"LAS MESAS NO ESTÁN DISPONIBLES. DEBE ESPERAR SU DISPONIBILIDAD, SU TURNO DE ESPERA ES: "<<turno2<<endl;
											encolar(cab_aux2, cola_aux2, nombre, cedula);
										}
										
										system("pause");
										system("cls");
										break;
								
								case 3: 
										if(mesa_para_2 > 0)
										{
											mesa_para_2 --;
											encolar(cab_mesa_2, cola_mesa_2, nombre, cedula);
											cout<<"MESA PARA 2 PERSONAS ASIGNADA EXITOSAMENTE"<<endl;	
										}
										else
										{
											turno3++;
											cout<<"LAS MESAS NO ESTÁN DISPONIBLES. DEBE ESPERAR SU DISPONIBILIDAD, SU TURNO DE ESPERA ES: "<<turno3<<endl;
											encolar(cab_aux3, cola_aux3, nombre, cedula);
										}
										system("pause");
										system("cls");
										break;
										
								default: cout<<"ERROR OPCIÓN INCORRECTA VUELVA A ELEGIR"<<endl;
	
							}	
							
						}while((dil!=1) && (dil!=2) && (dil!=3));
						
						
					
					break;
			
					
			case 2:
					system("cls");
					system("cls");
					cout<<"1. ATENDER UNA MESA PARA 4 PERSONAS"<<endl<<"2. ATENDER UNA MESA PARA 6 PERSONAS"<<endl<<"3. ATENDER UNA MESA PARA 2 PERSONAS"<<endl<<"DIGITE: "; 	cin>>dil;
					do
					{
						switch(dil)
						{
							case 1: 
									if(cab_mesa_4 != NULL)
									{
										cout<<"NOMBRE CLIENTE: "<<cab_mesa_4->nombre<<endl;
										cout<<"CÉDULA CLIENTE: "<<cab_mesa_4->cedula<<endl;
										cout<<"HA SIDO ATENTIDO EN MESA PARA 4 PERSONAS"<<endl;
										desencolar(cab_mesa_4, cola_mesa_4);
										mesa_para_4 ++;
										
										if(cab_aux1 != NULL)
										{
											turno1--;
											encolar(cab_mesa_4, cola_mesa_4, cab_aux1->nombre, cab_aux1->cedula);
											desencolar(cab_aux1, cola_aux1);
											cout<<"MESA PARA 4 PERSONAS ASIGNADA EXITOSAMENTE"<<endl;
											mesa_para_4 ++;
										}
									}
									else
									{
										cout<<"NO HAY CLIENTE QUE ATENDER EN MESA PARA 4 PERSONAS"<<endl;
									}
									
									break;
							
							case 2: 
									if(cab_mesa_6 != NULL)
									{
										cout<<"NOMBRE CLIENTE: "<<cab_mesa_6->nombre<<endl;
										cout<<"CÉDULA CLIENTE: "<<cab_mesa_6->cedula<<endl;
										cout<<"HA SIDO ATENTIDO EN MESA PARA 6 PERSONAS"<<endl;
										desencolar(cab_mesa_6, cola_mesa_6);
										mesa_para_6 ++;
										
										if(cab_aux2 != NULL)
										{
											turno2--;
											encolar(cab_mesa_6, cola_mesa_6, cab_aux2->nombre, cab_aux2->cedula);
											desencolar(cab_aux2, cola_aux2);
											cout<<"MESA PARA 4 PERSONAS ASIGNADA EXITOSAMENTE"<<endl;
											mesa_para_6 ++;
										}
									}
									else
									{
										cout<<"NO HAY CLIENTE QUE ATENDER EN MESA PARA 6 PERSONAS"<<endl;
									}
									
									break;
							
							case 3: 
									if(cab_mesa_2 != NULL)
									{
										cout<<"NOMBRE CLIENTE: "<<cab_mesa_2->nombre<<endl;
										cout<<"CÉDULA CLIENTE: "<<cab_mesa_2->cedula<<endl;
										cout<<"HA SIDO ATENTIDO EN MESA PARA 2 PERSONAS"<<endl;
										desencolar(cab_mesa_2, cola_mesa_2);
										mesa_para_2 ++;
										
										if(cab_aux3 != NULL)
										{
											turno3--;
											encolar(cab_mesa_2, cola_mesa_2, cab_aux2->nombre, cab_aux2->cedula);
											desencolar(cab_aux3, cola_aux3);
											cout<<"MESA PARA 2 PERSONAS ASIGNADA EXITOSAMENTE"<<endl;
											mesa_para_2 ++;
										}
									}
									else
									{
										cout<<"NO HAY CLIENTE QUE ATENDER EN MESA PARA 2 PERSONAS"<<endl;
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
					cout<<"\tMESA PARA 4 PESONAS"<<endl;
					if(cab_mesa_4 != NULL)
					{
						cout<<"HAY "<<5 - mesa_para_4<<" MESAS PARA 4 PERSONAS OCUPADAS Y HAY "<<turno1<<" EN CLIENTES EN ESPERA"<<endl;
					}
					else
					{
						cout<<"NO HAY MESA PARA 4 PESONAS OCUPADAS"<<endl;
					}
					system("pause");
					
					cout<<endl<<"\tMESA PARA 6 PESONAS"<<endl;
					if(cab_mesa_6 != NULL)
					{
						cout<<"HAY "<<4 - mesa_para_6<<" MESAS PARA 6 PERSONAS OCUPADAS Y HAY "<<turno2<<" EN CLIENTES EN ESPERA"<<endl;
					}
					else
					{
						cout<<"NO HAY MESA PARA 6 PESONAS OCUPADAS"<<endl;
					}
					system("pause");
					
					cout<<endl<<"\tMESA PARA 2 PESONAS"<<endl;
					if(cab_mesa_2 != NULL)
					{
						cout<<"HAY "<<3 - mesa_para_2<<" MESAS PARA 2 PERSONAS OCUPADAS Y HAY "<<turno3<<" EN CLIENTES EN ESPERA"<<endl;
					}
					else
					{
						cout<<"NO HAY MESA PARA 2 PESONAS OCUPADAS"<<endl;
					}
					
					system("PAUSE");
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
