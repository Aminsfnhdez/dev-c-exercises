#include <iostream>
#include <stdio.h> //librerias para ejecucion
#include <stdlib.h>//libreria para limpiar pantalla
#include <conio.h> //librerias para ejecucion
//#include <wchar.h> //librerias para los caracteres en pantalla
#include <locale.h> //librerias para los caracteres en pantalla
//#include <string.h>//libreria para 'string'
//#include <math.h>//libreria para funciones matematicas
#include <windows.h>//libreria para usar 'Sleep'

using namespace std;
int op, num;
void menu()
{
	cout<<"\t\t\tBIENVENIDO A CONOCIENDO LOS N�MEROS"<<endl;
	cout<<"A CONTINUACI�N SE LE MOSTRAR� UNA SERIE DE OPCIONES, POR FAVOR ESCOJA UNA."<<endl;
	Sleep(500);
	cout<<"1. PARA SABER SI UN N�MERO CUALQUIERA PUEDE SER DIVISIBLE ENTRE '2', '3', '5', '6', '9', '10' � '11'"<<endl;
	Sleep(500);
	cout<<"2. PARA SABER SI UN N�MERO CUALQUIERA ES PRIMO ADEM�S Y SI ES PAR O IMPAR"<<endl;
	Sleep(500);
	cout<<"3. PARA MOSTRAR LA CRIBA DE ERAST�STENES"<<endl;
	Sleep(500);
	cout<<"4. PARA SALIR"<<endl;
	Sleep(500);
	cout<<"DIGITE SU OPCI�N: ";
}
void divisibilidad()
{
	int p=0;
	do
	{
		int dos=0, tres=0;
		cout<<"\t\t\tBIENVENIDO A CONOCIENDO LOS N�MEROS"<<endl;
		cout<<"A CONTINUACI�N VERIFICAREMOS SI UN N�MERO ES DIVISIBLE ENTRE '2', '3', '5', '6', '9', '10' � '11' "<<endl;
		cout<<"POR FAVOR DIGITE UN N�MERO: ";  cin>>num;
		cout<<"ESPERE UN MOMENTO POR FAVOR, ESTAMOS TRABAJANDO PARA USTED."<<endl<<endl;
		Sleep(3000);
		if(num%2==0)
		{
			dos=1;
			cout<<"EL N�MERO '"<<num<<"' ES DIVISIBLE ENTRE DOS"<<endl;
		}
		else
		{
			cout<<"EL N�MERO '"<<num<<"' NO ES DIVISIBLE ENTRE DOS"<<endl;
		}
		Sleep(1500);
		
		if(num%3==0)
		{
			tres=1;
			cout<<"EL N�MERO '"<<num<<"' ES DIVISIBLE ENTRE TRES"<<endl;
		}
		else
		{
			cout<<"EL N�MERO '"<<num<<"' NO ES DIVISIBLE ENTRE TRES"<<endl;
		}
		Sleep(1500);
		
		if(num%5==0)
		{
			cout<<"EL N�MERO '"<<num<<"' ES DIVISIBLE ENTRE CINCO"<<endl;
		}
		else
		{
			cout<<"EL N�MERO '"<<num<<"' NO ES DIVISIBLE ENTRE CINCO"<<endl;
		}
		Sleep(1500);
		
		if((dos==1) && (tres==1))
		{
			cout<<"EL N�MERO '"<<num<<"' ES DIVISIBLE ENTRE SEIS"<<endl;
		}
		else
		{
			cout<<"EL N�MERO '"<<num<<"' NO ES DIVISIBLE ENTRE SEIS"<<endl;
		}
		Sleep(1500);
		
		if(num%9==0)
		{
			cout<<"EL N�MERO '"<<num<<"' ES DIVISIBLE ENTRE NUEVE"<<endl;
		}
		else
		{
			cout<<"EL N�MERO '"<<num<<"' NO ES DIVISIBLE ENTRE NUEVE"<<endl;
		}
		Sleep(1500);
		
		if(num%10==0)
		{
			cout<<"EL N�MERO '"<<num<<"' ES DIVISIBLE ENTRE DIEZ"<<endl;
		}
		else
		{
			cout<<"EL N�MERO '"<<num<<"' NO ES DIVISIBLE ENTRE DIEZ"<<endl;
		}
		Sleep(1500);
		
		if(num%11==0)
		{
			cout<<"EL N�MERO '"<<num<<"' ES DIVISIBLE ENTRE ONCE"<<endl;
		}
		else
		{
			cout<<"EL N�MERO '"<<num<<"' NO ES DIVISIBLE ENTRE ONCE"<<endl;
		}
		Sleep(1500);
		
		cout<<endl<<"�DESEA INGRESAR OTRO N�MERO?"<<endl;
		cout<<"1. SI"<<endl<<"2. NO, VOLVER AL MEN� PRINCIPAL"<<endl<<"DIGITE SU OPCI�N: ";  cin>>p;
		system("cls");
	}while(p==1);
}
void primo()
{
	int h=0;
	do
	{
		int cont=0;
		cout<<"\t\t\tBIENVENIDO A CONOCIENDO LOS N�MEROS"<<endl;
		cout<<"A CONTINUACI�N VERIFICAREMOS SI UN N�MERO ES PRIMO, ADEM�S SI ES PAR � IMPAR"<<endl;
		cout<<"POR FAVOR DIGITE UN N�MERO: ";  cin>>num;
		cout<<"ESPERE UN MOMENTO POR FAVOR, ESTAMOS TRABAJANDO PARA USTED."<<endl<<endl;
		Sleep(3000);
		
		for(int i=1; i<=num; i++)
		{
			if(num%i==0)
			{
				cont++;
			}
		}
		if(cont==2)
		{
			cout<<"EL N�MERO '"<<num<<"' ES PRIMO"<<endl;
		}
		else
		{
			cout<<"EL N�MERO '"<<num<<"' NO ES PRIMO"<<endl;
		}
		Sleep(1500);
		
		if(num%2==0)
		{
			cout<<"EL N�MERO '"<<num<<"' ES PAR"<<endl;
		}
		else
		{
			cout<<"EL N�MERO '"<<num<<"' ES IMPAR"<<endl;
		}
		Sleep(1500);
		
		cout<<endl<<"�DESEA INGRESAR OTRO N�MERO?"<<endl;
		cout<<"1. SI"<<endl<<"2. NO, VOLVER AL MEN� PRINCIPAL"<<endl<<"DIGITE SU OPCI�N: ";  cin>>h;
		system("cls");
	}while(h==1);
}


void criba()
{
	int q=0;
	do
	{
		int  dif, gh=1, n1, n2, pw, cas;
		cout<<"\t\t\tBIENVENIDO A CONOCIENDO LOS N�MEROS"<<endl;
		cout<<"VAMOS A MOSTRAR LA CRIBA DE ERAST�STENES. PERO TU ME DIRAS DESDE DONDE EMPEZAR� Y HASTA DONDE TERMINAR�"<<endl;
		cout<<"POR FAVOR DIGITE DESDE EMPEZAR� A MOSTRAR: ";  cin>>n1;
		cout<<"VAMOS A MOSTRAR LA CRIBA DE ERAST�STENES. PERO TU ME DIRAS DESDE DONDE EMPEZAR� Y HASTA DONDE TERMINAR�"<<endl;
		cout<<"POR FAVOR DIGITE HASTA DONDE SE MOSTRAR�: ";  cin>>n2;
		cout<<"ESPERE UN MOMENTO POR FAVOR, ESTAMOS TRABAJANDO PARA USTED."<<endl<<endl;
		Sleep(3000);
		dif = n2-n1;
		if(n1==1)
		{
			dif += 1;
		}
		else
		{
			dif += 2;
		}
		for(int t=1; t<=dif; t++)
		{
			pw = n1-1+t;
			cas=0;
			for(int i=1; i<=pw; i++)
			{
				if(pw%i==0)
				{
					cas++;
				}
			}
			Sleep(1500);
			
			if(gh<=10)
			{
				if(cas==2)
				{
					system("color 0d");
					cout<<pw<<"\t";
				}
				else
				{
					system("color 0c");	
					cout<<pw<<"\t";	
				}
				
				gh++;
				if(gh==11)
				{
					cout<<endl;
					gh=1;
				}
				
			}
			
			
		}
		system("color 0b");
		
		cout<<endl<<"�DESEA VOLVER A MOSTRAR OTRA CRIBA?"<<endl;
		cout<<"1. SI"<<endl<<"2. NO, VOLVER AL MEN� PRINCIPAL"<<endl<<"DIGITE SU OPCI�N: ";  cin>>q;
		system("cls");
	}while(q==1);
	
}
int main()
{
	setlocale(LC_ALL,"");
	system("color 0b");
	do
	{
		menu();  cin>>op;
		switch(op)
		{
			case 1: system("cls");
					divisibilidad();
					system("pause");
					system("cls");
					break;
			case 2: system("cls");
					primo();
					system("pause");
					system("cls");
					break;
			case 3: system("cls");
					criba();
					system("pause");
					system("cls");
					break;		
			case 4: system("cls");
					cout<<"\t\t\tHASTA LA VISTA BABY"<<endl;
					break;
			default: system("cls");
					cout<<"\t\tERROR OPCI�N INCORRECTA, DIGITE UN N�MERO ENTRE 1 Y 4"<<endl;
					Sleep(2000);
					system("cls");
					main();
											
		}
	}while(op<4);
	
	
	getch();
}
