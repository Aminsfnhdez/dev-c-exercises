#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

class Articulo
{
	private:
		int precio_base;
		string descripcion;
	public:
		Articulo(int, string);
		void calcular_precio_detal();
		void calcular_precio_al_mayor();
};

Articulo::Articulo(int _precio_base, string _descripcion)
{
	precio_base = _precio_base;
	descripcion = _descripcion;
}

void Articulo::calcular_precio_detal()
{
	cout<<"EL ARTICULO "<<descripcion<<" AL DETAL VALE: "<<precio_base+(precio_base*0.3)<<endl;
}

void Articulo::calcular_precio_al_mayor()
{
	cout<<"EL ARTICULO "<<descripcion<<" AL POR MAYOR VALE: "<<precio_base+(precio_base*0.15)<<endl;
}

main()
{
	setlocale(LC_ALL,"");
	system("color 0b");
	
	Articulo articulo1 = Articulo(100000, "JARRA");
	articulo1.calcular_precio_detal();
	articulo1.calcular_precio_al_mayor();
	getch();
}
