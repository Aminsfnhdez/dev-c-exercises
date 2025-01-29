#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

class Alumno{
	private:
		string nombre;
		int cedula;
		float n1,n2,n3;
	public:
		Alumno(string, int, float, float, float);	
		void mostrar();
		float calcular_nota();
};

Alumno::Alumno(string _nombre,int documento, float _n1, float _n2, float _n3)
{
	nombre =_nombre;
	cedula = documento;
	n1 = _n1;
	n2 = _n2;
	n3 = _n3;
}

void Alumno::mostrar()
{
	float nf;
	nf = calcular_nota();
	cout<<"EL ALUMNO: "<<nombre<<endl;
	cout<<"CON CÉDULA: "<<cedula<<endl;
	cout<<"NOTA DEFINITIVA: "<<nf<<endl;
	if(nf<3){
		cout<<"REPROBÓ LA ASIGNATURA"<<endl;
	}
	else{
		cout<<"GANÓ LA ASIGNATURA"<<endl;
	}
}

float Alumno::calcular_nota()
{
	float final;
	n1=n1*0.25;
	n2=n2*0.40;
	n3=n3*0.35;
	final=n1+n2+n3;
	return final;
}

int main()
{
	setlocale(LC_ALL,"");
	system("color 0b");
	
	Alumno alumno1 = Alumno("SOFÁN",12345,5,5,5);
	alumno1.mostrar();
	cout<<endl<<endl;
	getch();
	
	Alumno alumno2 = Alumno("CRSTIAN",10020123,5,2,4);
	alumno2.mostrar();
	cout<<endl<<endl;
	getch();
	
	Alumno alumno3 = Alumno("YAN COGOLLO",123987,2,3,3);
	alumno3.mostrar();
	cout<<endl<<endl;
	getch();
}
