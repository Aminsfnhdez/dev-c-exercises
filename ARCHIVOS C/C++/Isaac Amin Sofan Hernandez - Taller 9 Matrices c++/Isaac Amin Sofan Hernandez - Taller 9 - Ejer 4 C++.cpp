//Taller 9 Ejercicio 4 Matrices C++
//Isaac Amin Sofan Hernandez
#include<iostream>
#include<conio.h>
#include<locale.h>
#include <wchar.h>
//#include <string.h>
//#include <math.h>
#include <windows.h>
using namespace std;
int matriz[100][100]={0}, cuadrada, i, j, menor, mayor, pos_fila, pos_columna;
void llenar_matriz()
{
	cout<<"\t\t\t====== LLENANDO MATRIZ ======"<<endl;
	for(i=0; i<cuadrada; i++)
	{
		for(j=0; j<cuadrada; j++)
		{
			cout<<"Digite el elemento de la fila "<<i<<" columna "<<j<<endl;
			cin>>matriz[i][j];
		}
	}
	cout<<"\t\t\t====== MATRIZ LLENADA ======"<<endl;
}
void mostrar_matriz()
{
	cout<<"\t\t\t====== MOSTRANDO LA MATRIZ ======"<<endl;
	for(i=0; i<cuadrada; i++)
	{
		cout<<endl;
		for(j=0; j<cuadrada; j++)
		{
			cout<<matriz[i][j]<<"\t";
			Sleep(500);
		}
	}
	cout<<endl;
	cout<<"\t\t\t====== MATRIZ MOSTRADA ======"<<endl;
}
void buscar_menor()
{
	cout<<"\t\t\t====== BUSCANDO AL MENOR ======"<<endl;
	menor=matriz[0][0];
	for(i=0; i<cuadrada; i++)
	{
		for(j=0; j<cuadrada; j++)
		{
			if(matriz[i][j] < menor)
			{
				menor=matriz[i][j];
				pos_fila=i;
				pos_columna=j;
			}
		}
	}
	cout<<"La busqueda se esta realizando, por favor espere..."<<endl;
	Sleep(2000);
	cout<<"El número con menor valor en la matriz es: "<<menor<<" y esta en la fila "<<pos_fila<<" con columna "<<pos_columna<<endl;
	cout<<"\t\t\t====== MENOR ENCONTRADO ======"<<endl;
}
void buscar_mayor()
{
	cout<<"\t\t\t====== BUSCANDO AL MAYOR ======"<<endl;
	mayor=matriz[0][0];
	for(i=0; i<cuadrada; i++)
	{
		for(j=0; j<cuadrada; j++)
		{
			if(matriz[i][j] > mayor)
			{
				mayor=matriz[i][j];
				pos_fila=i;
				pos_columna=j;
			}
		}
	}
	cout<<"La busqueda se esta realizando, por favor espere..."<<endl;
	Sleep(2000);
	cout<<"El número con mayor valor en la matriz es: "<<mayor<<" y esta en la fila "<<pos_fila<<" con columna "<<pos_columna<<endl;
	cout<<"\t\t\t====== MAYOR ENCONTRADO ======"<<endl;
}
void menu()
{
	int op=0;
	while(op<5)
	{ 
		cout<<"                       ==== Ejercicio Cuatro ===="<<endl;
		cout<<"Para Llenar la Matriz, Teclee '1'"<<endl;
		cout<<"Para Mostrar la matriz, Teclee '2' "<<endl;
		cout<<"Para Buscar el número con menor valor en la matriz, Teclee '3'"<<endl;
		cout<<"Para Buscar el número con mayor valor en la matriz, Teclee '4'"<<endl;
		cout<<"Para salir, Teclee '5'"<<endl;
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
					buscar_menor();
					system("pause");
					system("cls");
					break;
			case 4: system("cls");
					buscar_mayor();
					system("pause");
					system("cls");
					break;		
			case 5: system("cls");
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
	cout<<"Digite la dimensión de la matriz cuadrada"<<endl;
	cin>>cuadrada;
	system("cls");
	menu();
	getch();
}
