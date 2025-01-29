#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
main()
{
	int a=4, b=7, *puntero;
	cout<<"la direccion de memoria de a es: "<<&a<<endl;
	cout<<"la direccion de memoria de b es: "<<&b<<endl;
	puntero=&a; cout<<*puntero<<endl;
	puntero=&b; cout<<*puntero<<endl;
	getch();
}
