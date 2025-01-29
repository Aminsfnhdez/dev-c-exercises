#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void convertir(int n)
{
	int i, j=0, vector[100]={0};	
	for(i=100; i>0; i--)
	{
		if(n>7)
		{
			vector[i] = n%8;
			n = n / 8;
		}
		else
		{
			vector[i] = n;
			break;
		}
	}
	
	for(i=1;i<=100;i++)
	{
        if(vector[i] != 0)
        {
            for(j=i;j<=100;j++)
            {
                cout<<vector[j];
            }
             break;
        }
	}
}

void recursividad(int n)
{
	if(n>7)
	{
		recursividad(n/8);
	}
	cout<<n%8;
	
}

main()
{
	setlocale(LC_ALL,"");
	system("color F0");
	int n;
	cout<<"DIGITE EL NÚMERO DECIMAL QUE DESEA CONVERTIR A OCTAL: ";	cin>>n;
	cout<<"\nEL OCTAL SIN RECURSIVIDAD DE "<<n<<" ES: ";
	convertir(n);
	
	cout<<"\nEL OCTAL CON RECURSIVIDAD DE "<<n<<" ES: ";
	recursividad(n);
	getch();
}
