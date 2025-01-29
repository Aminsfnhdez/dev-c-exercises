#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<sstream>
#include<string.h>

using namespace std;

void convertir(string n)
{
	int pos=0, pow=1;
	for(int i=n.length()-1; i>=0; i--)//posicion mas a la derecha
	{
		if(n[i] == '1')
		{
			pos += 1*pow;
		}
		pow *= 2;
	}
	cout<<pos<<endl;
}

int recursividad(char *n, int pos, int largo)
{
	if(largo == pos)
	{
		return 0;
	}
	else 
	{
		int potencia = largo - pos - 1;
		int resul;
		if(n[pos] == '1')
		{
			resul =  pow(2, potencia);
		}
		return resul + recursividad(n, pos+1, largo);
	}
}

main()
{
	setlocale(LC_ALL,"");
	system("color F0");
	char n[100];
	cout<<"DIGITE EL NÚMERO BINARIO QUE DESEA CONVERTIR A DECIMAL: ";	cin>>n;
	int largo = strlen(n);
	cout<<"\nEL DECIMAL SIN RECURSIVIDAD DE "<<n<<" ES: ";
	convertir(n);
	cout<<"EL DECIMAL CON RECURSIVIDAD DE "<<n<<" ES: "<<recursividad(n, 0, largo);
	
	getch();
}
