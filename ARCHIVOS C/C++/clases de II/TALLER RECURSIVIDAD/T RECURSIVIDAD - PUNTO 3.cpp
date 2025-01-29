#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int suma(int N)
{
	int p = 0;
	while(N>=2)
	{
		if(N%2 == 0)
		{
			p = p + N;
		}
		N--;
	}
	return p;
} 

int recursividad(int N)
{
	if(N == 0)
	{
		return 0;
	}
	else if(N == 2)
	{
		return 2;
	}
	else
	{
		return N + recursividad(N - 2);
	}
}

main()
{
	setlocale(LC_ALL,"");
	system("color F0");
	int N;
	do
	{
		cout<<"DIGITE EL NÚMERO N: ";	cin>>N;
	}while(N%2 != 0);
	
	cout<<"\nLA SUMA SIN RECURSIVIDAD DE "<<N<<" HASTA 2 ES: "<<suma(N)<<endl<<endl;
	cout<<"LA SUMA CON RECURSIVIDAD DE "<<N<<" HASTA 2 ES: "<<recursividad(N)<<endl;
	getch();
}
