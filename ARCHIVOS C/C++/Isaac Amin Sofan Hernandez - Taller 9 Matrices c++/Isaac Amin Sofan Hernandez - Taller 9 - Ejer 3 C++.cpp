//Taller 9 Ejercicio 3 Matrices C++
//Isaac Amin Sofan Hernandez
#include<iostream>
#include<conio.h>
#include<locale.h>
#include <wchar.h>
//#include <string.h>
//#include <math.h>
#include <windows.h>
using namespace std;
int matriz[100][100]={0}, n_filas, m_columnas, i, j, num, pos_fila, pos_columna, band=0, g=0;
void llenar_matriz()
{
	cout<<"\t\t\t====== LLENANDO MATRIZ ======"<<endl;
	for(i=0; i<n_filas; i++)
	{
		for(j=0; j<m_columnas; j++)
		{
			cout<<"Digite el elemento de la fila "<<i<<" columna "<<j<<endl;
			cin>>matriz[i][j];
		}
	}
	cout<<"\t\t\t====== MATRIZ LLENADA ======"<<endl;
}
void buscar()
{
	cout<<"\t\t\t====== BUSCANDO A X ======"<<endl;
	do
	{
		cout<<"Digite el número a buscar en la matriz"<<endl;
		cin>>num;
//		for(i=0; i<m_columnas; i++)
//		{
//			cout<<endl;
//			for(j=0; j<n_filas; j++)
//			{
//				cout<<matriz[i][j]<<"\t";
//			}
//		}
//		cout<<endl;
		cout<<"Buscando el número "<<num<<", Por favor espere"<<endl;
		Sleep(2000);
		for(i=0; i<n_filas; i++)
		{
			for(j=0; j<m_columnas; j++)
			{
	//			cout<<"la columa es: "<<i<<endl;
	//			cout<<"la fila es: "<<j<<endl;
				if(matriz[j][i] == num)
				{
					pos_fila=j;
					pos_columna=i;
					band=1;
					break;
				}
			}
		}
		if(band==1)
		{
			cout<<"El número "<<num<<" esta la columna "<<pos_columna<<" con fila "<<pos_fila<<endl;
		}
		else
		{
			cout<<"El número "<<num<<" no esta la matriz "<<endl;
		}
		band=0;
		getch();
		system("cls");
		cout<<"¿Desea buscar otro número?"<<endl;
		cout<<"Si, Teclee 0"<<endl;		
		cout<<"No, Teclee 1"<<endl;	
		cin>>g;	
	}while(g<1);
	
	cout<<"\t\t\t====== BUSQUEDA FINALIZADA ======"<<endl;
}
void mostrar_matriz()
{
	cout<<"\t\t\t====== MOSTRANDO LA MATRIZ ======"<<endl;
	for(i=0; i<n_filas; i++)
	{
		cout<<endl;
		for(j=0; j<m_columnas; j++)
		{
			cout<<matriz[i][j]<<"\t";
		}
	}
	cout<<endl;
	cout<<"\t\t\t====== MATRIZ MOSTRADA ======"<<endl;
}
void menu()
{
	int op=0;
	while(op<4)
	{ 
		cout<<"                       ==== Ejercicio Tres ===="<<endl;
		cout<<"Para Llenar la Matriz, Teclee '1'"<<endl;
		cout<<"Para Mostrar la matriz, Teclee '2' "<<endl;
		cout<<"Para Buscar un número 'x' la matriz, Teclee '3'"<<endl;
//		cout<<"Para Buscar cuántos elementos del nuevo vector son múltiplos de 3, Teclee '4'"<<endl;
		cout<<"Para salir, Teclee '4'"<<endl;
		cin>>op;
		switch(op)
		{
			case 1: system("cls");
					llenar_matriz();
					system("pause");
					system("cls");
					break;
			case 2: system("cls");
					mostrar_matriz();
					system("pause");
					system("cls");
					break;	
			case 3: system("cls");
					buscar();
					system("pause");
					system("cls");
					break;
//			case 4: system("cls");
//					multiplos();
//					system("pause");
//					system("cls");
//					break;		
			case 4: system("cls");
					cout<<"          ========== Hasta la vista Baby =========="<<endl;
					break;
			default:system("cls");
					cout<<"Error opción Icorrecta, digite un número entre 1 y 4"<<endl;
					op=0;
					Sleep(2000);
					system("cls");			
		}
	}
}
main()
{
	setlocale(LC_ALL,"");
	cout<<"Digite la cantidad de N filas que tendrá la matriz"<<endl;
	cin>>n_filas;
	cout<<"Digite la cantidad de M columnas que tendrá la matriz"<<endl;
	cin>>m_columnas;
	system("cls");
	menu();
	getch();
}
