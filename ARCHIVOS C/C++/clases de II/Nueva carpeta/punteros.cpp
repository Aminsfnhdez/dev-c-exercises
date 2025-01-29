#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
main()
{
	int a, b, c, *pun_a, *pun_b, *pun_c;
	float d, *pun_d;
	pun_a= &a; 	pun_b= &b;	pun_c= &c;	pun_d= &d;
	cout<<"la direccion de a es: "<<pun_a<<endl;
	cout<<"la direccion de b es: "<<pun_b<<endl;
	cout<<"la direccion de c es: "<<pun_c<<endl;
	cout<<"la direccion de d es: "<<pun_d<<endl;
}
