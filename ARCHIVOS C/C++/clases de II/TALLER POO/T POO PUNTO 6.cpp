#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<ctime>

using namespace std;
// clase padre____________________________________________________________________________________________________________________________________________________
class Empleado{
	private:
	string nombre;
	int edad,identidad;
	public:
	Empleado(string, int, int);
	void mostrar();
};

// metodos clase padre

Empleado::Empleado(string _nombre, int _identidad, int _edad){
	nombre = _nombre;
	identidad = _identidad;
	edad = _edad; 
}
void Empleado::mostrar()
{
	cout<<"EL EMPLEADO: "<<nombre<<endl<<"CON CEDULA: "<<identidad<<endl<<"TIENE: "<<edad<<" AÑOS"<<endl;
}


//clases hijas_______________________________________________________________________________________________________________________________________________
class Emp_temporal:public Empleado
{
	private:
		int d_ing, m_ing, a_ing, d_sal, m_sal, a_sal;
	public:
		Emp_temporal(string,int,int,int,int,int,int,int,int);
		void mos_temporal();
		void calcular_temp();
};

Emp_temporal::Emp_temporal(string _nombre, int _identidad, int _edad, int dia_ing, int mes_ing, int anio_ing, int dia_sal, int mes_sal, int anio_sal):Empleado(_nombre, _identidad, _edad)
{
	d_ing = dia_ing;
	m_ing = mes_ing;
	a_ing = anio_ing;
	d_sal = dia_sal;
	m_sal = mes_sal;
	a_sal = anio_sal;
}

void Emp_temporal::mos_temporal()
{
	cout<<"\t DATOS DEL EMPLEADO TEMPORAL"<<endl;
	mostrar();
	cout<<"FECHA DE INGRESO ES: DÍA "<<d_ing<<" DEL MES "<<m_ing<<" DEL AÑO "<<a_ing<<endl;
	cout<<"FECHA DE SALIDAES: DÍA "<<d_sal<<" DEL MES "<<m_sal<<" DEL AÑO "<<a_sal<<endl;
	calcular_temp();
}

void Emp_temporal::calcular_temp(){
	int vlr_mes=350000;
	int m,a;
	m = m_sal - m_ing;
	if(m<0)
	{
		m = m + 12;
	}
	a = a_sal - a_ing;
	
	cout<<"EL SUELDO FIJO MENSUALL ES: "<<vlr_mes<<endl;
	cout<<"EL TOTAL DEL SUELDO DEL EMPLEADO ES: "<<(vlr_mes*m)+(vlr_mes*(a*12))<<endl;
}
//________________________________________________________________________________________________________________________________________________________________________
class Emp_horas:public Empleado
{
	private:
		int vlr_hora;
		int n_hora;
	public:
		Emp_horas(string,int,int,int,int);
		void mostrar_horas();
		void calcular_horas();
};

Emp_horas::Emp_horas(string _nombre, int _identidad, int _edad, int _vlrhora, int _nhora):Empleado(_nombre,_identidad,_edad)
{
	vlr_hora = _vlrhora;
	n_hora = _nhora;
}

void Emp_horas::mostrar_horas()
{
	cout<<"\t LOS DATOS DEL EMPLEADO POR HORAS"<<endl;
	vlr_hora = 2500;
	cout<<"¿CUÁNTAS HORAS TRABAJO EL EMPLEADO ESTE MES?: ";	cin>>n_hora;
	mostrar();
	cout<<"EL VALOR DE LA HORA TRABAJADA ES: "<<vlr_hora<<endl;
	cout<<"EL NÚMERPO DE HORAS TRABAJADAS EN EL MES ES: "<<n_hora<<endl;
	calcular_horas();
}

void Emp_horas::calcular_horas()
{
	cout<<"EL TOTAL DEL SUELDO DEL EMPLEADO ES: "<<vlr_hora*n_hora<<endl;
}

//___________________________________________________________________________________________________________________________________________________

class Emp_fijo:public Empleado
{
	private:
		int di_ing, me_ing, an_ing;
	public:
		Emp_fijo(string,int,int,int,int,int);
		void mostrar_fijo();
		void calcular_fijo();
};

Emp_fijo::Emp_fijo(string _nombre, int _identidad, int _edad, int dia, int mes, int anio):Empleado(_nombre,_identidad,_edad)
{
	di_ing = dia;
	me_ing = mes;
	an_ing = anio;
}

void Emp_fijo::mostrar_fijo()
{
	cout<<"\t DATOS DEL EMPLEADO FIJO"<<endl;
	mostrar();
	cout<<"FECHA DE INGRESO ES: DÍA "<<di_ing<<" DEL MES "<<me_ing<<" DEL AÑO "<<an_ing<<endl;
	calcular_fijo();
}
void Emp_fijo::calcular_fijo(){
	int vlr_base = 900000;
	int complemento_anual = 200000;
	
	int n_anios;	
	time_t 	now= time(NULL);
	struct	tm *time= localtime(&now);
    n_anios = (time->tm_year+1900) - an_ing;
    cout<<"EL TOTAL DEL SUELDO DEL EMPLEADO ES: "<<(vlr_base+complemento_anual)*n_anios<<endl;
}

// función principal___________________________________________________________________________________________________________________________________
int main()
{
	setlocale(LC_ALL,"");
	system("color 0b");
	
	Emp_fijo emplado1 = Emp_fijo("JOSE", 12345, 43, 02, 02, 2012);
	emplado1.mostrar_fijo();
	cout<<endl;
	getch();
	
	Emp_temporal empleado2 = Emp_temporal("STEIVEN", 82631, 34, 23, 03, 2000, 4, 11, 2019);
	empleado2.mos_temporal();
	cout<<endl;
	getch();
	
	Emp_horas empleado3 = Emp_horas("CARLOS", 98345, 25, 0, 0);
	empleado3.mostrar_horas();
	
	
	getch();
}
