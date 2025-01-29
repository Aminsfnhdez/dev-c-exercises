#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<math.h>

using namespace std;

class FiguraGeometrica
{
	private:
		string nombre, color;
	public:
		FiguraGeometrica(string, string);
		void mostrar_nombre();
};

FiguraGeometrica::FiguraGeometrica(string _nombre, string _color)
{
	color = _color;
	nombre = _nombre;
}

void FiguraGeometrica::mostrar_nombre()
{
	cout<<"EL NOMBRE DE LA FIGURA ES: "<<nombre<<endl;
	cout<<"EL COLOR DE LA FIGURA ES: "<<color<<endl;
}
//___________________________________________________________________________________________________________________
class Triangulo : public FiguraGeometrica
{
	private:
	int lado1, lado2, lado3;
	float areaT;
	public:
		void mostrar_lados();
		Triangulo(string, string, int, int, int, float);
		void area_triangulo();	
};

Triangulo::Triangulo(string _nombre, string _color, int _lado1, int _lado2, int _lado3, float _areaT) : FiguraGeometrica(_nombre, _color)
{
	lado1 = _lado1;
	lado2 = _lado2;
	lado3 = _lado3;
	areaT = _areaT;
}

void Triangulo::mostrar_lados()
{
	mostrar_nombre();
	cout<<"EL VALOR DEL LADO UNO ES: "<<lado1<<endl;
	cout<<"EL VALOR DEL LADO DOS ES: "<<lado2<<endl;
	cout<<"EL VALOR DEL LADO TRES ES: "<<lado3<<endl;
}
void Triangulo::area_triangulo()
{
	int base, h;
	base = lado2 / 2;
	h = sqrt((pow(lado1, 2)) - (pow(base,2)));
	areaT = (lado2 * h)/2;
	
	cout<<"EL VALOR DEL AREA ES: "<<areaT<<endl<<endl<<endl;	
}
//____________________________________________________________________________________________________________________________________________
class Cuadrado : public FiguraGeometrica
{
	private:
		int lado;
	public:
		void mostrar_cuadrado();
		Cuadrado(string, string, int);
		void area_cuadrado();	
};
Cuadrado::Cuadrado(string _nombre, string _color, int _lado) : FiguraGeometrica(_nombre, _color)
{
	lado = _lado;
}
void Cuadrado::mostrar_cuadrado()
{
	mostrar_nombre();
	cout<<"EL VALOR DEL LADO UNO ES: "<<lado<<endl;
	cout<<"EL VALOR DEL LADO DOS ES: "<<lado<<endl;
	cout<<"EL VALOR DEL LADO TRES ES: "<<lado<<endl;
	cout<<"EL VALOR DEL LADO CUATRO ES: "<<lado<<endl;
	
}
void Cuadrado::area_cuadrado()
{
	cout<<"EL VALOR DEL AREA ES: "<<pow(lado, 2)<<endl<<endl;
}
int main()
{
	Triangulo triangulo1 = Triangulo("TRIANGULO EQUILATERO", "ROJO", 4, 4, 4, 0);
	triangulo1.mostrar_lados();
	triangulo1.area_triangulo();
	
	Cuadrado cuadrado1 = Cuadrado("CUADRADO", "AZUL", 6);
	cuadrado1.mostrar_cuadrado();
	cuadrado1.area_cuadrado();
	
	
	
}
