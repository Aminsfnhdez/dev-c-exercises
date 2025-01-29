// Taller 8 Ejercicio 9 Ciclos C++
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
int tam;
float num;
void llenar_vector_A(float* vector_A)
{	
	for(int i=0; i<tam; i++)
	{
		cout<<"Ingrese el elemento # "<<i+1<<" de "<<tam<<" del vector A"<<endl;
		cin>>num;
		vector_A[i]=num;
	}
}
llenar_vector_B(float* vector_B)
{
	for(int i=0; i<tam; i++)
	{
		cout<<"Ingrese el elemento # "<<i+1<<" de "<<tam<<" del vector B"<<endl;
		cin>>num;
		vector_B[i]=num;
	}
}
void multiplicacion(float* vector_A, float* vector_B, float* vector_C)
{
	for(int i=0; i<tam; i++)
	{
		vector_C[i] = vector_A[i] * vector_B[i];
	}
	cout<<"Se ha creado el vector C"<<endl;
}
void mostrar_vectores(float* vector_A, float* vector_B, float* vector_C)
{
	cout<<"Los valores de los elementos del vector A son: "<<endl;
	for(int i=0; i<tam; i++)
	{
		cout<<"Elemento "<<i+1<<": "<<vector_A[i]<<endl;
	}
	cout<<"\nLos valores de los elementos del vector B son: "<<endl;
	for(int i=0; i<tam; i++)
	{
		cout<<"Elemento "<<i+1<<": "<<vector_B[i]<<endl;
	}
	cout<<"\nLos valores de los elementos del vector C son: "<<endl;
	for(int i=0; i<tam; i++)
	{
		cout<<"La multiplicación entre el elemento "<<i+1<<" del vector A y el elemento "<<i+1<<" del vector B es: "<<vector_C[i]<<endl;
	}
}
int main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int op=0;
	cout<<"Digite la dimensión de los Vectores"<<endl;
	cin>>tam;
	float vector_A[tam]={0}, vector_B[tam]={0}, vector_C[tam]={0};
	system("cls");
	while(op<5)
	{
		cout<<"==== Multiplicación entre Vectores ===="<<endl; 
		cout<<"Para ingresar el vector A, Teclee '1'"<<endl;
		cout<<"Para ingresar el vector B, Teclee '2'"<<endl;
		cout<<"Para realizar la Multiplicación entre el vector A y el verctor B. Creando el vector C, Teclee '3' "<<endl;
		cout<<"Para mostrar el vector C, Teclee '4'"<<endl;
		cout<<"Para salir, Teclee '5'"<<endl;
		cin>>op;
		switch(op)
		{
			case 1: system("cls");
					llenar_vector_A(vector_A);
					system("pause");
					break;
			case 2: system("cls");
					llenar_vector_B(vector_B);
					system("pause");
					break;	
			case 3: system("cls");
					multiplicacion(vector_A, vector_B, vector_C);
					system("pause");
					break;
			case 4: system("cls");
					mostrar_vectores(vector_A, vector_B, vector_C);
					system("pause");
					break;
			case 5: system("cls");
					cout<<"Hasta la vista Baby"<<endl;
					system("pause");
					break;
			default:system("cls");
					cout<<"Error opción Icorrecta, digite un número entre 1 y 5"<<endl;
					op=0;
					system("pause");			
		}
		system("cls");
	}
	getch();
}
