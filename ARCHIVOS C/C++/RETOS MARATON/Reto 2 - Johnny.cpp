//Isaac Amin Sofan Hernandez
#include<iostream>
#include<conio.h>
#include<locale.h>
#include <wchar.h>
#include <string.h>
//#include <math.h>
#include <windows.h>
using namespace std;
int casos, cambios, longitud, i, j, mayuscula=0, minuscula=0, num=0;
main()
{
	setlocale(LC_ALL,"");
	cout<<"Digite la cantidad de casos prueba"<<endl;
	cin>>casos;
	cout<<"Digite la dimensión de la candena de caracteres"<<endl;
	cin>>longitud;
	char mensaje[longitud];
	cout<<"Digite la cantidad de veces que canal puede cambiar las letras"<<endl;
	cin>>cambios;
	for(i=0; i<casos; i++)
	{
		cout<<"Digite el mensaje número "<<i+1<<endl;
		cin>>mensaje;
		mayuscula=0;
		minuscula=0;
		num=0;
		for(j=0; j<longitud; j++)
		{
			if((mensaje[j]>='a') && (mensaje[j]<='z'))
			{
				minuscula++;
			}
			if((mensaje[j]>='A') && (mensaje[j]<='Z'))
			{
				mayuscula++;
			}
			if((mensaje[j]>=-100) && (mensaje[j]<=100))
			{
				num++;
			}
		}
		if((minuscula > cambios) && (mayuscula<=cambios))
		{
			cout<<"EL mensaje fue enviado por Johnny"<<endl;
		}
		else
		{
			if((mayuscula > cambios) && (minuscula <= cambios))
			{
				cout<<"EL mensaje fue enviado por brother"<<endl;
			}
			else
			{
				if((minuscula<=cambios) && (mayuscula<=cambios) && (num==0))
				{
					cout<<"EL mensaje fue enviado por Both"<<endl;
				}
				else
				{
					if(num>=0)
					{
						cout<<"EL mensaje fue enviado por None"<<endl;
					}
					
				}
				
			}
		}
		
	}
	getch();
}
