#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
main()
{
	int vector[5]={1, 2, 3, 4, 5}, *punt1, *punt2;
	punt1= &vector[0];
	punt2= &vector[4];
	cout<<"la direccion del puntero uno es: "<<punt1<<", y el valor almacenado en esta direccion es: "<<*punt1<<endl;
	cout<<"la direccion del puntero dos es: "<<punt2<<", y el valor almacenado en esta direccion es: "<<*punt2<<endl;
	getch();
}
