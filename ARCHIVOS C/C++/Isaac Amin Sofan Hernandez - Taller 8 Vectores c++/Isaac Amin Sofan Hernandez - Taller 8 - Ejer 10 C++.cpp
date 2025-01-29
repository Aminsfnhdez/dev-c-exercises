// Taller 8 Ejercicio 10 Ciclos C++
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
int tam, cont_alg=0, cont_mat=0, total=0;
float num;
void notas_alg(float* vect_alg)
{
	for(int i=0; i<tam; i++)
	{
		cout<<"Digite la nota final de Algoritmo y Programación I para estudiante # "<<i+1<<endl;
		cin>>num;
		vect_alg[i]=num;
	}
}
void notas_mat(float* vect_mat)
{
	for(int i=0; i<tam; i++)
	{
		cout<<"Digite la nota final de Matemáticas Discretas I para estudiante # "<<i+1<<endl;
		cin>>num;
		vect_mat[i]=num;
	}
}
void perdieron_alg(float* vect_alg)
{
	for(int i=0; i<tam; i++)
	{
		if(vect_alg[i]<3)
		{
			cont_alg++;
		}
	}
	cout<<"El número de alumnos que perdieron Algoritmo y Programación I es: "<<cont_alg<<endl;
}
void perdieron_mat(float* vect_mat)
{
	for(int i=0; i<tam; i++)
	{
		if(vect_mat[i]<3)
		{
			cont_mat++;
		}
	}
	cout<<"El número de alumnos que perdieron Matemáticas Discretas I es: "<<cont_mat<<endl;
}
void ambas(float* vect_alg, float* vect_mat)
{
	for(int i=0; i<tam; i++)
	{
		if((vect_alg[i]<3) && (vect_mat[i]<3))
		{
			total++;
		}
	}
	cout<<"El número de alumnos que perdieron ambas materias es: "<<total<<endl;
}
int main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	 int op=0;
	cout<<"Digite la Cantidad de alumnos a Evaluar"<<endl;
	cin>>tam;
	float vect_alg[tam]={0}, vect_mat[tam]={0};
	system("cls");
	while(op<6)
	{ 
		cout<<"                       ==== Alumnos ===="<<endl;
		cout<<"Para ingresar las notas de Alg. y Programación I, Teclee '1'"<<endl;
		cout<<"Para ingresar las notas de Mat. Discretas I, Teclee '2'"<<endl;
		cout<<"Para mostrar cuantos alumnos perdieron Alg. y Programación I, Teclee '3' "<<endl;
		cout<<"Para mostrar cuantos alumnos perdieron Mat. Discretas I, Teclee '4'"<<endl;
		cout<<"Para mostrar cuantos alumnos perdieron ambas materias, Teclee '5'"<<endl;
		cout<<"Para salir, Teclee '6'"<<endl;
		cin>>op;
		switch(op)
		{
			case 1: system("cls");
					notas_alg(vect_alg);
					system("pause");
					break;
			case 2: system("cls");
					notas_mat(vect_mat);
					system("pause");
					break;	
			case 3: system("cls");
					perdieron_alg(vect_alg);
					system("pause");
					break;
			case 4: system("cls");
					perdieron_mat(vect_mat);
					system("pause");
					break;
			case 5: system("cls");
					ambas(vect_alg, vect_mat);
					system("pause");
					break;		
			case 6: system("cls");
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
