//Taller 9 Ejercicio 6 Matrices C++
//Isaac Amin Sofan Hernandez
#include<iostream>
#include<conio.h>
#include<locale.h>
#include <wchar.h>
//#include <string.h>
//#include <math.h>
#include <windows.h>
using namespace std;
int op=0, n_filas, m_columnas, matriz_A[100][100]={0}, matriz_B[100][100]={0}, i, j, aux, band1=0, band2=0;
void llenar_matriz_A()
{
	cout<<"\t\t\t====== LLENANDO MATRIZ A ======"<<endl;
	for(i=0; i<n_filas; i++)
	{
		for(j=0; j<m_columnas; j++)
		{
			cout<<"Digite el elemento de la fila "<<i<<" columna "<<j<<" de la matriz A"<<endl;
			cin>>matriz_A[i][j];
		}
	}
	for(i=0; i<n_filas; i++)
	{
		cout<<endl;
		for(j=0; j<m_columnas; j++)
		{
			cout<<matriz_A[i][j]<<"\t";
		}
	}
	band1=1;
	cout<<"\n\t\t\t====== MATRIZ A LLENADA ======"<<endl;
}
void llenar_matriz_B()
{
	cout<<"\t\t\t====== LLENANDO MATRIZ B ======"<<endl;
	for(i=0; i<n_filas; i++)
	{
		for(j=0; j<m_columnas; j++)
		{
			cout<<"Digite el elemento de la fila "<<i<<" columna "<<j<<" de la matriz B"<<endl;
			cin>>matriz_B[i][j];
		}
	}
	for(i=0; i<n_filas; i++)
	{
		cout<<endl;
		for(j=0; j<m_columnas; j++)
		{
			cout<<matriz_B[i][j]<<"\t";
		}
	}
	band2=1;
	cout<<"\n\t\t\t====== MATRIZ B LLENADA ======"<<endl;
}
void intercambio()
{
	cout<<"\t\t\t====== INTERCAMBIO DE ELEMENTOS ENTRE LAS MATRICES A Y B ======"<<endl;
	if((band1 == 1) && (band2 == 1))
	{
		cout<<"\n\tMatriz A original"<<endl;
		for(i=0; i<n_filas; i++)
		{
			cout<<endl;
			for(j=0; j<m_columnas; j++)
			{
				cout<<matriz_A[i][j]<<"\t";
				Sleep(500);
			}
		}
		cout<<"\n\n\tMatriz B original"<<endl;
		for(i=0; i<n_filas; i++)
		{
			cout<<endl;
			for(j=0; j<m_columnas; j++)
			{
				cout<<matriz_B[i][j]<<"\t";
				Sleep(500);
			}
		}
		for(i=0; i<n_filas; i++)
		{
			for(j=0; j<m_columnas; j++)
			{
				aux = matriz_A[i][j];
				matriz_A[i][j] = matriz_B[i][j];
				matriz_B[i][j] = aux;
			}
		}
		cout<<"\n\tEl intercambio se esta efectuando, por favor espere..."<<endl;
		Sleep(2000);
		cout<<"\n\n\tNueva Matriz A"<<endl;
		for(i=0; i<n_filas; i++)
		{
			cout<<endl;
			for(j=0; j<m_columnas; j++)
			{
				cout<<matriz_A[i][j]<<"\t";
				Sleep(500);
			}
		}
		cout<<endl<<"\n\n\tNueva Matriz B"<<endl;
		for(i=0; i<n_filas; i++)
		{
			cout<<endl;
			for(j=0; j<m_columnas; j++)
			{
				cout<<matriz_B[i][j]<<"\t";
				Sleep(500);
			}
		}
		cout<<"\n\t\t\t====== INTERCAMBIO REALIZADO ======"<<endl;
	}
	else
	{
		cout<<" ****** Error ******"<<endl;
		cout<<"Por favor ingrese los elementos de las matrices A y B"<<endl;
	}
	
}
void menu()
{
	while(op<4)
	{ 
		cout<<"                       ==== Ejercicio Seis ===="<<endl;
		cout<<"Para Llenar la Matriz A, Teclee '1'"<<endl;
		cout<<"Para Llenar la Matriz B, Teclee '2'"<<endl;
		cout<<"Para intercambiar los elementos entre la matriz A y la matirz B, Teclee '3' "<<endl;
//		cout<<"Para Calcular el promedio genaral de cada estudiante, Teclee '3'"<<endl;
//		cout<<"Para Calcular el promedio genaral de la clase en cada asignatura, Teclee '4'"<<endl;
//		cout<<"Para Calcular el promedio genaral de todas asignatura, Teclee '5'"<<endl;
		cout<<"Para salir, Teclee '4'"<<endl;
		cin>>op;
		switch(op)
		{
			case 1: system("cls");
					llenar_matriz_A();
					system("pause");
					system("cls");
					break;
			case 2: system("cls");
					llenar_matriz_B();
					system("pause");
					system("cls");
					break;	
			case 3: system("cls");
					intercambio();
					system("pause");
					system("cls");
					break;
//			case 4: system("cls");
//					asignauras();
//					system("pause");
//					system("cls");
//					break;	
//			case 5: system("cls");
//					prom_gen();
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
	setlocale(LC_ALL, "");
	cout<<"Digite la cantidad de N filas que tendrán las matrices A y B"<<endl;
	cin>>n_filas;
	cout<<"Digite la cantidad de M columnas que tendrán las matrices A y B"<<endl;
	cin>>m_columnas;
	system("cls");
	menu();
	getch();
}
