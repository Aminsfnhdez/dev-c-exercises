// Taller 8 Ejercicio 12 Ciclos C++
// Autor Isaac Amín Sofán Hernández
#include <iostream>
#include <stdio.h> //librerias para ejecucion
//#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias para ejecucion
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
//#include <string.h>//libreria para 'string'
//#include <math.h>//libreria para funciones matematicas
//#include <windows.h>//libreria para usar 'Sleep'
using namespace std;//para no tener problemas con 'cout' y 'cin'
int tam, num;
void llenar_vector(int* vector)
{
	int h;
	for(int i=1; i<=tam; i++)
	{
		cout<<"Digite el elemento "<<i<<" de "<<tam<<" del vector especial"<<endl;
		cin>>num;
		h=0;
		for(int j=1; j<=tam; j++)
		{
			if(vector[j]==num)
			{
				cout<<"Error número repetido, digite otro número"<<endl;
				h=1;
				break;
			}
		}
		if(h!=1)
		{
			vector[i]=num;
			h=0;	
		}
		else
		{
			i= i-1;
		}
	}
}
void sumar_pos_par(int* vector)
{
	int suma=0, x;
	for(int i=1; i<=tam; i++)
	{
		x=i%2;
		if(x==0)
		{
			suma = suma + vector[i];
		}
	}
	cout<<"La suma de los elementos en los posiciones pares del vector es: "<<suma<<endl;
}
void busqueda(int* vector)
{
	int cont=0;
	for(int i=1; i<=tam; i++)
	{
		if((vector[i]>80) && (vector[i]<120))
		{
			cont++;
		}
	}
	cout<<"Hay "<<cont<<" elementos en el vector que son mayores de 80 y menores de 120"<<endl;
}
void multiplos(int* vector)
{
	int x, cont=0;
	for(int i=1; i<=tam; i++)
	{
		x=vector[i];
		if((x%7)==0)
		{
			cont++;
		}
	}
	cout<<"En el vector hay "<<cont<<" elementos que son múltiplos de 7"<<endl;
}
void inverso(int* vector)
{
	cout<<"Los elementos del vector ordenados de forma inversa es: "<<endl;
	for(int i=1; i<=tam; i++)
	{
		cout<<vector[tam-i+1]<<" ";
	}
}
int main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int op=0;
	cout<<"Digite la dimensión del vector"<<endl;
	cin>>tam;
	int vector[tam];
	system("cls");
	while(op<6)
	{ 
		cout<<"                       ==== Vector Especial ===="<<endl;
		cout<<"Para Llenar el vector, Teclee '1'"<<endl;
		cout<<"Para Sumar los elementos almacenados en las posiciones pares y mostrar la suma, Teclee '2'"<<endl;
		cout<<"Para Buscar cuántos elementos del vector son mayores de 80 y menores de 120, Teclee '3' "<<endl;
		cout<<"Para Buscar cuántos elementos del vector son múltiplos de 7, Teclee '4'"<<endl;
		cout<<"Para Mostrar los elementos del vector de forma inversa, Teclee '5'"<<endl;
		cout<<"Para salir, Teclee '6'"<<endl;
		cin>>op;
		switch(op)
		{
			case 1: system("cls");
					llenar_vector(vector);
					system("pause");
					system("cls");
					break;
			case 2: system("cls");
					sumar_pos_par(vector);
					system("pause");
					system("cls");
					break;	
			case 3: system("cls");
					busqueda(vector);
					system("pause");
					system("cls");
					break;
			case 4: system("cls");
					multiplos(vector);
					system("pause");
					system("cls");
					break;
			case 5: system("cls");
					inverso(vector);
					system("pause");
					system("cls");
					break;		
			case 6: system("cls");
					cout<<"          ========== Hasta la vista Baby =========="<<endl;
					break;
			default:system("cls");
					cout<<"\t\tERROR OPCIÓN INCORRECTA, DIGITE UN NÚMERO ENTRE 1 Y 3"<<endl;
					op=0;
					system("cls");			
		}
	}
	getch();
}
