//Isaac Amin Sofan Hernandez
#include<iostream>
#include<conio.h>
#include <locale.h>
#include <wchar.h>
#include <stdio.h>
#include <windows.h>
using namespace std;
int vector[7];
void llenar_vector()
{
	for(int i=0; i<6; i++)
	{
		cout<<"Digite el elemento "<<i+1<<" de 6 del vector"<<endl;
		cin>>vector[i];
	}
}
void ordenar_vector()
{
	int i, pos, aux;
	cout<<"\t\t\t == ORDENANDO EL VECTOR =="<<endl;
	Sleep(1000);
	for(i=0; i<6; i++)
	{
		pos = i;
		aux = vector[i];
		while((pos>0) && (vector[pos-1] > aux))
		{
			vector[pos] = vector[pos-1];
			pos--;
		}
		vector[pos] = aux;
	}
	cout<<"\t\t\t == VECTOR ORDENADO =="<<endl;
	for(i=0; i<6; i++)
	{
		cout<<vector[i]<<endl;
	}
	
}
void insertar_elemento()
{
	int i, pos, aux, num, posicion;
	cout<<"\t\t\t == INSERTANDO ELEMENTO EN EL VECTOR =="<<endl;
	cout<<"Digite el elemento a insertar"<<endl;
	cin>>num;
	vector[6] = num; 
	for(i=0; i<7; i++)
	{
		pos = i;
		aux = vector[i];
		while((pos>0) && (vector[pos-1] > aux))
		{
			vector[pos] = vector[pos-1];
			pos--;
		}
		vector[pos] = aux;
	}
	
	for(i=0; i<7; i++)
	{
		if(vector[i] == num)
		{
			posicion = i;
		}
	}
	cout<<"El elemento "<<num<<" quedó insertado en la posición "<<posicion<<" del vector"<<endl;
	for(i=0; i<7; i++)
	{
		cout<<"Posición "<<i<<" del vector es: "<<vector[i]<<endl;
	}
	cout<<"\t\t\t == ELEMENTO INSERTADO EN EL VECTOR =="<<endl;
}
void contar_neg_par()
{
	int cont=0, i;
	for(i=0; i<7; i++)
	{
		if((vector[i]<0) && (vector[i]%2)==0)
		{
			cont++;
		}
	}
	cout<<"La contidad de elementos que son pares y negativos en el vector es: "<<cont<<endl;;
	
}
void mostrar_vector()
{
	cout<<"\t\t\t == MOSTRANDO EL VECTOR =="<<endl;
	for(int i=0; i<7; i++)
	{
		cout<<vector[i]<<endl;
		Sleep(200);
	}
	cout<<"\t\t\t   == VECTOR MOSTRADO =="<<endl;
}
int salir()
{
	int sal=0;
	cout<<"\t\t\t == SALIENDO =="<<endl;
	do
	{
		cout<<"¿Realmente desea salir? "<<endl;
		cout<<"Si, Teclee '1' "<<endl;		
		cout<<"No, Teclee '2' "<<endl;
		cin>>sal;
		if(sal==1)
		{
			sal=7;
		}		
	}while(sal<1);
	return sal;
	//cout<<"\t\t\t == CHAO =="<<endl;
}
int error()
{
	int x=0;
	cout<<"\t\t\t == ERROR =="<<endl;
	cout<<"Opción incorrecta, debe eligir un valor entre '1' y '7' "<<endl;
	return x;
}
void menu()
{
	int op=0;
	do
	{
		cout<<"Para ingresar los valores del vector, Teclee '1'"<<endl;
		cout<<"Para ordenar el vector por Inserción, Teclee '2'"<<endl;
		cout<<"Para insertar un elemento en el vector ordenado, Teclee '3'"<<endl;
		cout<<"Para contar los números pares y negativos del vector, Teclee '4'"<<endl;
		cout<<"Para mostrar el vector, Teclee '5'"<<endl;
		cout<<"Para salir, Teclee '6'"<<endl;
		cin>>op;
		switch(op)
		{
			case 1: system("cls");
					llenar_vector();
					system("pause");
					system("cls");
					break;
			case 2: system("cls");
					ordenar_vector();
					system("pause");
					system("cls");
					break;
			case 3: system("cls");
					insertar_elemento();
					system("pause");
					system("cls");
					break;
			case 4: system("cls");
					contar_neg_par();
					system("pause");
					system("cls");
					break;		
			case 5: system("cls");
					mostrar_vector();
					system("pause");
					system("cls");
					break;		
			case 6: system("cls");
					op=salir();
					//system("pause");
					system("cls");
					break;
			default: system("cls");
					 op=error();
					 system("pause");
					 system("cls");
					 break;		
		}
	}while(op<=6);
}
main()
{
	setlocale(LC_ALL,"");
	menu();
	cout<<"\t\t\t == CHAO =="<<endl;
	getch();
}
