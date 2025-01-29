//calcular el area de un triangulo pididendo b y h por pantalla
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

class Triangulo
{
	//atributos
	private:
		int b;
		int h;
		int a;
	
	//metodos o funciones
	public:
		Triangulo(int, int, int);
		void calcular();
	
};

//contructor aqui los atrin¿butos deben tener otro nombre diferentes a los mismos
Triangulo :: Triangulo (int b_b, int h_h, int a_a)
{
	b = b_b;
	h = h_h;
	a = a_a;
}
//metodo calcular
void Triangulo::calcular() 
{
//	int a;
	a = (b*h) / 2;
	cout<<"EL AREA DEL TRIANGULO ES: "<<a<<endl;
}
//funcion principal
int main()
{
	int base, altura;
	cout<<"INGRESE LA BASE DEL TRIANGULO: ";	cin>>base;
	cout<<"INGRESE LA ALTURA DEL TRIANGULO: ";	cin>>altura;
	
	Triangulo triangulo1 = Triangulo(base, altura, 0);//se mandan todos los atributos de la clase y los que no se inicializan en cero.
	
	triangulo1.calcular();
}

