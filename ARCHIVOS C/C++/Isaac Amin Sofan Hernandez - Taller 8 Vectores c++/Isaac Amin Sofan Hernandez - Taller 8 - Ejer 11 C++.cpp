// Taller 8 Ejercicio 11 Ciclos C++
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
int i;//variable de tipo global
void invertir(float* vector_A, int tam)//subprograma que recibe el vector A y su respectiva dimension
{
	float vector_B[tam]={0};//creamos el vector B con una dimension igual a la del vector A
	for(i=0; i<tam; i++)//ciclo para asigarle valores a las diferentes posiciones del vector B
	{
		vector_B[i+1]=vector_A[tam-i];//empezamos a invertir las posiciones del vector A, asignandoselas a las del vector B
	}
	cout<<"El orden del Vector A es: "<<endl;//mensaje que indica que se mostraran los elementos del vector A
	for(i=1; i<=tam; i++)//ciclo para mostrar los elemnetos del vector A
	{
		cout<<vector_A[i]<<" ";//mostramos los elementos del vector A
	}
	cout<<endl<<"El orden del Vector B es: "<<endl;//mensaje que indica que se mostraran los elementos del vector B
	for(i=1; i<=tam; i++)//ciclo para mostrar los elemnetos del vector B
	{
		cout<<vector_B[i]<<" ";//mostramos los elementos del vector B
	}
}
int main()//programa principal
{
	//setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int tamano;//declaramos variable
	float num;//declaramos variable
	cout<<"Digite la dimensión del vector A"<<endl;//pedimos la cantidad de posiciones que tendrá el vector A
	cin>>tamano;//leemos la dimension
	float vector_A[tamano]={0};//creamos el vector A con dimesion dada por el usuario
	for(i=1; i<=tamano; i++)//ciclo para poder capturar todos los elementos del vector A
	{
		cout<<"Digite el elemento "<<i<<" de "<<tamano<<" del vector A"<<endl;//pedimos los valores para las diferentes posiciones del vector
		cin>>num;//leemos cualquier valor
		vector_A[i]=num;//asiganamos valores a las diferentes posiciones del vector A
	}
	invertir(vector_A, tamano);//invocamos al subprograma
	getch();//pausa con 
}
