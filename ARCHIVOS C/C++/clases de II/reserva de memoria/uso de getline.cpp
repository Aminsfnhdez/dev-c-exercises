#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	string nombre;
	char apellido[30];
	cout<<"ingrese sus nombres: ";
	//cin>>nombre;
	getline(cin, nombre);
	cout<<"ingrese sus Apellidos: ";
	//cin>>apellido;
	cin.getline(apellido, 30, '\n');
	cout<<endl<<"el nombre registrado es: "<<nombre<<endl;
	cout<<endl<<"el apellido registrado es: "<<apellido<<endl;
}

