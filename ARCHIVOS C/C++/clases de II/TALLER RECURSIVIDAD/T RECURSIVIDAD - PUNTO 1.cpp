#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int facto_sin(int num)
{
	int resul=1;
	for(int i=1; i<=num; i++)
	{
		resul *= i;
	}
	
	
	
	return resul;
}



int facto_con(int num)
{
	if(num==0)
	{
		num=1;
	}
	else
	{
		num *= facto_con(num-1); 
	}
	return num;
}



main()
{
	setlocale(LC_ALL,"");
	system("color F0");
	int n, r;
	cout<<"DIGITE LA DIMENSIÓN DEL CONJUNTO N: "; cin>>n;
	cout<<"DIGITE R: ";	cin>>r; 
	cout<<"\nLAS DIFERENTES MANERAS DE ELEGIR SIN RECURVIDAD R DEL CONJUNTO N ES: "<<facto_sin(n) * facto_sin(r) * facto_sin(n-r)<<endl;
	cout<<"\nLAS DIFERENTES MANERAS DE ELEGIR CON RECURVIDAD R DEL CONJUNTO N ES: "<<facto_con(n) * facto_con(r) * facto_con(n-r)<<endl;
	getch();
}
