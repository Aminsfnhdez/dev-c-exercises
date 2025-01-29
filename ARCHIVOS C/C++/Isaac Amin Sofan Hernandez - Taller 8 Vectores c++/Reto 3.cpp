//Isaac Amin Sofan Hernandez
#include<iostream>
#include<conio.h>
#include <locale.h>
#include <wchar.h>
#include <stdio.h>
#include <windows.h>
using namespace std;
int vector[10];
void llenar_vector()
{
	for(int i=0; i<10; i++)
	{
		cout<<"Digite el elemento "<<i+1<<" de 10 del vector"<<endl;
		cin>>vector[i];
	}
}
void burbuja()
{
	int aux;
	cout<<"\t\t\t === ORDENAMIENTO CON MET. BURBUJA ==="<<endl;
	cout<<"\t\t\t\t === Ordenando vector ==="<<endl;
	for(int i=0; i<10; i++)
	{
		for(int j=0; j<10; j++)
		{
			if(vector[j] > vector[j+1])
			{
				aux = vector[j];
				vector[j]=vector[j+1];
				vector[j+1] = aux;
			}
		}
	}
	Sleep(1000);
	cout<<"\t\t\t\t === ORDENAMIENTO FINALIZADO ==="<<endl;
}
void burbuja_mejorado()
{
	int i, j, aux;
	bool band;
	cout<<"\t\t\t === ORDENAMIENTO CON MET. BURBUJA MEJORADO ==="<<endl;
	cout<<"\t\t\t\t\t === Ordenando vector ==="<<endl;
	for(i=0; i<10; i++)
	{
		band = false;
		for(j=10-1; j>=0; j--)
		{
			if(vector[j-1] = vector[j])
			{
				aux = vector[j-1];
				vector[j-1] = vector[j];
				vector[j] = aux;
				band = true; 
			}
		}
		if(band == false)
		{
			break;
		}
	}
	Sleep(1000);
	cout<<"\t\t\t\t\t === ORDENAMIENTO FINALIZADO ==="<<endl;	
}
void seleccion()
{
	int i, j, aux, min;
	cout<<"\t\t\t === ORDENAMIENTO CON MET. DE SELECCIÓN ==="<<endl;
	cout<<"\t\t\t\t === Ordenando vector ==="<<endl;
	for(i=0; i<10; i++)
	{
		min = i;
		for(j=i+1; j<10; j++)
		{
			if(vector[j] < vector[min])
			{
				min = j;
			}
		}
		aux = vector[i];
		vector[i] = vector[min];
		vector[min] = aux;
	}
	Sleep(1000);
	cout<<"\t\t\t\t === ORDENAMIENTO FINALIZADO ==="<<endl;
}
void insercion()
{
	int i, pos, aux;
	cout<<"\t\t\t === ORDENAMIENTO CON MET. DE INSERCIÓN ==="<<endl;
	cout<<"\t\t\t\t === Ordenando vector ==="<<endl;
	for(i=0; i<10; i++)
	{
		pos = i;
		aux = vector[i];
		while((pos>0) && (vector[pos-1] > aux))
		{
			vector[pos] = vector[pos-1];
			pos--;
		}
		vector[pos] = aux;
	}
	Sleep(1000);
	cout<<"\t\t\t\t === ORDENAMIENTO FINALIZADO ==="<<endl;
}
void ascendente()
{
	cout<<"\t\t\t === MOSTRANDO VECTOR ASCENDENTEMENTE ==="<<endl;
	for(int i=0; i<10; i++)
	{
		cout<<vector[i]<<endl;
		Sleep(200);
	}
	cout<<"\t\t\t\t === VECTOR MOSTRADO ==="<<endl;
}
void descendente()
{
	cout<<"\t\t\t === MOSTRANDO VECTOR DESCENDENTEMENTE ==="<<endl;
	for(int i=10-1; i>=0; i--)
	{
		cout<<vector[i]<<endl;
		Sleep(200);
	}
	cout<<"\t\t\t\t === VECTOR MOSTRADO ==="<<endl;
}
int salir()
{
	int sal=0;
	cout<<"\t\t\t == SALIENDO =="<<endl;
	do
	{
		cout<<"¿Realmente desea salir? "<<endl;
		cout<<"Si, Teclee '1' "<<endl;		
		cout<<"No, Teclee '2' "<<endl;
		cin>>sal;
		if(sal==1)
		{
			sal=9;
		}		
	}while(sal<1);
	return sal;
}
int error()
{
	int x=0;
	cout<<"\t\t\t == ERROR =="<<endl;
	cout<<"Opción incorrecta, debe eligir un valor entre '1' y '8' "<<endl;
	return x;
}
void menu()
{
	int op=0;
	do
	{
		cout<<"Para ingresar los valores del vector, Teclee '1'"<<endl;
		cout<<"Para ordenar el vector con el metodo Burbuja, Teclee '2'"<<endl;
		cout<<"Para ordenar el vector con el metodo Burbuja Mejorado, Teclee '3'"<<endl;
		cout<<"Para ordenar el vector con el metodo Selección, Teclee '4'"<<endl;
		cout<<"Para ordenar el vector con el metodo Insercion, Teclee '5'"<<endl;
		cout<<"Para mostrar el vector en orden ascendente, Teclee '6'"<<endl;
		cout<<"Para mostrar el vector en orden descendente, Teclee '7'"<<endl;
		cout<<"Para salir, Teclee '8'"<<endl;
		cin>>op;
		switch(op)
		{
			case 1: system("cls");
					llenar_vector();
					system("pause");
					system("cls");
					break;
			case 2: system("cls");
					burbuja();
					system("pause");
					system("cls");
					break;
			case 3: system("cls");
					burbuja_mejorado();
					system("pause");
					system("cls");
					break;
			case 4: system("cls");
					seleccion();
					system("pause");
					system("cls");
					break;		
			case 5: system("cls");
					insercion();
					system("pause");
					system("cls");
					break;
			case 6: system("cls");
					ascendente();
					system("pause");
					system("cls");
					break;
			case 7: system("cls");
					descendente();
					system("pause");
					system("cls");
					break;						
			case 8: system("cls");
					op=salir();
					//system("pause");
					system("cls");
					break;
			default: system("cls");
					 op=error();
					 system("pause");
					 system("cls");
					 break;		
		}
	}while(op<=8);
}
main()
{
	setlocale(LC_ALL,"");
	menu();
}
