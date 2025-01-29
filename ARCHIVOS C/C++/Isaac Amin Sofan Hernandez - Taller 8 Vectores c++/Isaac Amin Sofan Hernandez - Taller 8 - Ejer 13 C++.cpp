// Taller 8 Ejercicio 13 Ciclos C++
// Autor Isaac Am�n Sof�n Hern�ndez
#include <iostream>
#include <stdio.h> //librerias para ejecucion
//#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias para ejecucion
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
//#include <string.h>//libreria para 'string'
//#include <math.h>//libreria para funciones matematicas
#include <windows.h>//libreria para usar 'Sleep'
using namespace std;//para no tener problemas con 'c_out' y 'c_in'
int vector[12]={0}, vector_new[12]={0};
void llenar_vector()
{
	int num;
	cout<<"                       ==== Llenando Vector ===="<<endl;
	for(int i=0; i<12; i++)
	{
		cout<<"Digite el elemento "<<i+1<<" de 12 del vector"<<endl;
		cin>>num;
		vector[i]=num;
	}
	cout<<"                       ==== Vector Completado ===="<<endl;
}
void buscar()
{
	int posicion, x, h;
	cout<<"                       ==== Buscando a 'x' ===="<<endl;
	cout<<"Digite el n�mero que desea buscar"<<endl;
	cin>>x;
	for(int i=0; i<12; i++)
	{
		h=0;
		if(vector[i]==x)
		{
			posicion=i+1;
			h=1;
			break;
		}
		
	}
	if(h==1)
		{
			cout<<"El n�mero "<<x<<" est� en el vector y se encuentra en la posici�n "<<posicion<<endl;
		}
		else
		{
			cout<<"El n�mero "<<x<<" no se encuentra en el vector "<<endl;
		}
	cout<<"                       ==== Busqueda finalizada ===="<<endl;
}
void posicion()
{
	int p;
	cout<<"                       ==== Creando un nuevo vector ===="<<endl;
	for(int i=0; i<12; i++)
	{
		p=i+1;
		if((p%2)!=0)
		{
			vector_new[i]=vector[i];
		}
	}
	Sleep(1000);
	cout<<"                       ==== Se ha creado un nuevo vector ===="<<endl;
	Sleep(1000);	
	system("cls");
	cout<<"Los elementos en nuevo vector son: "<<endl;
	for(int i=0; i<12; i++)
	{
		p=i+1;
		if((p%2)!=0)
		{
			cout<<vector_new[i]<<" ";
		}
	}
	cout<<endl<<"                       ==== Acci�n Finalizada ===="<<endl;
}
void multiplos()
{
	int x, cont=0, pos=0;
	cout<<"                       ==== Buscando los multiplos ===="<<endl;
	for(int i=0; i<12; i++)
	{
		x=vector_new[i];
		if(((x%3)==0) && (x!=0))
		{
			cont++;
			if(x>0)
			{
				cout<<"El n�mero "<<x<<" es multiplo de 3 y adem�s es positivo"<<endl;
				pos++;
			}
			else
			{
				cout<<"El n�mero "<<x<<" es multiplo de 3, pero no es positivo"<<endl;
			}
		}
	}
	cout<<"Se encontraron "<<cont<<" elmentos que son multiplo de 3, y de los "<<cont<<" elementos "<<pos<<" son positivos"<<endl;
	cout<<"                       ==== Busqueda Finalizada ===="<<endl;
}
int main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int op=0;
	while(op<5)
	{ 
		cout<<"                       ==== Ejercicio Trece ===="<<endl;
		cout<<"Para Llenar el vector, Teclee '1'"<<endl;
		cout<<"Para Buscar un n�mero 'x' en el vector, Teclee '2'"<<endl;
		cout<<"Para Crear un nuevo vector con los elementos en las posiciones impares, Teclee '3' "<<endl;
		cout<<"Para Buscar cu�ntos elementos del nuevo vector son m�ltiplos de 3, Teclee '4'"<<endl;
		cout<<"Para salir, Teclee '5'"<<endl;
		cin>>op;
		switch(op)
		{
			case 1: system("cls");
					llenar_vector();
					system("pause");
					system("cls");
					break;
			case 2: system("cls");
					buscar();
					system("pause");
					system("cls");
					break;	
			case 3: system("cls");
					posicion();
					system("pause");
					system("cls");
					break;
			case 4: system("cls");
					multiplos();
					system("pause");
					system("cls");
					break;		
			case 5: system("cls");
					cout<<"          ========== Hasta la vista Baby =========="<<endl;
					break;
			default:system("cls");
					cout<<"Error opci�n Icorrecta, digite un n�mero entre 1 y 5"<<endl;
					op=0;
					system("cls");			
		}
	}
	getch();
}
