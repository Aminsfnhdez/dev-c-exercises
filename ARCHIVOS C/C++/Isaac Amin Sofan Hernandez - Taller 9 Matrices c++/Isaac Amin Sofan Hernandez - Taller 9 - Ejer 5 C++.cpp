//Taller 9 Ejercicio 5 Matrices C++
//Isaac Amin Sofan Hernandez
#include<iostream>
#include<conio.h>
#include<locale.h>
#include <wchar.h>
//#include <string.h>
//#include <math.h>
#include <windows.h>
using namespace std;
float clase[3][5]={0}, prom_est[3]={0}, prom_mat[5]={0}, acum=0, general;
int cuadrada, i, j;
void llenar_clase()
{
	cout<<"\t\t\t====== LLENANDO NOTAS ======"<<endl;
	for(i=0; i<3; i++)
	{
		for(j=0; j<5; j++)
		{
			cout<<"Digite la nota del estudiante "<<i<<" en la materia "<<j<<endl;
			cin>>clase[i][j];
		}
	}
	cout<<"\t\t\t====== NOTAS LLENADAS ======"<<endl;
}
void mostrar_clase()
{
	cout<<"\t\t\t====== MOSTRANDO LA MATRIZ CLASE ======"<<endl;
	for(i=0; i<3; i++)
	{
		cout<<endl;
		for(j=0; j<5; j++)
		{
			cout<<clase[i][j]<<"\t";
			Sleep(500);
		}
	}
	cout<<endl<<endl;
	cout<<"\t\t\t====== MATRIZ CLASE MOSTRADA ======"<<endl;
}
void estudiantes()
{
	cout<<"\t\t\t====== PROMEDIO GENERAL DE LOS ESTUDIANTES ======"<<endl;
	for(i=0; i<3; i++)
	{
		for(j=0; j<5; j++)
		{
			acum = acum + clase[i][j];
		}
		prom_est[i]=acum/5;
		acum=0;
	}
	cout<<"El promedio general de cada estudiante se esta calculando, por favor espere..."<<endl;
	Sleep(2000);
	for(i=0; i<3; i++)
	{
		cout<<"El promedio general del estudiante "<<i<<" es: "<<prom_est[i]<<endl;
		Sleep(500);
	}
	cout<<endl<<"\t\t\t====== PROMEDIOS CALCULADOS ======"<<endl;
}
void asignauras()
{
	cout<<"\t\t\t====== PROMEDIO GENERAL DE LAS ASIGNATURAS ======"<<endl;
	for(i=0; i<5; i++)
	{
		for(j=0; j<3; j++)
		{
			acum = acum + clase[j][i];
		}
		prom_mat[i]=acum/3;
		acum=0;
	}
	cout<<"El promedio general de la clase en cada asignatura se esta calculando, por favor espere..."<<endl;
	Sleep(2000);
	for(i=0; i<5; i++)
	{
		cout<<"El promedio general de la asignatura "<<i<<" es: "<<prom_mat[i]<<endl;
		Sleep(500);
	}
	cout<<endl<<"\t\t\t====== PROMEDIOS CALCULADOS ======"<<endl;
}
void prom_gen()
{
	cout<<"\t\t\t====== PROMEDIO GENERAL DE TODAS LAS ASIGNATURAS ======"<<endl;
	for(i=0; i<3; i++)
	{
		acum = acum + prom_est[i];
	}
	general = acum / 3;
	acum=0;
	cout<<"El promedio general de todas las asignaturas se esta calculando, por favor espere..."<<endl;
	Sleep(2000);
	cout<<"El promedio general de todas las asignaturas es: "<<general<<endl;
	cout<<endl<<"\t\t\t====== PROMEDIO CALCULADO ======"<<endl;
}
void menu()
{
	int op=0;
	while(op<6)
	{ 
		cout<<"                       ==== Ejercicio Cinco ===="<<endl;
		cout<<"Para Llenar las notas de la clase, Teclee '1'"<<endl;
		cout<<"Para Mostrar la matriz de notas clase, Teclee '2' "<<endl;
		cout<<"Para Calcular el promedio genaral de cada estudiante, Teclee '3'"<<endl;
		cout<<"Para Calcular el promedio genaral de la clase en cada asignatura, Teclee '4'"<<endl;
		cout<<"Para Calcular el promedio genaral de todas asignatura, Teclee '5'"<<endl;
		cout<<"Para salir, Teclee '6'"<<endl;
		cin>>op;
		switch(op)
		{
			case 1: system("cls");
					llenar_clase();
					system("pause");
					system("cls");
					break;
			case 2: system("cls");
					mostrar_clase();
					system("pause");
					system("cls");
					break;	
			case 3: system("cls");
					estudiantes();
					system("pause");
					system("cls");
					break;
			case 4: system("cls");
					asignauras();
					system("pause");
					system("cls");
					break;	
			case 5: system("cls");
					prom_gen();
					system("pause");
					system("cls");
					break;			
			case 6: system("cls");
					cout<<"          ========== Hasta la vista Baby =========="<<endl;
					break;
			default:system("cls");
					cout<<"Error opción Icorrecta, digite un número entre 1 y 6"<<endl;
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
