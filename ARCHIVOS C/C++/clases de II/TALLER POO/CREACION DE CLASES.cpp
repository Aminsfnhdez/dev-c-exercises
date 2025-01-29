//Implementacion de clases en c++
#include<iostream>
#include<stdlib.h>
using namespace std;

class Cliente{
//	atributos
	private:
		int puntaje;
		string nombre;
//	Metodos
	public:
		Cliente (int, string);//constructor
		void cotizar();
		void comprar();
};
//Constructor
Cliente::Cliente(int Puntaje, string Nombre){
	puntaje=Puntaje;
	nombre = Nombre;
}
void Cliente::cotizar(){
//	codigo que permita hacer una cotizacion... 
cout<<"Bienvenido: "<<nombre<<" al sistema de ventas SAS"<<endl;
cout<<"aqui puedes realizar tu cotizacon"<<endl;

}
void Cliente::comprar(){
//	codigo que permita hacer una cotizacion... 
cout<<"Bienvenido: "<<nombre<<" al sistema de ventas SAS"<<endl;
cout<<"tus puntos actuales son "<<puntaje<<" aqui puedes realizar tu compra y sumar puntos"<<endl;

}

int main (){
	Cliente cliente1 = Cliente(1000, "Pepito Perez");
	cliente1.cotizar();
	Cliente cliente2 = Cliente(500, "Maria Pedraza");
	cliente2.cotizar();
	cliente2.comprar();
	
}
