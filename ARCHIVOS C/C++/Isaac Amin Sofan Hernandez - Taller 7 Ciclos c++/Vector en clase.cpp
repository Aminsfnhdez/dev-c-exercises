#include<iostream>
#include<conio.h>
#include<stdio.h>
#include <stdlib.h>//libreria para limpiar pantalla
#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
using namespace std;
void ciclo_for();
void ciclo_while();
void ciclo_do_while();
int main()
{
	setlocale(LC_ALL,""); //para que me muestre simbolos y caracteres especiales en pantalla
	int op=0;
	cout<<"Bienvenido al menu"<<endl;
	cout<<"1. Para llenar un vetor de 5 elementos con un ciclo 'for'"<<endl;
	cout<<"2. Para llenar un vector de 6 elementos con un ciclo 'while'"<<endl;
	cout<<"3. Para llenar un vector de 10 elementos con un ciclo 'do while'"<<endl;
	cout<<"4. Para salir"<<endl;
	cout<<"Digite una opcion"<<endl;
	cin>>op;
	switch(op)
	{
		case 1: ciclo_for();
				break;
		case 2:	ciclo_while();
				break;
		case 3: ciclo_do_while();
				break;
		case 4: cout<<"****** chao ******"<<endl;
				break;		
		default: cout<<" ******* Opcion incorrecta \nDigite un número entre 1 y 4 *******"<<endl;
	}		
	
	getch();
}
void ciclo_for()
{
	int n=5;
	int vec_1[n];
	for(int i=0; i<n; i++)
	{
		cout<<"Digite el número "<<i+1<<" del vector con ciclo 'for'"<<endl;
		cin>>vec_1[i];
	}
	getch();
	system("CLS");
	for(int j=0; j<n; j++)
	{
		cout<<"El número en la posicion "<<j<<" es: "<<vec_1[j]<<endl;
	}
	getch();
}
void ciclo_while()
{
	int n=6, cont=0;
	int vec_2[n];
	while(cont<n)
	{
		cout<<"Digite el número "<<cont+1<<" del vector con ciclo 'while'"<<endl;
		cin>>vec_2[cont];
		cont++;
	}
	getch();
	system("CLS");
	cont=0;
	while(cont<n)
	{
		cout<<"El número en la posicion "<<cont<<" es: "<<vec_2[cont]<<endl;
		cont++;
	}
}
void ciclo_do_while()
{
	int n=10, cont=0;
	int vec_3[n];
	do
	{
		cout<<"Digite el número "<<cont+1<<" del vector con ciclo 'do while'"<<endl;
		cin>>vec_3[cont];
		cont++;
	}while(cont<n);
	getch();
	system("CLS");
	cont=0;
	do
	{
		cout<<"El número en la posicion "<<cont<<" es: "<<vec_3[cont]<<endl;
		cont++;
	}while(cont<n);
}
