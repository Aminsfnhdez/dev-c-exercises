#include<iostream>
#include<conio.h>
using namespace std;
int matriz[5][5];
void matriz_cero()
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			matriz[i][j]=0;
		}
	}
}
void llenar_matriz()
{
	cout<<"LLENANDO LA MATRIZ 5 x 5"<<endl;
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			cout<<"DIGITE EL ELEMENTO DE LA MATRIZ EN LA POSICION "<<i<<", "<<j<<endl;
			cin>>matriz[i][j];
		}
	}
	system("pause");
	system("cls");
	cout<<"LA MATRIZ 5 x 5 HA SIDO LLENANDA"<<endl;
}
void diagonal()
{
	cout<<"MOSTRANDO LA DIANONAL DE LA MATRIZ 5 x 5"<<endl;
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			
			if(i==j)
			{
				cout<<matriz[i][j]<<" \t";	
			}
			cout<<"\t";
			
		}
		cout<<endl;
	}
	cout<<"LA DIANONAL DE LA MATRIZ 5 x 5 HA SIDO MOSTRARDA"<<endl;
}
void tri_inf()
{
	cout<<"MOSTRANDO EL TRIANGULO INFERIOR DE LA MATRIZ 5 x 5"<<endl;
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			
			if(i>j)
			{
				cout<<matriz[i][j]<<" \t";	
			}
			
		}
		cout<<endl;
	}
	cout<<"EL TRIANGULO INFERIOR DE LA MATRIZ 5 x 5 HA SIDO MOSTRARDA"<<endl;
}
void tri_sup()
{
	cout<<"MOSTRANDO EL TRIANGULO SUPERIOR DE LA MATRIZ 5 x 5"<<endl;
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			
			if(i<j)
			{
				cout<<matriz[i][j]<<" \t";	
			}
			
		}
		cout<<endl;
	}
	
	cout<<"EL TRIANGULO SUPERIOR DE LA MATRIZ 5 x 5 HA SIDO MOSTRARDA"<<endl;
}
void chao()
{
	cout<<"HASTA LA VISTA BABY"<<endl;
}
void menu()
{
	int op =0;
	while(op<4)
	{
		cout<<"BIENVENIDO AL MENU DE OPARCIONES CON LA MATRIZ 5 x 5. DIGITE"<<endl;
		cout<<"1. PARA LLENAR LA MATRIZ 5 x 5"<<endl<<"2. PARA MOSTAR LA DIAGONAL DE LA MATRIZ"<<endl<<"3. PARA MOSTRAR EL TRAINGULO INFERIOR DE MATRIZ"<<endl;
		cout<<"4. PARA MOSTRAR EL TRIANGULO SUPERIOR DE LA MATRIZ"<<endl<<"5. PARA SALIR"<<endl;
		cin>>op;
		switch(op)
		{
			case 1: system("cls");
					llenar_matriz();
					system("pause");
					system("cls");
					break;
			case 2: system("cls");
					diagonal();
					system("pause");
					system("cls");
					break;
			case 3:	system("cls");
					tri_inf();
					system("pause");
					system("cls");
					break;	
			case 4: system("cls");
					tri_sup();
					system("pause");
					system("cls");
					break;	
			case 5: system("cls");
					chao();
					system("pause");
					system("cls");
					break;
			default: cout<<"OPCION INCORRECTA. POR FAVOR SELECIONE NUEVAMENTE"<<endl;
					 op=0;								
		}
	}
}
main()
{
	matriz_cero();
	menu();
}

