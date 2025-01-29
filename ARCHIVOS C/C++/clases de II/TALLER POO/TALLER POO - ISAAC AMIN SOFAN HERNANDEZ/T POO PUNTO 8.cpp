#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

//_________________________________________________________________________________________________________________________________________
class Empleado
{
	private:
		
		int horas_trabajadas;
		double sueldo_por_hora;
		double sueldo;
	public:
		Empleado(double);
		void setHoras_Trabajadas(int);
		int getHoras_Trabajadas();	
		void setSueldo_por_Hora(double);
		double getSueldo_por_Hora();	
		double getSueldo();
		virtual double Calcular_salario();
};

Empleado::Empleado( double _sueldo)
{
	sueldo = _sueldo;
}

void Empleado::setHoras_Trabajadas(int _horas_trabajadas)
{
	horas_trabajadas = _horas_trabajadas;
}

int Empleado::getHoras_Trabajadas()
{
	return horas_trabajadas;
}

void Empleado::setSueldo_por_Hora(double _sueldo_por_hora)
{
	sueldo_por_hora = _sueldo_por_hora;
}

double Empleado::getSueldo_por_Hora()
{
	return sueldo_por_hora;
}

double Empleado::getSueldo()
{
	return sueldo;
}

double Empleado::Calcular_salario()
{
	sueldo = horas_trabajadas * sueldo_por_hora;
}


//__________________________________________________________________________________________________________________________________________________________

class EmpleadoSinHorasExtras : public Empleado
{
	private:
		string nombre;
	public:
		EmpleadoSinHorasExtras(double, string);
		double Calcular_salario();
};

EmpleadoSinHorasExtras::EmpleadoSinHorasExtras(double _sueldo, string _nombre) : Empleado( _sueldo)
{
	nombre = _nombre;
}

double EmpleadoSinHorasExtras::Calcular_salario()
{
	cout<<"\t CALCULANDO EL SUELDO DEL EMPLEADO SIN HORAS EXTRAS"<<endl;
	double aux;
	Empleado::Calcular_salario();
	aux = getSueldo();
	cout<<"EL EMPLEAD@ "<<nombre<<" TIENE UN SUELDO DE: "<<aux<<endl<<endl;
}
// _________________________________________________________________________________________________________________________________________________________________

class EmpleadoConHorasDobles : public Empleado
{
	private:
		int horas_extras;
		string nombre;
	public:
		EmpleadoConHorasDobles(double, string);
		void setHoras_Extras(int);
		int getHoras_Extras();
		double Calcular_salario();	
};

EmpleadoConHorasDobles::EmpleadoConHorasDobles(double _sueldo, string _nombre) : Empleado( _sueldo)
{
	nombre = _nombre;
}

void EmpleadoConHorasDobles::setHoras_Extras(int _horas_extras)
{
	horas_extras = _horas_extras;
}

int EmpleadoConHorasDobles::getHoras_Extras()
{
	int aux;
	aux = getHoras_Trabajadas();
	horas_extras = aux - 40;
	return horas_extras;
}

double EmpleadoConHorasDobles::Calcular_salario()
{
	cout<<"\t CALCULANDO EL SUELDO DEL EMPLEADO CON HORAS EXTRAS DOBLES"<<endl;
	double aux3, aux1;
	Empleado::Calcular_salario();
	aux3=getSueldo();
	aux1 = getSueldo_por_Hora();
	
	cout<<"EL EMPLEAD@ "<<nombre<<" TIENE UN SUELDO DE: "<<(aux3-(horas_extras*aux1)) + (2*(horas_extras*aux1))<<endl<<endl;
	
}

//_______________________________________________________________________________________________________________________________

class EmpleadoConHorasTriples : public Empleado
{
	private:
		string nombre;
		int horas_extras;
	public:
		EmpleadoConHorasTriples(double, string);
		void setHoras_Extras(int);
		int getHoras_Extras();
		double Calcular_salario();	
};

EmpleadoConHorasTriples::EmpleadoConHorasTriples(double _sueldo, string _nombre) : Empleado(_sueldo)
{
	nombre = _nombre;
}

void EmpleadoConHorasTriples::setHoras_Extras(int _horas_extras)
{
	horas_extras = _horas_extras;
}

int EmpleadoConHorasTriples::getHoras_Extras()
{
	int aux;
	aux = getHoras_Trabajadas();
	horas_extras = aux - 45;
	return horas_extras;
}

double EmpleadoConHorasTriples::Calcular_salario()
{
	cout<<"\t CALCULANDO EL SUELDO DEL EMPLEADO CON HORAS EXTRAS TRIPLES"<<endl;
	double aux3, aux1;
	int h_doble=5;
	Empleado::Calcular_salario();
	aux3=getSueldo();
	aux1 = getSueldo_por_Hora();
	cout<<nombre<<endl;
	cout<<"EL EMPLEAD@ "<<nombre<<" TIENE UN SUELDO DE: "<<(aux3-(horas_extras*aux1)) + (3*((horas_extras-h_doble)*aux1) + (2*(h_doble*aux1)))<<endl<<endl;
	
}

//________________________________________________________________________________________________________________________________
int main()
{
	setlocale(LC_ALL,"");
	system("color 0b");
	
	EmpleadoSinHorasExtras empleado1 = EmpleadoSinHorasExtras(0, "CARLOS");
	empleado1.setHoras_Trabajadas(30);
	empleado1.getHoras_Trabajadas();
	empleado1.setSueldo_por_Hora(8000);
	empleado1.getSueldo_por_Hora();
	empleado1.Calcular_salario();
	getch();
	
	EmpleadoConHorasDobles empleado2 = EmpleadoConHorasDobles(0, "JUAN");
	empleado2.setHoras_Trabajadas(43);
	empleado2.getHoras_Trabajadas();
	empleado2.setSueldo_por_Hora(8000);
	empleado2.getSueldo_por_Hora();
	empleado2.getHoras_Extras();
	empleado2.Calcular_salario();
	getch();
	
	EmpleadoConHorasTriples empleado3 = EmpleadoConHorasTriples(0, "MARTHA");
	empleado3.setHoras_Trabajadas(50);
	empleado3.getHoras_Trabajadas();
	empleado3.setSueldo_por_Hora(8000);
	empleado3.getSueldo_por_Hora();
	empleado3.getHoras_Extras();
	empleado3.Calcular_salario();
	getch();
	
	
}
