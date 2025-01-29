#include<iostream>
#include<conio.h>
using namespace std;
string nombres[10];
int reservas[10];
void reservacero();
void menu();
void reser_vip();
void reser_est();
void genial();
void chao();
int i=0, j=5;

main()
{
	setlocale(LC_ALL, "");
	reservacero();
	menu();
	getch;
	
}
void reservacero()
{
	for (int i=0; i<10; i++)
	{
		reservas[i]=0;
	}
}
void menu()
{
	int op=0;
	while(op<3)
	{
		cout<<"BIENVENIDO AL SISTEMA DE RESERVAS DEL SASON DE JUANA"<<endl;
		cout<<"POR FAVOR SELECIONE EL TIPO DE RESERVACION QUE DESEA REALIZAR"<<endl;
		cout<<"1. RESERVACION VIP"<<endl<<"2. RESERVACION ESTANDAR"<<endl<<"3. PARA SALIR"<<endl;
		cin>>op;
		switch(op)
		{
			case 1: system("cls");
					reser_vip();
					system("pause");
					system("cls");
					break;
			case 2: system("cls");
					reser_est();
					system("pause");
					system("cls");
					break;
			case 3: system("cls");
					chao();
					op=6;
					system("pause");
					system("cls");
					break;		
			default: cout<<"OPCION INCORRECTA. POR FAVOR SELECIONE NUEVAMENTE"<<endl;
					 op=0;				
		}
	}
	
	
	
}
void reser_vip()
{
	int h=0;
	if(i<5)
	{
		while(i<5)
		{
			if(reservas[i]==0)
			{
				reservas[i]=i+1;
				cout<<"POR FAVOR DIGITE SU NOMBRE"<<endl;
				cin>>nombres[i];
				cout<<nombres[i]<<" SU RESERVACION ES LA MESA NUMERO "<<reservas[i]<<", EN LA ZONA VIP "<<endl;
				i++;
				break;
			}
		}
	}
	else
	{
		while(h<4)
		{
			cout<<"LAS RESERVACIONES VIP ESTAN COMPLETAS. ¿DESEA REALIZAR UNA RESERVACION ESTANDAR?"<<endl;
			cout<<"1. SI"<<endl<<"2. NO"<<endl<<"3. SALIR"<<endl;
			cin>>h;
			switch(h)
			{
				case 1: system("cls");
						reser_est();
						system("pause");
						system("cls");
						break;
				case 2: system("cls");
						cout<<"POR FAVOR REALICE LA RESERVACION EN OTRA FECHA"<<endl;
						h=6;
						system("pause");
						system("cls");
						break;
				case 3: system("cls");
						menu();
						system("pause");
						system("cls");
						break;			
				default: cout<<"OPCION INCORRECTA. POR FAVOR SELECIONE NUEVAMENTE"<<endl;
						 h=0;			
			}
				
		}
				
	}
}
	

void reser_est()
{
	int r=0;
	if(j<10)
	{
		while(j<10)
		{
			if(reservas[j]==0)
			{
				reservas[j]=j+1;
				cout<<"POR FAVOR DIGITE SU NOMBRE"<<endl;
				cin>>nombres[j];
				cout<<nombres[j]<<" SU RESERVACION ES LA MESA NUMERO "<<reservas[j]<<", EN LA ZONA ESTANDAR"<<endl;
				j++;
				break;
			}
			
			
		}
	}
	else
	{
		while(r<2)
		{
			cout<<"LAS RESERVACIONES ESTANDAR ESTAN COMPLETAS. ¿DESEA REALIZAR UNA RESERVACION EN OTRA FECHA?"<<endl;
			cout<<"1. SI"<<endl<<"2. NO, SALIR"<<endl;
			cin>>r;
			switch(r)
			{
				case 1: system("cls");
						genial();
						system("pause");
						system("cls");
						break;
				case 2: system("cls");
						menu();
						system("pause");
						system("cls");
						break;	
				default: cout<<"OPCION INCORRECTA. POR FAVOR SELECIONE NUEVAMENTE"<<endl;
						 r=0;			
			}
			
		}
				
	}
	
}
void genial()
{
	cout<<"EXCELENTE, HAS SIDO AGENDADO PARA OTRA FECHA. CUANDO HAYA DSIPONIBILIDAD SE LE INFORMARA"<<endl;
	system("pause");
	system("cls");
	menu();
}
void chao()
{
	cout<<"GRACIAS POR PREFERIRNOS. VUELVA PRONTO"<<endl;
}
