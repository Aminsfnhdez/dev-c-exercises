#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
main()
{
	int a=7, b=10, h, *punt1, *punt2;
	punt1=&a;
	punt2=&b;
//	h = *punt1 + *punt2;
	cout<<"la suma de "<<*punt1<<" y "<<*punt2<<" es: "<<*punt1 + *punt2<<endl;
	getch();
}
