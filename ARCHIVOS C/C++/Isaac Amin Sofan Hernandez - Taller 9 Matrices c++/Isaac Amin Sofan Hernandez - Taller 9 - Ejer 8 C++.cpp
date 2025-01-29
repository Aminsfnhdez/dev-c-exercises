//Taller 9 Ejercicio 8 Matrices C++
//Isaac Amin Sofan Hernandez
#include<iostream>
#include<conio.h>
#include<locale.h>
#include <wchar.h>
//#include <string.h>
//#include <math.h>
#include <windows.h>
using namespace std;
int matriz[2][2]={0}, vector[4]={0}, i, j, band=0, band2=0, band3=0, op=0, cont = 0, pos, aux;
void llenar_matriz()
{
	cout<<"\t\t\t====== LLENANDO LA MATRIZ ======"<<endl;
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			cout<<"Digite el elemento de la fila "<<i<<" columna "<<j<<" de la matriz"<<endl;
			cin>>matriz[i][j];
		}
	}
	
	band=1;
	cout<<"\n\t\t\t====== MATRIZ LLENADA ======"<<endl;
}
void mostar_matriz()
{
	cout<<"\t\t\t====== MOSTARNDO LA MATRIZ ======"<<endl;
	if(band == 1)
	{
		for(i=0; i<2; i++)
		{
			cout<<endl;
			for(j=0; j<2; j++)
			{
				cout<<matriz[i][j]<<"\t";
				Sleep(500);
			}
		}
		cout<<"\n\t\t\t====== MATRIZ MOSTRADA ======"<<endl;
	}
	else
	{
		cout<<" ****** Error ******"<<endl;
		cout<<"Por favor ingrese los elementos de la matriz"<<endl;
	}
}
void intercambio()
{
	cout<<"\t\t\t====== LLENANDO EL VECTOR X ======"<<endl;
	if(band == 1)
	{
		for(i=0; i<2; i++)
		{
			for(j=0; j<2; j++)
			{
				if(cont<4)
				{
					vector[cont] = matriz[i][j];
					cont++;
				}
			}
		}
		cout<<"El vector X se esta llenando, por favor espere"<<endl;
		Sleep(3000);
		band2 = 1;
		cout<<"\t\t\t====== VECTOR X LLENADO ======"<<endl;
	}
	else
	{
		cout<<" ****** Error ******"<<endl;
		cout<<"Por favor ingrese los elementos de la matriz"<<endl;
	}
}
void mostrar_vector()
{
	cout<<"\t\t\t====== MOSTRANDO EL VECTOR X ======"<<endl;
	if(band2 == 1)
	{
		for(i=0; i<4; i++)
		{
			cout<<vector[i]<<endl;
			Sleep(500);
		}
		cout<<"\t\t\t====== VECTOR X MOSTRADO======"<<endl;
	}
	else
	{
		cout<<" ****** Error ******"<<endl;
		cout<<"Por favor almacene los elementos de la matriz en el vector X"<<endl;
	}
}
void ordenar()
{
	cout<<"\t\t\t====== ORDENANDO EL VECTOR X ======"<<endl;
	if(band2 == 1)
	{
		for(i=0; i<5; i++)
		{
			pos = i;
			for(j=i+1; j<4; j++)
			{
				if(vector[j] < vector[pos])
				{
					pos = j;
				}
			}
			aux = vector[i];
			vector[i] = vector[pos];
			vector[pos] = aux;
		}
		cout<<"El vector X se esta ordenando, por favor espere"<<endl;
		Sleep(3000);
		band3=1;
		cout<<"\t\t\t====== VECTOR X ORDENADO ======"<<endl;
	}
	else
	{
		cout<<" ****** Error ******"<<endl;
		cout<<"Por favor almacene los elementos de la matriz en el vector X"<<endl;
	}
}
void descendentemente()
{
	cout<<"\t\t\t====== MOSTRANDO VECTOR X ORDENANDO ======"<<endl;
	if(band3 == 1)
	{
		for(i=3; i>=0; i--)
		{
			cout<<vector[i]<<endl;
			Sleep(500);
		}
		cout<<"\t\t\t====== VECTOR X ORDENANDO MOSTRADO======"<<endl;
	}
	else
	{
		cout<<" ****** Error ******"<<endl;
		cout<<"Por favor ordene los elementos del vector X"<<endl;
	}
}
void menu()
{
	while(op<7)
	{ 
		cout<<"                       ==== Ejercicio Ocho ===="<<endl;
		cout<<"Para Llenar la Matriz, Teclee '1'"<<endl;
		cout<<"Para Mostrar la Matriz, Teclee '2'"<<endl;
		cout<<"Para Almacenar los elementos la matriz en el vector X, Teclee '3' "<<endl;
		cout<<"Para Mostrar el vector X, Teclee '4'"<<endl;
		cout<<"Para Ordenar descendentemente el vector X , Teclee '5'"<<endl;
		cout<<"Para Mostrar el vector X ordenado, Teclee '6'"<<endl;
		cout<<"Para salir, Teclee '7'"<<endl;
		cin>>op;
		switch(op)
		{
			case 1: system("cls");
					llenar_matriz();
					system("pause");
					system("cls");
					break;
			case 2: system("cls");
					mostar_matriz();
					system("pause");
					system("cls");
					break;	
			case 3: system("cls");
					intercambio();
					system("pause");
					system("cls");
					break;
			case 4: system("cls");
					mostrar_vector();
					system("pause");
					system("cls");
					break;	
			case 5: system("cls");
					ordenar();
					system("pause");
					system("cls");
					break;			
			case 6: system("cls");
					descendentemente();
					system("pause");
					system("cls");
					break;	
			case 7: system("cls");
					cout<<"          ========== Hasta la vista Baby =========="<<endl;
					break;		
			default:system("cls");
					cout<<"Error opción Icorrecta, digite un número entre 1 y 7"<<endl;
					op=0;
					Sleep(2000);
					system("cls");			
		}
	}
}
main()
{
	setlocale(LC_ALL, "");
	menu();
	getch();
	
}
